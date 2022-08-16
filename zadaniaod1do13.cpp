#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list> 

#include <numeric>

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

std::vector<char> doubleCheck(std::string first, std::string second)
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

std::string spaceRemover(std::string& s)
{

    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
    return s;
}

int sameLetters(std::string s, char c)
{

    auto howManyChars = std::count(s.begin(), s.end(), c);
    return howManyChars;

}

bool checkIfPalindrom2ndMethode(std::string s)
{
    return std::equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());
}

bool checkIfPalindrom(std::string s)
{
    std::string theOldS = s;
    std::reverse(s.begin(), s.end());

    return theOldS == s;
}

std::vector<int> squaresFromRange(int a, int b)
{
    std::vector<int> v;

    while (v.size() >= a || v.size() <= b)
    {
        int num = a * a;
        v.push_back(num);
        a++;

    }

    return v;
}

int SumofSquares(std::vector<int> v)
{
    return std::accumulate(v.begin(), v.end(), 0);

}

std::vector<int> createFrom1ToN(int n)
{
    std::vector<int> from1ToN(n);
    iota(from1ToN.begin(), from1ToN.end(), 1);
    return from1ToN;
}

void permute3numbers(int a, int b, int c)
{
    std::vector <int>abc;
    abc.push_back(a);
    abc.push_back(b);
    abc.push_back(c);

    std::sort(abc.begin(), abc.end());

    do
    {
        for (int i : abc)
        {
            std::cout << i << ", ";
        }
        std::cout << std::endl;

    } while (std::next_permutation(abc.begin(), abc.end()));

}

void permuteIf11(std::vector <int>numbers)
{

    std::sort(numbers.begin(), numbers.end());
    std::vector <int> multipleOf11;

    for_each(numbers.begin(), numbers.end(), [&multipleOf11](int i) {if (i % 11 == 0) { return multipleOf11.push_back(i); } });
    

    do
    {
        for (int i : multipleOf11)
        {
            std::cout << i << ", ";
        }
        std::cout << std::endl;

    } while (std::next_permutation(multipleOf11.begin(), multipleOf11.end()));


}


void toVec(int n)
{
    std::vector<int> vec;

	while (n > 0)
	{
		vec.insert(vec.begin(), n % 10);
		n /= 10;
	}

	for (int i : vec)
	{
		std::cout << i << ", ";
	}
}

void firstPalindrom(int n)
{
    std::vector<int> vec;

    while (n > 0)
    {
        vec.insert(vec.begin(), n % 10);
        n /= 10;
    }
}
int main()
{
    //13. Napisz funkcję, która znajdzie pierwszą większą liczbę, która jest palindromem od zadanej liczby.
    
    //co??
    int check = 1243;

    int palindromOfNumber = 43;
    firstPalindrom()
}

void zad1()
{ //1. Napisz funkcję, która przyjmuje stringa, następnie uszereguje wszystkie litery w porządku alfabetycznym i zwraca tak odwróconego stringa (sort).
    std::string toSort;
    std::cout << "podaj wyraz" << std::endl;
    std::cin >> toSort;

    std::cout << sortItOut(toSort) << std::endl;
}
void zad2()
{
    ////2. Napisz analogiczną funkcję, która zwróci przemieszanego stringa(random_shuffle).Zwróć uwagę czy za każdym uruchomieniem, faktycznie string jest przemieszany innaczej
    std::string toShuffle;
    std::cout << "podaj wyraz" << std::endl;
    std::cin >> toShuffle;

    std::cout << shuffleIt(toShuffle) << std::endl;
}
void zad3()
{
    //3. Napisz funkcję, która przyjmuje dwa stringi a następnie zwraca vector ich wspólnych liter(powtarzajcych sie w obu stringach).
    std::string one, two;
    std::cout << "podaj wyraz" << std::endl;
    std::cin >> one;
    std::cout << "podaj wyraz" << std::endl;
    std::cin >> two;

    auto fromTwoStrings = doubleCheck(one, two);
    std::cout << "powstaly wektor to: ";
    std::for_each(fromTwoStrings.begin(), fromTwoStrings.end(), [](const char a) {std::cout << a << ","; });
}
void zad4()
{
    //4. Napisz funkcję, która usunie spacje z podanego stringa.
    std::string myString = ("Hejka ! Ciao ! Ola !");
    spaceRemover(myString);
    std::for_each(myString.begin(), myString.end(), [](const char a) {std::cout << a; });
}
void zad5()
{
    //5. Napisz funkcję, która zliczy wystąpienia podanej litery w podanym stringu(count). vector i lista
    std::string someString = "Policz ile liter sie powtarza";
    char charCheck = 'a';

    auto result = sameLetters(someString, charCheck);
    std::cout << result << std::endl;

}

