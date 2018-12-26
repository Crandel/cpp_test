#include <iostream>
#include <cpp_test/pointers.h>

using namespace std;

void pointers_test(int* age) {
  char grade = 'A';

  cout << "Age located in " << age << endl;
  *age = 45;

  cout << "Size of int " << sizeof(*age) << endl;
  cout << "Size of char " << sizeof(grade) << endl;

  // pointer is an address of first element "43"
  int some_array[6] = {43, 4, 122, 54, 2, 6};
  int* some_pnt = some_array;
  cout << "Address of first element of array: "
       << some_array
       << " Value: "
       << *some_pnt // 43
       << endl;
  some_pnt++;
  cout << "Address of second element of array: "
       << some_array
       << " Value: "
       << *some_pnt // 4
       << endl;
  
}
