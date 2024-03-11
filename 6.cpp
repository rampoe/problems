// Построить первые N строк треугольника Паскаля.

#include <cstdlib>
#include <iostream>

int main()
{
    unsigned long long int n = 0;
    std::cout << "N = ";
    std::cin >> n;
    unsigned long long int triangle[n][n];
    for (unsigned long long int i = 0; i < n; i++)
    {
    	for (unsigned long long int j = 0; j <= i; j++)
    	{
    		triangle[i][j] = 1;
		}
	}
	for (unsigned long long int i = 0; i < n; i++)
    {
    	for (unsigned long long int j = 0; j <= i; j++)
    	{
    		if (j != 0 && j != i)
    		{
    			triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
			}
		}
	}
	for (unsigned long long int i = 0; i < n; i++)
    {
    	for (unsigned long long int j = 0; j <= i; j++)
    	{
    		std::cout << triangle[i][j] << " ";
		}
		std::cout << std::endl;
	}
    std::system("pause");
    return 0;
}
