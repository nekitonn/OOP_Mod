#include <iostream>
#include <string>
using namespace std;

int main() {
    string Input = "abrakadabra";
    int count_Letter_a(string Input);
    int count_a = 0;

    for (int i = 0; i < Input.size(); i++)
        if (Input[i] == 'a') count_a++;

    int count_Letter_ab(string Input);
    int count_ab = 0;
    return 0;
}