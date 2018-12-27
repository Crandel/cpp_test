#include <iostream>
#include <string>

#include <cpp_test/classes.h>

using namespace std;

int Animal::get_height(){ return height; }
int Animal::get_width(){ return width; }
int Animal::get_weight(){ return weight; }
string Animal::get_name(){ return name; }

void Animal::set_height(int ch){ height = (ch > 0) ? ch : 0; }
void Animal::set_width(int cwid){ width = (cwid > 0) ? cwid : 0; }
void Animal::set_weight(int cw){ weight = (cw > 0) ? cw : 0; }
void Animal::set_name(string cn){ name = !cn.empty() ? cn : "John Dou"; }

// constructors
Animal::Animal(int height, int width, int weight, string name){
  set_height(height);
  set_width(width);
  set_weight(weight);
  set_name(name);
  Animal::number_of_animals++;
}

Animal::Animal(){
  set_height(0);
  set_width(0);
  set_weight(0);
  set_name("John Dou");
  Animal::number_of_animals++;
}

// destructor
Animal::~Animal(){
  cout << "Animal object " << this -> name << " destroyed!" << endl;
  Animal::number_of_animals--;
}

int Animal::number_of_animals = 0;

string Animal::toString(){
  string description = "Animal ";
  description.append(this -> name);
  description.append(" {height: ");
  description.append(to_string(this -> height));
  description.append(", width: ");
  description.append(to_string(this -> width));
  description.append(", weight: ");
  description.append(to_string(this -> weight));
  description.append("}");
  return description;
};

Dog::Dog(int height, int width, int weight, string name, string sound):
Animal(height, width, weight, name){
  this -> sound = sound;
}

string Dog::get_sound(){ return sound; }
string Dog::toString(){
  string description = "Dog ";
  description.append(this -> get_name());
  description.append(" {height: ");
  description.append(to_string(this -> get_height()));
  description.append(", width: ");
  description.append(to_string(this -> get_width()));
  description.append(", weight: ");
  description.append(to_string(this -> get_weight()));
  description.append("} make a sound ");
  description.append(this -> sound);
  return description;
}



void classes_test(void){

  cout << "Create Santa" << endl;
  Animal santa;
  cout << Animal::get_animals_number() << endl;

  cout << santa.toString() << endl;
  cout << "Change default name to Santa" << endl;
  santa.set_name("Santa");
  cout << santa.toString() << endl;

  cout << "Create Tom " << endl;
  Animal tom(15, 34, 10, "Tom");
  cout << Animal::get_animals_number() << endl;
  cout << tom.toString() << endl;

  cout << "Change height for " << tom.get_name() << endl;
  tom.set_height(17);
  cout << tom.toString() << endl;

  cout << "Create Dog Tyzik " << endl;
  Dog tyzik(10, 14, 5, "Tyzik", "Gav gav");
  cout << Animal::get_animals_number() << endl;
  cout << tyzik.toString() << endl;

}
