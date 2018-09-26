#include <iostream>

using namespace std;

void recrReverse(int n); //Reverse integer recursively
void iterReverse(int n); //Reverse integer iteratively

int main(){

  int choice, n;
  cout << "Reverse order an Integer" << endl;
  cout << "-------------------------------------------------" << endl;
  cout << "\nWould you like to use a recursive(1) or an iterative(2) process?" << endl;
  cout << "Choose (1) or (2): \n";
  cin >> choice;

  if(choice == 1){
    cout << "Great! You have chosen recursive!\n\n";
    cout << "Enter an integer to reverse: " << endl;
    cin >> n;

    cout << "\nThe number you have entered: " << n << endl;
    cout << "The number reversed (recursively): ";
    recrReverse(n);
    cout << endl;

  }else if(choice == 2){
    cout << "Great! You have chosen iterative!\n\n";
    cout << "Enter an integer to reverse: " << endl;
    cin >> n;

    cout << "\nThe number you have entered: " << n << endl;
    cout << "The number reversed (iteratively): ";
    iterReverse(n);
    cout << endl;

  } else{
    cout << "Invalid input." << endl;

  }

  return 0;
}

void recrReverse(int n){

  if(n == 0){
    return;

  } else{
    cout << n % 10;
    recrReverse(n / 10);

  }
}

void iterReverse(int n){

  int remain, total = 0;
  for(int i = n; n != 0; n = n / 10){
    remain = n % 10;
    total = total * 10 + remain;

  }

  cout << total;
}
