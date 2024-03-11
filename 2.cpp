// В заданной строке посчитать количество слов. Разделителем слов
// считается один или несколько пробелов. (Учесть возможность
// наличия пробелов в начале или конце строки, которые не разделяют слова).

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, ns;
    int i = 0, c = 1;
    getline(cin, s);
    int j = s.length() - 1;
    while (isspace(s[i]))
        i++;
    while (isspace(s[j]))
        j--;
    char sb = '\0';
    for (int k = i; k <= j; k++)
    {
        char cs = s[k];
        if (!(isspace(cs) && isspace(sb)))
            ns += cs;
        sb = cs;
    }
    for (int k = 0; k < ns.length(); k++)
        if (ns[k] == ' ')
            c++;
    cout << c;
    return 0;
}