/*
***Welcome To Guess The Perfect Number*** --> About Game

--> In this game there will be a random number generated which will be less than
or equal to 25.

  If user gives input of a number which is not equal to random number then the program will run/take
  input until & unless it is not equal to the random number.

*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

// Driver Code
int main()
{

  int rn;
  srand(time(0));
  rn = rand() % 25 + 1; // Generates random number in the range of 25

  int a;

  // cout << "Random number : " << rn << endl;
  // Use this , if you can win lol 

int tries = 0;

  do{    
    cout << "Enter the number : " << endl;
    cin >> a;
    if(a == rn){
        cout << "Victory Royale!!!" << endl;
        cout << "Tries : " << tries << endl;
        cout << "Random_Num :  " << rn << endl;
    }
    else{
        if(rn <= 10){
           cout << "Hint : Number is less than or equal to 10" << endl;
         }
        else if(rn <= 20){
           cout << "Hint : Number is less than or equal to 20" << endl;
         }
        else if(rn <= 25){
           cout << "Hint : Number is less than or equal to 25" << endl;
         }
    }

   tries++;
  }while(a != rn);

  return 0;
}
