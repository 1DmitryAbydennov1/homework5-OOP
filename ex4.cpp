#include <iostream>
#include <set>
#include <vector>

int main() 
{
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> numbers[i];
    }

    std::set<int> unique_numbers(numbers.begin(), numbers.end());

    for (int num : unique_numbers) 
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
