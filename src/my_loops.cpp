#include <iostream>
#include <string>
#include <cpp_test/my_loops.h>

using namespace std;

void test_loops(){
  cout << "Start testing loop"
       << endl
       << "------------------"
       << endl;

  // int rand_num = (rand() % 100) + 1;
  // while (rand_num != 100) {
  //   cout << rand_num << endl;
  //   rand_num = (rand() % 100) + 1;
  // }

  string guess_num;
  int int_guess = 0;

  do {
    cout << "Guess a number between 1 and 10: " << endl;
    getline(cin, guess_num);
    int_guess = stoi(guess_num);
    cout << "Let`s check your number " << int_guess << endl;
  } while (int_guess != 4);
  cout << "You win!" << endl;

}
