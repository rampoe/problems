// В заданной строке удалить все латинские буквы.

#include <cstdlib>
#include <iostream>
#include <string>

bool is_latin_letter(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return true;
    }
    return false;
}

int main()
{
    std::string input_string = "";
    std::getline(std::cin, input_string);
    std::string output_string = "";
    for (unsigned long long int i = 0; i < input_string.length(); i++)
    {
        if (!is_latin_letter(input_string[i]))
        {
            output_string += input_string[i];
        }
    }
    std::cout << "Output: " << output_string << std::endl;
    std::system("pause");
    return 0;
}