// vector<int>::iterator iter = iv.begin(),
//                       mid = iv.begin() + iv.size() / 2;
// while (iter != mid)
//     if (*iter == some_val)
//         iv.insert(iter, 2 * some_val);
// 问题：
// 1.循环不会停止；
// 2.迭代器在插入操作后会变化。

#include <iostream>
#include <vector>

void double_and_insert(std::vector<int> &v, int some_val)
{
    auto mid = [&](int n)
    { return v.begin() + v.size() / n; };
    for (auto curr = v.begin(); curr != mid(2); ++curr)
        if (*curr == some_val)
            ++(curr = v.insert(curr, 2 * some_val));
}

int main()
{
    std::vector<int> v{1, 9, 1, 9, 9, 9, 1, 1};
    double_and_insert(v, 1);

    for (auto i : v)
        std::cout << i << std::endl;
}
