#include <iostream>
#include <cpp_test/primitives.h>
#include <cpp_test/conds.h>
#include <cpp_test/containers.h>
#include <cpp_test/loops.h>
#include <cpp_test/strings.h>

using namespace std;

int add_nums(int first, int second = 0){
  return first + second;
}

int add_nums(int first, int second, int third){
  return first + second + third;
}


int main(int argc, char *argv[]) {
  if (argc > 1) {
    cout << "You use " << argc - 1 << " arguments" << endl;
    for (int i = 1; i < argc; ++i) {
      cout << argv[i] << endl;
    }
  }

  cout << "1 args " << add_nums(2) << endl;
  cout << "2 args " << add_nums(2, 3) << endl;
  cout << "3 args " << add_nums(2, 3, 4) << endl;
  // Examples of primitive types and operations
  // primitives();

  // Examples of conditions
  // unsigned int age = 35;
  // unsigned int last_exam = 3;
  // bool is_toxicated = false;
  // can_drive(age, last_exam, is_toxicated);

  // test arrays
  // test_arrays();
  // test vectors
  //test_vectors();

  // test loops
  // test_loops();

  // tests strings
  //test_strings();
  return 0;
}
