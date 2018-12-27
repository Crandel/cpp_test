#include <iostream>
#include <string>
#include <cpp_test/strings.hpp>

using namespace std;

void test_strings(){
  cout << "Start testing c and c++ strings"
       << endl
       << "*****************************"
       << endl;

  // old c-like string
  char cust_c_str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  // cust_c_str.append(" "); only spp stricg could have append
  // cpp style
  string cust_cpp_str = "Hallo my young friend";
  cust_cpp_str.append(" ");
  cout << cust_cpp_str + cust_c_str << endl;

  // string name;
  // cout << "What is your name?" << endl;
  // getline(cin, name);
  // cout << cust_cpp_str + name << endl;

  string eiler_const = ".57721";
  double eiler_const_d = stod(eiler_const);
  cout << eiler_const_d << endl;
  cout << "Size of eiler_const " << eiler_const.size() << endl;
  cout << "Is eiler_const is empty? " << eiler_const.empty() << endl;
  cout << "+++++++++++++++++++++++++++++" << endl;

  string dog_str = "dog";
  string cat_str = "cat";
  cout << "dog_str.compare(cat_str)" << endl;
  cout << dog_str.compare(cat_str) << endl;
  cout << "dog_str.compare(dog_str)" << endl;
  cout << dog_str.compare(dog_str) << endl;
  cout << "cat_str.compare(dog_str)" << endl;
  cout << cat_str.compare(dog_str) << endl;
  cout << "cat_str.assign(dog_str)" << endl;
  cout << cat_str.assign(dog_str) << endl;
  cout << "cat_str.assign(eiler_const, 0, 3)" << endl;
  cout << cat_str.assign(eiler_const, 0, 3) << endl;
  cout << "cust_cpp_str.find(my, 0)" << endl;
  cout << cust_cpp_str.find("my", 0) << endl;
  cout << "cust_cpp_str.insert(6, not)" << endl;
  cout << cust_cpp_str.insert(6, "not ") << endl;
  cout << "cust_cpp_str.erase(6, 4)" << endl;
  cout << cust_cpp_str.erase(6, 4) << endl;
  cout << "cust_cpp_str.replace(9, 5, \" old  \")" << endl;
  cout << cust_cpp_str.replace(9, 5, " old  ") << endl;
}
