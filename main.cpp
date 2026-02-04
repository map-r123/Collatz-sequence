#include <iostream>
using namespace std;

int main() {
    int num1;
    char runAgain = 'y';

    while (runAgain == 'y') {
        int counter = 0;

        cout << "Enter a number >1: ";
        cin >> num1;

        while (num1 != 1) {
            if (num1 % 2 == 0)
                num1 /= 2;
            else
                num1 = num1 * 3 + 1;

            cout << num1 << endl;
            counter++;
        }

        cout << "Done. This ran " << counter << " times\n";
        cout << "Do you want to run again (y/n): ";
        cin >> runAgain;
    }

    return 0;
}
