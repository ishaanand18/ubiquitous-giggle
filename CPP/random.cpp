#include <iostream>
#include <ctime>
using namespace std;
int randonNum() {
    int r;
    srand(time(0));
    r = rand() % 6;
    return r;
}

int main() {
    int r, n;
    r = randonNum();
    cout << "Enter any number";
    cin >> n;

    while (n != r) {
        if (n < r) {
            cout << "Number guessed is too small" << endl;
        }
        else if (n > r) {
            cout << "Number guessed is too high" << endl;;
        }
        cout << "enter number again";
        cin >> n;
    }
    cout << "you guessed it correct";

}