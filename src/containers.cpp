#include <iostream>
#include <vector>
#include <cpp_test/containers.hpp>
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

void test_vectors(){
  vector <int> lottery_vect(10);
  int lottery_array[6] = {3, 45, 12, 54, 2, 6};
  /*
    insert(position, iterator first, iterator last )
    begin - first element of iterator
   */
  cout << "Copy first 3 el from array" << endl;
  lottery_vect.insert(lottery_vect.begin(), lottery_array, lottery_array+3);

  cout << "First loop" << endl;
  for (vector<int>::size_type i = 0; i < lottery_vect.size(); i++){
    cout << i << " -> [" << lottery_vect.at(i) << "], ";
  }
  cout << endl;

  cout << "front lottery_vect " << lottery_vect.front() << endl; // get first element *
  cout << "3-d el lottery_vect " << lottery_vect.at(2) << endl;

  // insert(position, value )
  cout << "insert to 5 el" << endl;
  lottery_vect.insert(lottery_vect.begin()+5, 55);
  cout << "5 el lottery_vect " << lottery_vect.at(5) << endl;

  // push_back( value) <- at the end of the file
  cout << "push back value" << endl;
  lottery_vect.push_back(77);
  cout << "last el lottery_vect " << lottery_vect.back() << endl;

  // remove last element
  cout << "pop last value" << endl;
  lottery_vect.pop_back();
  cout << "last el lottery_vect " << lottery_vect.back() << endl;

  cout << "is lottery_vect empty? " << lottery_vect.empty() << endl;

  cout << "last loop" << endl;
  for (vector<int>::size_type i = 0; i < lottery_vect.size(); i++){
    cout << i << " -> [" << lottery_vect.at(i) << "], ";
  }
  cout << endl;

}
