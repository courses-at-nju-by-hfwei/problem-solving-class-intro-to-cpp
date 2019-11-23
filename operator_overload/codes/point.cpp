#include <iostream>

using namespace std;

struct Point {
    int x,y;
};

istream& operator>>(istream& is, Point& p) {
    is >> p.x >> p.y;
    return is;
}

ostream& operator<<(ostream& os, Point& p) {
    return os << "(" << p.x << ", " << p.y << ")\n";
}

int main() {
    Point p;
    cin >> p;
    cout << p;
    return 0;
}
