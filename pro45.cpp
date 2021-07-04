#include <string>
#include <iostream>

using namespace std;

string add_pre_post01(const string &name, const string &pre, const string &post)
{
    string res = name;
    res.insert(res.begin(), pre.begin(), pre.end());
    // res.insert(res.end(), post.begin(), post.end());
    // return res;
    return res.append(post);
}

string add_pre_post01(const string &name, const string &pre, const string &post)
{
    string res = name;
    res.insert(0, pre);
    return res.insert(res.size(), post);
}

int main()
{
    string name("tx");

    cout << add_pre_post01(name, "Mr.", "Jr.") << endl;

    cout << add_pre_post01("TX", "Mr.", "Jr.") << endl;

    return 0;
}