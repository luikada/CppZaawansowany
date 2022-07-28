#include <iostream>
#include <list>

//Utworzyæ 2 listy 
//po 10 elemmentów.Przenieœæ elementy od 3 do 7 z jednej listy do drugiej na pozycjê 3. 
//Wyœwietliæ listy.

int main()
{
    std::list<int> l1 = { 1,2,3,4,5,6,7,8,9,10 };
    std::list<int> l2 = { 11,12,13,14,15,16,17,18,19,20 };

    //std::advance (it,1); to samo co ++it

    for (auto it = l1.begin(); it != l1.end(); ++it)
    {
        std::cout << *it << ";";

    }

    for (auto it = l2.begin(); it != l2.end(); ++it)
    {
        std::cout << *it << ";";
    }

    auto copyFrom = l1.begin();
    std::advance(copyFrom, 2); 
    
    auto copyTo = l1.begin();
    std::advance(copyTo, 7);

       auto to = l2.begin();
    std::advance(to, 3);

    l2.splice(to, l1, copyFrom, copyTo);

    std::cout << std::endl << std::endl << std::endl;

    for (auto it = l1.begin(); it != l1.end(); ++it)
    {
        std::cout << *it << "; ";

    }

}
