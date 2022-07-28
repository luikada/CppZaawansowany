#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (size_t i = 0; i <= vec.size() - 1; ++i)
    {
        std::cout << "[" << i << "]=" << vec.at(i) << ";\n";
    }
}

int main()
{
    auto hello = []() {std::cout << "Hello World!" << std::endl; };

    hello();
    hello();

    auto printToN = [](int n)
    {
        for (int i = 0; i < n; ++i)
        {
            std::cout << i << " ";
        }
    };

    printToN(20);
    std::cout << std::endl;
    printToN(11);

    std::vector<int> ints;

    auto fillVector = [&ints](int n)
    {
        for (int i = 0; i < n; ++i)
        {
            ints.emplace_back(i);
        }
    };

    fillVector(100);
    printVector(ints);


    auto findMax = [&ints]()-> int
    {
        int maxValue = *ints.begin();
        for (auto it = ints.begin(); it != ints.end(); ++it)
        {
            if (maxValue < *it)
            {
                maxValue = *it;
            }
        }
        return maxValue;
    };

    int max = findMax();

    std::cout << "Najwieksza wartosc w wektorze: " << max << std::endl;

    std::for_each(ints.rbegin(), ints.rend(), [](int value) {std::cout << "!" << value << "!" << std::endl; });
}