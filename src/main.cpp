#include <iostream>
#include <cpp_test/primitives.h>
#include <cpp_test/conds.h>
#include <cpp_test/containers.h>
#include <cpp_test/loops.h>
#include <cpp_test/strings.h>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc > 1) {
    cout << "You use " << argc - 1 << " arguments" << endl;
    for (int i = 1; i < argc; ++i) {
      cout << argv[i] << endl;
    }
  }

  // Examples of primitive types and operations
  // primitives();

  // Examples of conditions
  // unsigned int age = 35;
  // unsigned int last_exam = 3;
  // bool is_toxicated = false;
  // can_drive(age, last_exam, is_toxicated);

  // test arrays
  // test_arrays();

  // test loops
  // test_loops();

  // tests strings
  test_strings();
  return 0;
}
