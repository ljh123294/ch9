#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream ifs("letter.txt");
    if (!ifs)
        return -1;
    string res;
    auto update_with = [&](string const &curr)
    {
        if (string::npos == curr.find_first_not_of("aceimnorsuvwxz"))
            res = res.size() < curr.size() ? curr : res;
    };
    for (string curr; ifs >> curr; update_with(curr))
        ;
    cout << res << endl;
}