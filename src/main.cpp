#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
  cout << "Hello world!" << endl;

  char myGrade = 'A';

  bool isHappy = true;

  int age = 30;

  short int s_age = -20;
  long int l_age = 20;
  long long int ll_age = 35;

  unsigned int u_age = 25;

  float best_num = 42.42;

  const double PI = 3.1415926535;

  long double million = 1432999.45;

  cout << "Your Grade is " << myGrade << endl;
  cout << "Do you happy? " << isHappy << endl;
  cout << "My age is " << age
       << "short " << s_age
       << "long " << l_age
       << "long long " << ll_age
       << "unsigned " << u_age
       << endl;
  cout << "My best number is " << best_num << endl;
  cout << "Pi = " << PI << endl;
  cout << "Your balance is " << million << endl;
  cout << "Size of types: int -> " << sizeof(age)
       << ", bool -> " << sizeof(isHappy)
       << ", float -> " << sizeof(best_num)
       << ", long double ->" << sizeof(million)
       << endl;

  cout << "5 + 4 = " << 5 + 4 << endl; // same for -, *, /

  return 0;
}
