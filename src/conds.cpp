#include <iostream>
#include <cpp_test/conds.h>
#define MIN_DRIVE_AGE 16
#define YEARS_FROM_LAST_EXAM 5

using namespace std;

void can_drive(unsigned int age, unsigned int last_exam, bool is_toxicated = false){
  if ((age >= 0) && (age < MIN_DRIVE_AGE)) {
    cout << "You are to young to drive" << endl;
  } else if (is_toxicated) {
    cout << "You are not able to drive" << endl;
  } else if (age >= 70 && ((age > 100) || (last_exam > YEARS_FROM_LAST_EXAM))) {
    cout << "You can`t drive" << endl;
  } else {
    cout << "You could drive" << endl;
  }

  int some_options = 2;

  switch(some_options) {
    case 1:
      cout << "Hello!" << endl;
      break; // very important, stop comparing
    case 2:
      cout << "Hallo!" << endl;
      break;
    case 3:
      cout << "Bonjour!" << endl;
      break;

    default:
      cout << "Здрасти!" << endl;
  }

  int ternary = (3 > 5) ? 3 : 5;
  cout << "Ternary operator is " << ternary << endl;
  cout << "********************************" << endl;
}
