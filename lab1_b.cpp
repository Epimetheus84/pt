#include <iostream>
#include <regex>

using namespace std;

void check_number(string str) {
    regex r("\\+7\\([[:digit:]]{3}\\)[[:digit:]]{3}-[[:digit:]]{2}-[[:digit:]]{2}");

    if (std::regex_match(str, r)) {
        throw "Phone number is not correct";
    }
}

int main_ild2()
{
    string phone_str;

    cout << "Type your phone number: ";
    cin >> phone_str;

    try
    {
        check_number(phone_str);
        cout << "Phone number is correct";
    }
    catch (const char* e) {
        cout << e << endl;
    }
    catch (const exception& e)
    {
        cout << e.what() << '\n';
    }

    return 0;
}