#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v{ 1, 2, 3, -1, -2, -3 };

    int smallest_element = v[0];
    int largest_element = v[0];

    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    v.insert(v.begin(), 1, min);
    v.push_back(max);

    cout << "Min value: " << v.front() << endl;
    cout << "Max value: " << v.back() << endl;
}