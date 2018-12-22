#include <iostream>
#include <my_conds.h>
#define MIN_DRIVE_AGE 16
#define YEARS_FROM_LAST_EXAM 5

using namespace std;

void can_drive(unsigned int age, unsigned int last_exam, bool is_toxicated){
  if ((age >= 0) && (age < MIN_DRIVE_AGE)) {
    cout << "You are to young to drive" << endl;
  } else if (is_toxicated) {
    cout << "You are not able to drive" << endl;
  } else if (age >= 70 && ((age > 100) || (last_exam > YEARS_FROM_LAST_EXAM))) {
    cout << "You can`t drive" << endl;
  } else {
    cout << "You could drive" << endl;
  }
}
