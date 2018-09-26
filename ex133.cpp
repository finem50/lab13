#include <iostream>

using namespace std;

int factorial(int n);

int main(){

  int n;
  cout << "Enter a number to perform factorial function on: " << endl;
  cin >> n;

  cout << "Factorial of " << n << ": " << factorial(n) << endl;


  return 0;
}

int factorial(int n){

  int total = 1;
  for(int i = 1; i <= n; i++){
    total = total * i;

  }
  
  return total;
}
