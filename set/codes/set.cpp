#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> int_set;
    cout << int_set.count(0) << "\n";
    for(int i = 0; i < 10; ++i) {
        int_set.insert(i);
    }
    cout << int_set.count(0) << "\n";
    int_set.insert(1);
    cout << int_set.count(1) << "\n";
    int_set.erase(0);
    cout << int_set.count(0) << "\n";
    return 0;
}
