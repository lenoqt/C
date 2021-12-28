#include <iostream> 

// .h file 
class Test
{

private:
  int id;
  static int count;

public:
  Test () {
    id = count++;
  }

  int getId() {
    return id;
  }

  static void showInfo() {
    std::cout << count << std::endl;
  }
  // Initialization of const must be done here. 
  static int const MAX{99};
};


// .cpp source 

int Test::count{0};

int main ()
{

  Test::showInfo();
  std::cout << Test::MAX << std::endl;

  Test test1;
  std::cout << "Object1 ID: " << test1.getId() << std::endl;
  
  Test test2;
  std::cout << "Object2 ID: "<<  test2.getId() << std::endl;
  return 0;
}
