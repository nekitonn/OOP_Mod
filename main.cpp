#include <iostream>
#include <string>
using namespace std;

int main() {
    string Input = "ab ra ka d ab r a";
    int count_Letter_a(string Input);
    int count_a = 0;
    for (int i = 0; Input[i] != '\0'; ++i)
        if (Input[i] == 'a') count_a++;
    size_t count_Letter_ab = count(Input.begin(), Input.end(), 'ab');

    cout << count_Letter_ab;
    cout <<count_a;
    return 0;
}