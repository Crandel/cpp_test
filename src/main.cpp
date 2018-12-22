#include <iostream>
#include "my_primitives.h"
#include <my_conds.h>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc > 1) {
    cout << "You use " << argc - 1 << " arguments" << endl;
    for (int i = 1; i < argc; ++i) {
      cout << argv[i] << endl;
    }
  }

  unsigned int age = 35;
  unsigned int last_exam = 3;
  bool is_toxicated = false;

  my_primitives();
  can_drive(age, last_exam, is_toxicated);

  return 0;
}
