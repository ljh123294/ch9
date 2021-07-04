#include <forward_list>
#include <iostream>
using namespace std;
int main()
{
    forward_list<int> flst = {0, 1, 3, 4, 5, 6, 7, 8, 9};
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end())
    {
        if (*curr % 2)
        {
            curr = flst.erase_after(prev);
            //删除prev之后的元素
        }
        else
        {
            prev = curr;
            ++curr;
        }
    }
    for (const auto i : flst)
    {
        cout << i << " ";
    }
    cout << endl;
}
