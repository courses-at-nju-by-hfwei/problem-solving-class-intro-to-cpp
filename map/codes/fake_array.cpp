#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> fake_array;
    fake_array[-1] = -999;
    fake_array[1] = 999;
    fake_array[10000] = 1;
    fake_array[20000] = 4;
    fake_array[10000000] = 9;
    int i;
    while(cin >> i) {
        if(fake_array.count(i)) {
            cout << fake_array[i] << '\n';
        } else {
            cout << "No such element in this \"array\"\n";
        }
    }
    return 0;
}
