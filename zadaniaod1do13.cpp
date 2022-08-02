
//
//
//6. Napisz funkcję, która sprawdzi czy podany string jest palindromem(reverse i transform lub equal)
//
//7. Napisz funkcję, która stworzy wektor przechowujący potęgi kwadratowe z podanego zakresu np od. 3 do 10 (for_each)
//
//8. Zmień poprzednie zadanie tak aby zwracało sumę kwadratów(accumulate)
//
//9. Napisz funkcję, która stworzy wektor przechowujący liczby od 1 do n.Następnie utwórz dwa wektory.Jeden, którzy będzie przechowywał tylko wielokrotności 2, a drugi tylko wielokrotności 3. Następnie zwróć vector przechowujący tylko wielokrotności 2 i 3. (remove_copy_if, set_intersection)
//10. Napisz funkcję, która zwróci wszystkie możliwe permutacje 3 liczb(next_permutation)
//11. Napisz funkcję, która przyjmuje wektor cyfr, a zwraca liczbę permutacji tych cyfr, które są wielokrotnością 11.
//12. Napisz funkcję, która zamieni podanego int na vector jej cyfr.
//13. Napisz funkcję, która znajdzie pierwszą większą liczbę, która jest palindromem od zadanej liczby.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::string sortItOut(std::string beforeSort)
{
    std::sort(beforeSort.begin(), beforeSort.end());
    return beforeSort;
}

std::string shuffleIt(std::string beforeShuffle)
{
    std::random_shuffle(beforeShuffle.begin(), beforeShuffle.end());
    return beforeShuffle;
}

std::vector<char> doubleCheck(std::string first,std::string second)
{
   std::vector<char>catcher;
  
   for (int i = 0; i < first.size(); i++)
    {
        if (first[i] == second[i])
        {
            catcher.push_back(first[i]);
        }
    }
    return catcher;
}

std::vector <char>spaceRemover(std::string s) 
{

    s.erase(std::remove_if(s.begin(), s.end(), ' '), s.end());

}

int main()
{ //1. Napisz funkcję, która przyjmuje stringa, następnie uszereguje wszystkie litery w porządku alfabetycznym i zwraca tak odwróconego stringa (sort).
 //   std::string toSort;
 //   std::cout << "podaj wyraz" << std::endl;
 //   std::cin >> toSort;
 //   
 //   std::cout << sortItOut(toSort)<<std::endl;

 ////2. Napisz analogiczną funkcję, która zwróci przemieszanego stringa(random_shuffle).Zwróć uwagę czy za każdym uruchomieniem, faktycznie string jest przemieszany innaczej
 //   std::string toShuffle;
 //   std::cout << "podaj wyraz" << std::endl;
 //   std::cin >> toShuffle;

 //   std::cout << shuffleIt(toShuffle) << std::endl;

 //3. Napisz funkcję, która przyjmuje dwa stringi a następnie zwraca vector ich wspólnych liter(powtarzajcych sie w obu stringach).
    std::string one,two;
    std::cout << "podaj wyraz" << std::endl;
    std::cin >> one; 
    std::cout << "podaj wyraz" << std::endl;
    std::cin >> two;

    auto fromTwoStrings = doubleCheck(one, two);
    std::cout << "powstaly wektor to: ";
    std::for_each(fromTwoStrings.begin(), fromTwoStrings.end(), [](const char a) {std::cout << a << ","; });

//4. Napisz funkcję, która usunie spacje z podanego stringa.Zadanie wykonaj na dwóch kontenrach : vector i list(remove i erase) ???jak na dwoch?
    std::string theString { "to ten pierwszy string" };
    std::vector <char>spaceRemover (std::string theString);

    //5. Napisz funkcję, która zliczy wystąpienia podanej litery w podanym stringu(count).


}