void zad6()
{
    //6. Napisz funkcję, która sprawdzi czy podany string jest palindromem(reverse i transform lub equal)
    std::string someString = "Czy to jest palindrom";
    std::string someString2 = "radar";
    std::cout << someString << std::endl;
    std::cout << std::boolalpha << checkIfPalindrom(someString2) << std::endl;

    std::cout << std::boolalpha << checkIfPalindrom2ndMethode(someString2);

}

void zad7()

{//7. Napisz funkcję, która stworzy wektor przechowujący potęgi kwadratowe z podanego zakresu np od. 3 do 10 (for_each)
    std::cout << "zad 7" << std::endl;

    int a, b = 0;
    std::cout << "podaj zakres" << std::endl;
    std::cout << "od: ";
    std::cin >> a;
    std::cout << "do: ";
    std::cin >> b;
    auto result = squaresFromRange(a, b);

    std::for_each(result.begin(), result.end(), [](const int i) {std::cout << i << ", "; });
    std::cout << std::endl << std::endl;

}

void zad8()
{
    //8. Zmień poprzednie zadanie tak aby zwracało sumę kwadratów(accumulate)
    std::cout << "zad 8" << std::endl;

    int a, b = 0;
    std::cout << "podaj zakres" << std::endl;
    std::cout << "od: ";
    std::cin >> a;
    std::cout << "do: ";
    std::cin >> b;
    auto result = squaresFromRange(a, b);

    std::for_each(result.begin(), result.end(), [](const int i) {std::cout << i << ", "; });
    std::cout << std::endl << std::endl;

    std::cout << "sum of squares from range " << SumofSquares(result) << std::endl;

}

void zad9()
{
    //9. Napisz funkcję, która stworzy wektor przechowujący liczby od 1 do n.Następnie utwórz dwa wektory.
    // Jeden, którzy będzie przechowywał tylko wielokrotności 2, a drugi tylko wielokrotności 3. 
    // Następnie zwróć vector przechowujący tylko wielokrotności 2 i 3. (remove_copy_if, set_intersecti

    std::cout << "zad 9" << std::endl;
    auto result = createFrom1ToN(20);
    std::for_each(result.begin(), result.end(), [](const int i) {std::cout << i << ", "; });
    std::cout << std::endl;

    std::vector<int> onlyTwo;
    copy_if(result.begin(), result.end(), std::back_inserter(onlyTwo), [](int n) { return n % 2 == 0; });
    std::for_each(onlyTwo.begin(), onlyTwo.end(), [](const int i) {std::cout << i << ", "; });
    std::cout << std::endl;

    std::vector<int> onlyThree;
    copy_if(result.begin(), result.end(), std::back_inserter(onlyThree), [](int n) { return n % 3 == 0; });
    std::for_each(onlyThree.begin(), onlyThree.end(), [](const int i) {std::cout << i << ", "; });
    std::cout << std::endl;


    std::vector<int> both;
    std::set_intersection(onlyTwo.begin(), onlyTwo.end(), onlyThree.begin(), onlyThree.end(), std::back_inserter(both));
    for (int n : both)  std::cout << n << ' ';


}

void zad10()

{ //10. Napisz funkcję, która zwróci wszystkie możliwe permutacje 3 liczb(next_permutation)

    permute3numbers(2, 3, 5);

}
void zad11()
{//11. Napisz funkcję, która przyjmuje wektor cyfr, a zwraca liczbę permutacji tych cyfr, które są wielokrotnością 11.

    std::vector <int> myVector = { 1,2,3,4,5,11,22,33 };
    permuteIf11(myVector);
}

void zad12()
{
    //12. Napisz funkcję, która zamieni podanego int na vector jej cyfr.

    int n = 9842384874;
    //fromIntToVec(myNumber);
    toVec(n);

}

