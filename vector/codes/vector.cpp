#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> int_vector;
    for(int i = 0; i < n; ++i) {
        int_vector.push_back(i);
    }
    for(int i = 0; i < n; ++i) {
        cout << int_vector[i] << "\n";
    }
    return 0;
}
