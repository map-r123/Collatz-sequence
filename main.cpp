// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int num1=0,counter=0;
    char runAgain;

    cout << "Enter a number >1: ";
    cin >> num1;

    do
    {
        if(num1%2==0)
        {
            num1 = num1/2;
            cout << num1 << endl;
            counter = counter +1;
        }
        else
        {
            num1 = num1*3+1;
            cout << num1 << endl;
            counter = counter +1;
        }
    }
    while(!(num1==1));
    cout << "Done. This ran " << counter << " times\n" ;

    cout << "do you want to run again: ";
    cin >> runAgain;

    //while loop to run again
    while(runAgain == 'y')
    {
        cout << "Enter a number >1: ";
        cin >> num1;
    do
    {
        if(num1%2==0)
        {
            num1 = num1/2;
            cout << num1 << endl;
            counter = counter +1;
        }
        else
        {
            num1 = num1*3+1;
            cout << num1 << endl;
            counter = counter +1;
        }
    }
    while(!(num1==1));

    cout << "do you want to run again: ";
    cin >> runAgain;
    }

    cout << "Done. This ran " << counter << " times";
    return 0;
}
