#include <set>
#include <cstdio>

using namespace std;


int main() {
    set<pair<int, int> > sp;
    pair<int, int> tmp = {1, 1};
    sp.insert(tmp);
    pair<int, int> tmp2;
    tmp2 = {0, 1};
    printf("%d\n", sp.count(tmp2));
    tmp2 = {0, 2};
    printf("%d\n", sp.count(tmp2));
    tmp2 = {1, 1};
    printf("%d\n", sp.count(tmp2));
    return 0;
}

