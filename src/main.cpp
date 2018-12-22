#include <iostream>
#include "my_primitives.h"

using namespace std;

int main(int argc, char *argv[]) {
  if (argc > 1) {
    cout << "You use " << argc - 1 << " arguments" << endl;
    for (int i = 1; i < argc; ++i) {
      cout << argv[i] << endl;
    }
  }

  my_primitives();
  return 0;
}
