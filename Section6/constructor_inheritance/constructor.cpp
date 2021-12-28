#include <iostream>

class Machine
{
public:

  Machine(): id(0) { 
    std::cout << "Machine no-args constructor called\n";}
  Machine(int id): id(id) { 
    std::cout << "Machine parametrized constructor called\n";}

  void info() { 
    std::cout << "ID: " << id << "\n"; }

private:
  int id;
  
};

class Vehicle: public Machine
{
public:

  Vehicle() { 
    std::cout << "Vehicle no-args constructor called\n"; }
  
  Vehicle(int id): Machine(id) { 
    std::cout << "Vehicle parametrized constructor called\n";}

private:
  
};

class Car: public Vehicle
{
public:

  Car(): Vehicle(999) { 
    std::cout << "Car no-args constructor called\n";}
private:
  
};


int main ()
{
  
  Vehicle vehicle(123);
  vehicle.info();

  Car car;
  car.info();

  return 0;

}
