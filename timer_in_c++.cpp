// Header Files required 
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

// Delay Function 
void delay(int number_of_seconds){
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

// Driver Code
int main(){
    
    int hr=0 , minute=0, second=0;  

    // Main Loop
    while(true){
      system("cls");
      
      cout << ":: Milo's Timer ::" << endl;
      cout << endl;
      cout << "-------------" << endl;
      cout << hr << " : " << minute << " : " << second << "   | " << endl;
      cout << "-------------" << endl;
      
      second++;
      delay(1);
      
      // Count Hours & Minutes
      if(second == 60){
         minute++;
         second = 0;
      }
      if(minute > 59){
         hr++;
         minute = 0;
      }
     
    }   
 
    return 0;
}

/* Please Donate Me a Cookie.....*/

