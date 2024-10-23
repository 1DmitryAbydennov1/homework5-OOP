#include <iostream>
#include <set>

int main() 
{
    int n;
    std::cin >> n;

    std::multiset<int> sorted_numbers;
    for (int i = 0; i < n; ++i) 
    {
        int num;
        std::cin >> num;
        sorted_numbers.insert(num);
    }

    for (int num : sorted_numbers) 
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
