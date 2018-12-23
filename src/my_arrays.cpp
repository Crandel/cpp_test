#include <iostream>
#include <vector>
#include <cpp_test/my_arrays.h>
#include <ctype.h>

using namespace std;

void test_arrays() {
  int some_nums[5];
  int bad_nums[4] = {4, 13, 24, 34};
  cout << some_nums[0] << endl; // read some unknown value, because array doesn`t have values
  some_nums[0] = 15;
  cout << some_nums[0] << endl; // good one
  cout << bad_nums[3] << endl;
  cout << "+++++++++++++++++++++++++" << endl;

  char matrix[4][4] = {{'A', 'B'}, {'M', 'N', 'E'}};
  // cout << matrix[0][0] << endl;
  // cout << matrix[0][1] << endl;
  // cout << matrix[3][0] << endl;
  // cout << matrix[4][0] << endl;

  int matrix_size = (int)sizeof(matrix)/sizeof(*matrix);
  for (int i = 0; i < matrix_size; i++){
    unsigned long int base_size = sizeof(matrix[i]);
    unsigned long int inner_size = sizeof(*matrix[i]);
    int size_matrix_inside = (int)sizeof(matrix[i])/sizeof(*matrix[i]);
    cout << "Size of inner array #"
         << i
         << " base_size:"
         << base_size
         << " inner_size:"
         << inner_size
         << " size_matrix_inside:"
         << size_matrix_inside
         << endl;
    for (int j = 0; j < size_matrix_inside; j++){
      if (matrix[i][j] != NULL){
        cout << "Char symbol i1s " << matrix[i][j] << endl;
      }
    }
  }
}
