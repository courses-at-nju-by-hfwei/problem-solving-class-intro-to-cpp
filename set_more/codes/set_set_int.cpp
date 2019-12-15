#include <set>
#include <cstdio>

using namespace std;

int main() {
    set<set<int> >ssi;//Set of Set of Int
    set<int> si1, si2, si3, si4, si5;
    si1 = {1};
    si2 = {1,2};
    si3 = {2};
    si4 = {3};
    si5 = {1, 1};//Only si5 equals to si1
    ssi.insert(si1);
    printf("%d\n", ssi.count(si2));
    printf("%d\n", ssi.count(si3));
    printf("%d\n", ssi.count(si4));
    printf("%d\n", ssi.count(si5));//Only this outputs 1
    return 0;
}
