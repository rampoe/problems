// Дана строка, содержащая несколько слов, разделенных пробелами.
// Вывести все слова, которые являются палиндромами.

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>

bool is_palindrome(std::string string)
{
    std::string lowercase_string = string;
    for (unsigned long long int i = 0; i < string.length(); i++)
    {
        lowercase_string[i] = std::tolower(string[i]);
    }
    unsigned long long int start = 0;
    unsigned long long int end = lowercase_string.length() - 1;
    while (start < end)
    {
        if (lowercase_string[start] != lowercase_string[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    std::string input_string = "";
    std::cout << "Enter the string: ";
    std::getline(std::cin, input_string);
    std::istringstream iss(input_string);
    std::vector<std::string> words = {};
    std::string word = "";
    while (iss >> word)
    {
        words.push_back(word);
    }
    for (unsigned long long int i = 0; i < words.size(); i++)
    {
        if (is_palindrome(words[i]))
        {
            std::cout << words[i] << " ";
        }
    }
    std::cout << std::endl;
    std::system("pause");
    return 0;
}