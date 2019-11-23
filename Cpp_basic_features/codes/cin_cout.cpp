#include <iostream>
#include <stdio.h>

int main() {
    int n;
    char s[100];
    std::cin >> n;
    std::cin >> s;
    std::cout << "The number you input is ";
    std::cout << n;
    std::cout << "\n";
    std::cout << "The string you input is " << s << "\n";
    return 0;
}
