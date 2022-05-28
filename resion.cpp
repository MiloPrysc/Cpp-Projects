#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;

void settings()
{
    system("cls");
    cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money he/she bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
    
    char n;
    cout << endl;
    cout << endl;
    cout << "Enter yes[y] to continue Or no[n] to exit()" << endl;
    cin >> n;

    if(n == 'Y' || n == 'y'){
         system("cls");
    }
    else if(n == 'N' || n == 'n'){
        cout << "Exiting the program...." << endl;
        exit(0);
    } 
    else{
        cout << "Enter the correct char :  \n";
        for(int i; n == 'Y' || n == 'y' || n == 'n' || 'N';){
           system("cls");
               cout << "Enter yes[y] to continue Or no[n] to exit()" << endl;
    cin >> n;

    if(n == 'Y' || n == 'y'){
         system("cls");
    }
    else if(n == 'N' || n == 'n'){
        cout << "Exiting the program...." << endl;
        exit(0);
    }       
        }
    }
}

int main(){

    string name;
    int bal;
    int bet;
    int guess;
    int randr;

     srand(time(0));
     randr = rand()%10 + 1;
             
    cout << "**-) Welcome ToThe_CasiNo_Game (-**" << endl;
    cout << endl;
    cout << "Enter your name : " << endl;
    getline(cin , name);
    cout << "Enter your bal : " << endl;
    cin >> bal;
    cout << "Enter your betting amount : $";
    cin >> bet;

     if(bet > bal){
    cout << "!!Bet should be smaller than balance : " << endl;
    cout << "Enter your betting amount : $";
    cin >> bet;
     }
  
            cout << "Guess any betting number between 1 & 10 :";
            cin >> guess;
     
      
      if(guess == randr){
         
            cout << "\n\nYou are in luck!! You have won Rs." << bet * 10;
            bal = bal + bet * 10;

      }

      else {
           cout << "Better luck next time....." << endl;
           bal = bal - bet;
           cout << "Balance :  " << bal << endl; 
      }

      char c;
      cout << "You wanna continue --> yes[y] Or no[n] :  " << endl;
      cin >> c;

      if(c == 'Y' || 'y'){
       cout << "Enter your betting amount : $";
       cin >> bet;
    
     do{
            cout << "Guess any betting number between 1 & 10 :";
            cin >> guess;
     } while(guess >= 0 && guess <= 10);
      
      if(guess == randr){
         
            cout << "\n\nYou are in luck!! You have won Rs." << bet * 10;
            bal = bal + bet * 10;

      }

      else {
           cout << "Better luck next time....." << endl;
           bal = bal - bet;
      }
}

    else{
        cout << "Exiting the program..." << endl;
        exit(0);
    }
 

    return 0;
}

