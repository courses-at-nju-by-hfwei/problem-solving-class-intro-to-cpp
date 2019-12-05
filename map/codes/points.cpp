#include <iostream>
#include <map>

using namespace std;
struct Point {
    int x, y;
};

int main() {
    map<int, Point> points;
    for(int i = 0; i < 10; ++i) {
        Point p;
        p.x = i;
        p.y = 10 - i;
        points[i] = p;
    }
    for(int i = 0; i < 10; ++i) {
        cout << points[i].x << ',' << points[i].y << "\n";
    }
    return 0;
}
