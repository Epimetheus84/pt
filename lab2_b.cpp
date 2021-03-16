#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <set>
#include <vector>

int main_old3 () {
    using namespace std;
    string sentence;
    cout << "write words" << endl;
    getline(cin, sentence);
    istringstream iss(sentence);
    vector<string> v_tokens;
    copy(istream_iterator<string>(iss),
        istream_iterator<string>(),
        back_inserter(v_tokens));

    set<string> s(v_tokens.begin(), v_tokens.end());

    for (auto t : s) {
        cout << t << endl;
    }

    return 0;
}