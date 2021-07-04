#include <iostream>
#include <vector>

using namespace std;

bool find_int(vector<int>::const_iterator begin, vector<int>::const_iterator end, int n)
{
    while(begin != end)
    {
        if(*begin == n)        
            return true;
        ++begin;
    }
    return false;
}

int main()
{
	vector<int> vi{1,2,3,4,5,6};
    
	cout << find_int(vi.begin(), vi.end(), 0) << endl;

	return 0;
}