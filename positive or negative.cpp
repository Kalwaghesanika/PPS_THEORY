#include<iostream>
using namespace std;

int main() {
  int number;
  
  //prompt user for input
  cout << "Enter a number:";
  cin >> number;
  
  //check if the number is positive or negative
  if (number>=0) {
     cout << "The number" << number << "is positive.\n";
  }else{
     cout << "The number" << number << "is negative.\n";
  }
   return 0;
  }