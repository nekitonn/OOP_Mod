#include <iostream>
#include <string>
using namespace std;


int main() {
    string Input;
    cout << "Type a word: ";
    cin >> Input;
    int count_Letter_a(string Input);
    int count_a = 0;
    int count_ab = 0;
    for (int i = 0; Input[i] != '\0'; i++)
        if (Input[i] == 'a'){
            if (Input[i + 1] != 'b')
                count_ab++;
        }
    for (int i = 0; Input[i] != '\0'; i++)
        if (Input[i] == 'a') count_a++;

    cout <<"Number of a without b: " <<count_ab <<endl;
    cout <<"Number of a: " << count_a;
    return 0;
}