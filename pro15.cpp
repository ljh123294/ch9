#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {1, 3};
    list<int> l1 = {1, 2, 3};

    cout << boolalpha << (v1 == v2) << endl;
    cout << boolalpha << (vector<int>(l1.begin(), l1.end()) == v1) << endl;
    return 0;
}
