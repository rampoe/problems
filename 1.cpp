// В заданной строке заменить подряд идущие пробелы на один пробел.

#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string input_string = "";
    std::cout << "Enter the string: ";
    std::getline(std::cin, input_string);

    char previous_char = '\0';
    std::string output_string = "";
    for (int i = 0; i < input_string.size(); i++)
    {
        char current_char = input_string[i];
        if (!(std::isspace(current_char) && std::isspace(previous_char)))
        {
            output_string += current_char;
        }
        previous_char = current_char;
    }

    std::cout << output_string << std::endl;

    return 0;
}