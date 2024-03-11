// Дана строка, состоящая из последовательности цифр и латинских
// букв. Вывести самую длинную подстроку, в которой цифры и буквы чередуются.

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>

std::string get_longest_alternating_substring(std::string string)
{
    std::string longest_alternating_substring = "";
    std::string current_alternating_substring = "";
    for (unsigned long long int i = 0; i < string.length(); i++)
    {
        if ((isdigit(string[i]) && isalpha(string[i - 1]) || isalpha(string[i]) && isdigit(string[i - 1])) && current_alternating_substring.length() == 0)
        {
            current_alternating_substring += string[i - 1];
        }
        if (isalpha(string[i]) && isdigit(string[i - 1]) || isdigit(string[i]) && isalpha(string[i - 1]))
        {
            current_alternating_substring += string[i];
        }
        else
        {
            if (current_alternating_substring.length() > longest_alternating_substring.length())
            {
                longest_alternating_substring = current_alternating_substring;
            }
            current_alternating_substring = "";
        }
    }
    return longest_alternating_substring;
}

int main()
{
    std::string input_string = "";
    std::getline(std::cin, input_string);
    std::cout << get_longest_alternating_substring(input_string) << std::endl;
    std::system("pause");
    return 0;
}
