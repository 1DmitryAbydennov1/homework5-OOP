#include <iostream>
#include <list>

void killorder(int n, int m) 
{
    std::list<int> warriors;
    for (int i = 1; i <= n; ++i) 
    {
        warriors.push_back(i);
    }

    auto it = warriors.begin();

    while (warriors.size() > 1) 
    {
        for (int count = 1; count < m; ++count) 
        {
            ++it;
            if (it == warriors.end()) 
            {
                it = warriors.begin();
            }
        }
        std::cout << *it << " ";
        it = warriors.erase(it);
        if (it == warriors.end()) 
        {
            it = warriors.begin();
        }
    }

    std::cout << "\n" << warriors.front() << std::endl;
}

int main() 
{
    int n;
    int m;
    cin >> n >> m;
    killorder(n, m);
    return 0;
}
