#include<iostream>
#include<fstream>
using namespace std;

/* 

Through this project, we can learn a lot about input/output streams and the file management system of C++.
 Our program collects student details like name, roll number, marks in each subject, and calculates their 
 grade. This is a simple console app. Note that we focus only on the correct inputs in this project, and 
 you can enhance it to handle wrong inputs. Here is the source code:

 Idea for the project by : hacker.io
 Written by : Me(Rayz_On)

*/

void create_student();
void option();

class student{
protected:    
    int grade;
    int roll_num;
    float average;
    int math_marks, science_marks, cs_marks, history_marks;
    string name1;
    friend void create_student();
public:
    void set_data();
    void get_data();
    void calc_average();
    int roll_numb();
    
};

void student :: set_data(){

cout << "Enter the name of Student :   ";
cin >> name1;
cout << endl;
cout << "Enter the roll number of Student :  ";
cin >> roll_num;
cout << endl;
cout << endl;
cout << endl; 
cout << "Enter the marks of Science :   " << endl;
cin >> science_marks;
cout << "Enter the marks of Math :  " << endl;
cin >> math_marks;
cout << "Enter the marks of Computer Science  :  " << endl;
cin >> cs_marks;
cout << "Enter the marks of History :  " << endl;
cin >> history_marks;

cout << endl;
char c1;
cout << "enter [y] for yes or [n] for no  : \n";
cin >> c1;
if(c1=='n'){
   
   system("cls");
   set_data();    

}
else if(c1=='y'){
   system("cls");
   cout << "Creating new file....."  << endl;
    }

}

void student :: get_data(){

ofstream ef;
ef.open("Student_Record.txt");
ef << endl;
ef << endl;
ef << ":::::::: Student Record ::::::::" << endl;
ef << endl;
ef << "Student's Name :  " << name1 << endl;
ef << "Roll number :  " << roll_num << endl;
calc_average();
ef << "Average :  " << average << endl;
ef << endl;
ef << endl;
ef << "Marks_science :  "  << science_marks << endl;
ef << "Marks_math :  " << math_marks << endl;
ef << "Marks_computer_science :  " << cs_marks << endl;
ef << "Marks_History :  " << history_marks << endl;
ef << endl;
ef << "::: Created Student_Record.txt ::: " << endl;
ef << endl;
ef << ":::::::::::::::::::::::::::::::::::" << endl;

}

void student :: calc_average(){

 average = (science_marks + math_marks + cs_marks + history_marks) / 4.0;
 // cout << "Total average of Student :   " << a << endl;
 cout << endl;

 if(average>=90){
     cout << ":: 'A' Grade ::" << endl;
 }
else if(average >=75){
     cout << ":: 'B' Grade ::" << endl;
}
else if(average >=50){
     cout << ":: 'C' Grade ::" << endl;
}
else if(average < 50){
    cout << " :: 'D' Grade ::" << endl;
   }
}

int student :: roll_numb(){
     return roll_num;
}

void create_student(){

   student stud;
   stud.set_data();
   stud.calc_average();
   stud.get_data();
 
   }

int main(){
        
      int o;
    system("cls");
    cout << "\n\n Choose the number for selecting option ::   " << endl;
    cout << endl;
    cout << "\n\n 1. Create new Student Record" << endl;
    cout << "\n\n 2. Delete Student Record" << endl;
    cout << "\n\n 3. Exit Program" << endl;
    cout << endl;
    cout << " : ";
    cin >> o;

string modify, name;

   switch (o)
   {
   case 1: system("cls");
           create_student();
           break;
   case 2: system("cls");
           remove("Student_Record");    
           break;
   case 3: system("cls");
           cout << "Exiting the program....." << endl;
           exit(0);
           break;
   
   default:
   cout << "Enter the correct number....." << endl;
   if(o != 1 || o!= 2 || o != 3){

     for(o == 1 || o == 2 || o == 3 ; o++;){
     cout << endl;
     cout << " : ";
     cin >> o;
           switch (o)
   {
   case 1: system("cls");
           create_student();
           break;
   case 2: system("cls");
           remove("Student_Record");    
           break;
   case 3: system("cls");
           cout << "Exiting the program....." << endl;
           exit(0);
           break;
        default:
        break;
               }
           }
        } 
     }
    
    return 0;
}
