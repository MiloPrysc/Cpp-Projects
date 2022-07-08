#include<iostream>
#include<string>
using namespace std;

/*  
           
           Generates a new binary number by transorming 0 to 1 && 1 to 0
           For - loop used to read the string

*/

// Avoid this , defined at the end of main()
void clear();

class binary{ 
  string bin; 
  string bin_old; 
public:
// Declaring Functions
  void get_bin();
  void chk_bin();
  void convert_bin();
  void out_bin();
};

// Gets the input from User
void binary :: get_bin(){
      clear();
      cout << "Enter the binary number : " << endl;
      getline(cin, bin);

      bin_old = bin;
      clear();
}

// Checks the input if its in binary form(0 & 1 only)
void binary :: chk_bin(){
     for(int i = 0; i < bin.length(); i++){
            if(bin.at(i) != '0' && bin.at(i) != '1'){
                   cout << "Error_Code  01X013485X3T6" << endl;
                   exit(0);
            }
            else{}
     }
}

// Converts 0 to 1 && 1 to 0
void binary :: convert_bin(){
   chk_bin(); // Checking the input again()
   for(int i = 0; i < bin.length(); i++){
        if(bin.at(i) == '0'){
            bin.at(i) = '1';
        }
        else if(bin.at(i) == '1'){
            bin.at(i) = '0';
        }
   }
}

// Prints the generated output
void binary :: out_bin(){
     cout << "Binary number was : " << bin_old << endl;
     cout << "Binary number generated :  " << bin << endl;
}

// Driver Code 
int main(){

  binary user1;
  user1.get_bin();
  user1.chk_bin();
  user1.convert_bin();
  user1.out_bin();

  return 0;
}

// Defining the clear screen function , avoid this
void clear(){
   system("cls");
}

