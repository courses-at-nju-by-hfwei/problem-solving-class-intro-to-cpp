#include <iostream>

using namespace std;

struct Calculator {
    int power;
    int cnt;
    int last;
    int operator+(int n) {
        if(power <= 0) {
            cout << "Low on power!\n";
            return 0;
        } else {
            --power;
            ++cnt;
            return last = (last + n);
        }
    }
    int operator-(int n) {
        if(power <= 0) {
            cout << "Low on power!\n";
            return 0;
        } else {
            --power;
            ++cnt;
            last = last - n;
            return last;
        }
    }
    void show_info() {
        cout << "You have used this calculator to calculate " << cnt << "times\n";
    }
    void charge() {
        power = 100;
    }
    void set_init(int n) {
        last = n;
    }
};

int main() {
    Calculator cal;
    cal.power = 0;
    cal.last = 0;
    cal.cnt = 0;
    //In fact, it's bad to directly assign values to your struct/class, we'll cover this later
    cal.show_info();
    int k = cal + 2;
    cout << k << "\n";
    cal.charge();
    k = cal + 2;
    cout << k << "\n";
    k = cal - 3;
    cout << k << "\n";
    cal.show_info();
    return 0;
}
