// В заданной строке удалить все пробелы. Если пробелов не было,
// выдать сообщение об этом, иначе напечатать количество удалённых пробелов.

#include <cstdlib>
#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::string input_string = "";
	std::getline(std::cin, input_string);
	unsigned long long int counter = 0;
	for (unsigned long long int i = 0; i < input_string.length(); i++)
	{
		if (std::isspace(input_string[i]))
		{
			counter++;
		}
	}
	if (counter == 0)
	{
		std::cout << "No spaces were found.";
	}
	else
	{
		std::cout << counter << " spaces were deleted from the string.";
	}
	std::cout << std::endl;
	std::system("pause");
	return 0;
}
