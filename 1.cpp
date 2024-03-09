// В заданной строке заменить подряд идущие пробелы на один пробел.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string s2;
    char sb = '\0';
    for (int i = 0; i < s.size(); i++)
    {
        char cs = s[i];
        if (!(isspace(cs) && isspace(sb)))
        {
            s2 += cs;
            sb = cs;
        }
    }

    cout << s2 << endl;

    return 0;
}