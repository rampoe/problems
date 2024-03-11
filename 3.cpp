// В заданной строке заменить каждую цифру символом "*".

#include <cstdlib>
#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string input_string = "";
    std::getline(std::cin, input_string);
    std::string output_string = "";
    for (unsigned long long int i = 0; i < input_string.length(); i++)
    {
        if (std::isdigit(input_string[i])) output_string += "*";
        else output_string += input_string[i];
    }
    std::cout << "Output: " << output_string << std::endl;
    std::system("pause");
    return 0;
}