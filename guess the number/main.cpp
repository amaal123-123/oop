
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int MIN_NUM = 1;
    const int MAX_NUM = 100;
    bool playAgain = true;
    while (playAgain) {
        int secret = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;

        cout << "\n=== Guess the Number Game ===\n";
        cout << "enter the difficulty level:\n";
        cout << "  1 - Easy   ";
        cout << "2 - Medium   ";
        cout << "3 - Hard   ";

        int level, attempts;
        cin >> level;

        if (level == 1){ attempts = 10;
        cout<<"you have"<<attempts<<"choices for finding the secret number between 1 and 100"<<endl;}
        else if (level == 2) {attempts = 7;
        cout<<"you have"<<attempts<<"choices for finding the secret number between 1 and 100"<<endl;}
        else {
            attempts = 5;
cout<<"you have"<<attempts<<"choices for finding the secret number between 1 and 100"<<endl;}
        bool won = false;

        for (int i = 1; i <= attempts; i++) {
            int guess;
            cout << "attempt " << i << " from " << attempts << ".\n";
            cout << "Enter the number: ";
            cin>>guess;
            if (guess == secret) {
                cout << "🎉 congratulation you are winner " <<"\n";
                won = true;
                break;
            }
            else if (guess < secret) {
                cout << "the secret secret is greater than the number you have chosen " <<  ".\n";
            }
            else {
                cout << "the secret secret is smaller than the number you have chosen  " << guess << ".\n";
            }
             cout<<attempts-i<<"choices left"<<endl;
        }

        if (!won) {
            cout << "😢 you failed to guess the number " << secret << ".\n";
        }


        char choice;
        cout << "\n (y/n): ";
     cout << "\n play the game again with us!!\n";
  cin >> choice;
        if (choice == 'y' || choice == 'Y')
            playAgain = true;
        else
            playAgain = false;
    }

    cout << "\n welcome for play \n";
    return 0;
}
