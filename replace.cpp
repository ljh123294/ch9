#include <string>
#include <iostream>

using namespace std;

void replace_with_str01(string &s, const string &oldVal, const string &newVal)
{
    auto iter = s.begin();
    while (iter != s.end())
    {
        if (oldVal == string(iter, iter + oldVal.size()))
        {
            iter = s.erase(iter, iter + oldVal.size());
            iter = s.insert(iter, newVal.begin(), newVal.end());
            iter += newVal.size();
        }
        else
            ++iter;
    }
}

void replace_with_str01(string &s, const string &oldVal, const string &newVal)
{
    string::size_type index = 0;
    while (index != s.size())
    {
        if (oldVal == string(s, index, oldVal.size()))
            s.replace(index, oldVal.size(), newVal);
        ++index;
    }
}
int main()
{
    string s("tho thru");

    replace_with_str01(s, "tho", "though");
    cout << s << endl;

    replace_with_str01(s, "thru", "through");
    cout << s << endl;

    return 0;
}