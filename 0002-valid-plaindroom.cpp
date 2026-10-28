#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool Plaindroom(string& s, int& i, int& j)
{
    if (i >= j)
        return true;
    if (s[i++] == s[j--])
        return Plaindroom(s, i, j);

    return false;
}

bool isPalindrome(string& s)
{
    string newstring = "";
    for (int i = 0; i < s.size(); i++)
    {
        int asci = int(s[i]);
        bool upperCheck = asci >= 65 && asci <= 90;
        bool lowerCheck = asci >= 97 && asci <= 122;
        bool numbersCheck = asci >= 48 && asci <= 57;
        if (lowerCheck || upperCheck || numbersCheck)
            newstring += char(tolower(s[i]));
    }
    if (newstring.empty())
        return true;
    int j = newstring.length() - 1;
    int i = 0;
    return Plaindroom(newstring, i, j);
}

int main()
{
    string s = "0P";
    cout << isPalindrome(s);
}
