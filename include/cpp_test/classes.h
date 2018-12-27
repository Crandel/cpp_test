#ifndef CLASSES_H
#define CLASSES_H

#include <string>

using namespace std;

void classes_test(void);

class Animal{
private:
  int height;
  int width;
  int weight;
  string name;

  static int number_of_animals;

public:
  int get_height();
  int get_weight();
  int get_width();
  string get_name();

  void set_height(int ch);
  void set_weight(int cw);
  void set_width(int cwid);
  void set_name(string cn);

  Animal();
  Animal(int, int, int, string);

  ~Animal();

  static int get_animals_number(){ return number_of_animals; };

  string toString();
};

class Dog: public Animal{
private:
  string sound = "Woof!";

public:
  string get_sound();
  string toString();

  Dog(): Animal(){};
  Dog(int, int, int, string, string);
};
#endif
