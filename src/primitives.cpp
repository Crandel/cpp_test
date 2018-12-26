#include <iostream>
#include <cpp_test/primitives.h>

using namespace std;

void primitives(void) {

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
       << ", short " << s_age
       << ", long " << l_age
       << ", long long " << ll_age
       << ", unsigned " << u_age
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
  cout << "5 % 2 = " << 5 % 2 << endl;
  cout << "2 / 5 = " << 2 / 5 << endl;
  cout << "float 2 / 5 = " << (float) 2 / 5 << endl;
  cout << "age++ = " << age++ << endl;
  cout << "++age = " << ++age << endl;
  cout << "age-- = " << age-- << endl;
  cout << "--age = " << --age << endl;

  cout << "-----------------------------------" << endl;
}

void exception_test(int val){
  try {
    if (val != 0){
      cout << "2 divade to val is " << 2/val << endl;
    } else throw("val is equal to zero, please change val");
  } catch(const char* msg) {
    cout << "Exception with message '"
         << msg
         << "' and val "
         << val
         << endl;
  }
}
