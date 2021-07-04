#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto curr = flst.begin();
    auto prev = flst.before_begin();

    while (curr != flst.end())
    {
        if (*curr % 2)
        {
            curr = flst.insert_after(curr, *curr);
            prev = curr;
            ++curr;
        }
        else
        {
            curr = flst.erase_after(prev);
        }
    }

    for (const auto i : flst)
        cout << i << " ";
    cout << endl;

    return 0;
}
