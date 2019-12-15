#include <set>
#include <cstdio>

using namespace std;

struct Point {
    int x, y;
    bool operator<(const Point &other) const {
        if(x == other.x) {
            return other.y < y;
        } else {
            return x < other.x;
        }
    }
};

int main() {
    set<Point> sp;
    Point tmp = {1, 1};
    sp.insert(tmp);
    Point tmp2;
    tmp2 = {0, 1};
    printf("%d\n", sp.count(tmp2));
    tmp2 = {0, 2};
    printf("%d\n", sp.count(tmp2));
    tmp2 = {1, 1};
    printf("%d\n", sp.count(tmp2));
    return 0;
}

