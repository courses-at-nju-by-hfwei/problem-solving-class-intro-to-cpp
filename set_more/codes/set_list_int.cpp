#include <set>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
    set<vector<int> >sli;//Set of List of Int
    vector<int> li1, li2, li3, li4, li5;
    li1 = {1};
    li2 = {1, 2};
    li3 = {1, 1};
    li4 = {3};
    li5 = {1};//Only li5 equals to li1
    sli.insert(li1);
    printf("%d\n", sli.count(li2));
    printf("%d\n", sli.count(li3));
    printf("%d\n", sli.count(li4));
    printf("%d\n", sli.count(li5));//Only this outputs 1
    return 0;
}
