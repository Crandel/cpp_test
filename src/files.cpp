#include <fstream>
#include <iostream>
#include <string>

#include <cpp_test/files.h>

using namespace std;

int test_files(string filename){
  string castaneda = "Happiness is an attitude. We either make ourselves miserable, or happy and strong. The amount of work is the same.";

  string filepath = "/tmp/";
  filepath.append(filename);
  cout << "Try to open file " << filepath << endl;

  // (open and override) or (create if not exist)
  ofstream writer(filepath);

  if (! writer) {
    cout << "File " << filepath << "could not be open" << endl;
    return -1;
  } else {
    writer << castaneda << endl;
    writer << "Quote of Carlos Castaneda" << endl;
    writer.close();
  }

  /*
    (open and append) or (create if not exist)
    ios::app - append existed file
    ios::binary - open as a binary
    ios::in - read input
    ios::trunc Default
    ios::out - write to file (override)
  */
  char letter;
  ifstream reader(filepath, ios::in);
  if (!reader) {
    cout << "File " << filepath << "could not be open" << endl;
    return -1;
  } else {
    while (!reader.eof()){
      reader.get(letter);
      cout << letter;
    }
    cout << endl;
    reader.close();
  }
  ofstream writer2(filepath, ios::app);
  if (! writer2) {
    cout << "File " << filepath << "could not be open" << endl;
    return -1;
  } else {
    writer2 << "New quote" << endl;
    writer2 << "New Quote of Carlos Castaneda" << endl;
    writer2.close();
  }

  ifstream reader2(filepath, ios::in);
  if (!reader2) {
    cout << "File " << filepath << "could not be open" << endl;
    return -1;
  } else {
    while (!reader2.eof()){
      reader2.get(letter);
      cout << letter;
    }
    cout << endl;
    reader2.close();
  }

  return 0;
}
