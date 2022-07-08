#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;

void settings()
{
    system("cls");
    cout << "\t\t**Game Rules**\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money he/she bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";

    char n;
    cout << endl;
    cout << endl;
    cout << "Enter yes[y] to continue Or no[n] to exit()" << endl;
    cin >> n;

    if (n == 'Y' || n == 'y') {
        system("cls");
    }
    else if (n == 'N' || n == 'n') {
        cout << "Exiting the program...." << endl;
        exit(0);
    }
    else {
        cout << "Enter the correct char :  \n";
        for (int i; n == 'Y' || n == 'y' || n == 'n' || 'N';) {
            system("cls");
            cout << "Enter yes[y] to continue Or no[n] to exit()" << endl;
            cin >> n;

            if (n == 'Y' || n == 'y') {
                system("cls");
            }
            else if (n == 'N' || n == 'n') {
                cout << "Exiting the program...." << endl;
                exit(0);
            }
        }
    }
}

int main() {

    string name;
    int bal;
    int bet;
    int user;
    int num;

    srand(time(0));
    num = rand() % 10 + 1;

    settings();
    // ---------------------------------------------------------------------------------


    cout << "**-) Welcome ToThe_CasiNo_Game (-**" << endl;
    cout << endl;
    cout << "Enter your name : " << endl;
    cin >> name;
    cout << "Enter your bal : " << endl;
    cin >> bal;
    cout << "Enter your betting amount : $";
    cin >> bet;


    if (bet > bal) {
        cout << "!!Bet should be smaller than balance : " << endl;
        cout << "Enter your betting amount : $";
        cin >> bet;
    }
    system("cls");
    // ---------------------------------------------------------------------------------
    string choice;
    int rand_num;

    do {
        cout << "\t  Enter the number (between 1 to 10) :  " << endl;
        cout << " -->  ";
        cin >> user;


        do
        {
            cout << "Hey, " << name << ", enter amount to bet : $";
            cin >> bet;
            if (bet > bal)
                cout << "Betting balance can't be more than current balance!\n"
                << "\nRe-enter balance : \n ";
        } while (bet > bal);

        do
        {
            cout << "Guess any betting number between 1 & 10 :";
            cin >> user;
            if (user <= 0 || user > 10)
                cout << "\nNumber should be between 1 to 10\n"
                << "Re-enter number:\n ";
        } while (user <= 0 || user > 10);
        rand_num = rand() % 10 + 1;
        if (rand_num == user)
        {
            cout << "\n\nYou are in luck!! You have won $" << bet * 10;
            bal = bal + bet * 10;
        }
        else
        {
            cout << "Oops, better luck next time !! You lost $ " << bet << "\n";
            bal = bal - bet;
        }
        cout << "\nThe winning number was : " << rand_num << "\n";
        cout << "\n" << name << ", You have balance of $ " << bal << "\n";
        if (bal == 0)
        {
            cout << "You have no money to play ";
            break;
        }

        cout << "Wanna Continue ? Yes Or No " << endl;
        cin >> choice;
        if (choice == "N" || choice == "n" || choice == "No" || choice == "no") {
            cout << "Exiting The World .... (Balance was $" << bal << ") " << endl;
            exit(0);
        }
    } while (choice == " Y" || choice == "y" || choice == "Yes" || choice == "yes");

    return 0;
}
