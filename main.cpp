#include <iostream>
#include <string>
using namespace std;

int main() {
    string Input = "abrakadabra";
    int count_Letter_a(string Input);
    int count_a = 0;
    int count_ab = 0;
    for (int i = 0; Input[i] != '\0'; i++)
        if (Input[i] == 'a'){
            if (Input[i + 1] != 'b')
                count_ab++;
        } else count_a++;



    cout <<count_ab << " ";
    cout <<count_a;
    return 0;
}