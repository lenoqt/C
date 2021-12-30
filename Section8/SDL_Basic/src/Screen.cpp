#include "Screen.h"
#include "SDL_stdinc.h"

namespace particle {

Screen::Screen()
    : m_window(NULL), m_renderer(NULL), m_texture(NULL), m_buffer(NULL),
      s_buffer(NULL) {}

bool Screen::init() {

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    return false;
  }

  m_window = SDL_CreateWindow("Particle Explosion", SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                              SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

  if (m_window == NULL) {
    // In the event that the  m_window could not be made..
    SDL_Quit();
    return false;
  }

  m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC);
  // RGBA uses 32 bits
  m_texture =
      SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA8888,
                        SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

  if (m_renderer == NULL) {
    SDL_DestroyWindow(m_window);
    SDL_Quit();
    return false;
  }

  if (m_texture == NULL) {
    SDL_DestroyRenderer(m_renderer);
    SDL_DestroyWindow(m_window);
    SDL_Quit();
    return false;
  }

  // amount of memory for all pixels.
  m_buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
  s_buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

  // flips all bytes to 1 i.e., white screen
  memset(m_buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
  memset(s_buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

  return true;
}

bool Screen::processEvents() {

  SDL_Event event;
  while (SDL_PollEvent(&event)) {

    if (event.type == SDL_QUIT) {
      return false;
    }
  }
  return true;
}

void Screen::close() {

  delete[] m_buffer;
  delete[] s_buffer;
  SDL_DestroyRenderer(m_renderer);
  SDL_DestroyTexture(m_texture);
  SDL_DestroyWindow(m_window);
  SDL_Quit();
}

void Screen::update() {

  SDL_UpdateTexture(m_texture, NULL, m_buffer, SCREEN_WIDTH * sizeof(Uint32));
  SDL_RenderClear(m_renderer);
  SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
  SDL_RenderPresent(m_renderer);
}

void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue) {

  // not efficient for large number of particles
  if (x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT) {
    return;
  }

  Uint32 color{0};

  color += red;
  color <<= 8; // shift 1 byte
  color += green;
  color <<= 8;
  color += blue;
  color <<= 8;
  color += 0xFF;

  // RGBA

  m_buffer[(y * SCREEN_WIDTH) + x] = color;
}

void Screen::clear() {

  memset(m_buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
  memset(s_buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
}

void Screen::boxBlur() {

  Uint32 *temp = m_buffer;
  m_buffer = s_buffer;
  s_buffer = temp;

  for (int y{0}; y < SCREEN_HEIGHT; y++) {
    for (int x{0}; x < SCREEN_WIDTH; x++) {

      /*
       * 0 0 0
       * 0 1 0
       * 0 0 0
       */

      int redTotal = 0;
      int greenTotal = 0;
      int blueTotal = 0;
      for (int row = -1; row <= 1; row++) {
        for (int col = -1; col <= 1; col++) {
          int currentX = x + col;
          int currentY = y + row;

          if (currentX >= 0 && currentX < SCREEN_WIDTH && currentY >= 0 &&
              currentY < SCREEN_HEIGHT) {

            Uint32 color = s_buffer[currentY * SCREEN_WIDTH + currentX];

            Uint8 red = color >> 24;
            Uint8 green = color >> 16;
            Uint8 blue = color >> 8;

            redTotal += red;
            greenTotal += red;
            blueTotal += red;
          }
        }
      }

      Uint8 red = redTotal / 9;
      Uint8 green = redTotal / 9;
      Uint8 blue = redTotal / 9;

      setPixel(x, y, red, green, blue);
    }
  }
}

} // namespace particle
