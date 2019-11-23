#include <iostream>
#include <stdio.h>

using std::cin;
using std::cout;

int main() {
    int n;
    char s[100];
    cin >> n;
    cin >> s;
    cout << "The number you input is ";
    cout << n;
    cout << "\n";
    cout << "The string you input is " << s << "\n";
    return 0;
}
