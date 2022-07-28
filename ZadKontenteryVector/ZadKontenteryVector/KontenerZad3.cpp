// Za pomoc� std::set sprawdz czy w podanym �a�cuchu znak�w wyst�puj� wszystkie litery alfabetu.

#include <iostream>
#include <set>
#include <algorithm>

bool containsAllLetters(std::string text)
{
    std::set<char> alphabetChecker;

    for (std::string::iterator itText = text.begin(); itText != text.end(); itText++) //tu zmiast std::string::iterator pisz auto
    {
        if (*itText >= 65 && *itText <= 90) //zamien duze litery na ma�e
        {
            *itText += 32;
        }

        if (*itText >= 97 && *itText <= 122) //wrzucamy do naszego kontenera tylo male litery
        {
            alphabetChecker.insert(*itText); //umieszcza w zbiorze unikalne wartosci, duplikaty sa pomijane
        }
    }

    return alphabetChecker.size() == 26;
}

unsigned char toLowerCase(unsigned char c)
{
    return std::tolower(c);
}

bool containsAllLetters2(std::string text)
{
    auto removeNonLetters = [](unsigned char c)
    {
        return !((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
    };

    text.erase(std::remove_if(text.begin(), text.end(), removeNonLetters), text.end()); //erase remove idiom
    //std::transform(text.begin(), text.end(), text.begin(), toLowerCase); //to samo co nizej, ale bez uzycia lambdy

    //funckja transform dla kazdego elementu z zakresu (text.begin -> text.end) wywo�a przekazan� unary operation
    //a nast�pnie przechowa wynik w text.begin()
    std::transform(text.begin(), text.end(), text.begin(), //zamiana na ma�e litery 
        [](unsigned char c) { return std::tolower(c); });

    std::set<char> alphabetChecker;

    std::for_each(text.begin(), text.end(),  //dla kazdego elementu wywo�aj lambd�
        [&alphabetChecker](unsigned char c) { alphabetChecker.insert(c); });

    return alphabetChecker.size() == 26;
}

bool containsAllLetters3(const std::string& text)
{
    std::set<char> alphabetChecker;


    auto magicLambda = [&alphabetChecker](unsigned char c)
    {
        if ((c >= 97 && c <= 122) && (c >= 65 && c <= 90)) //"wkladanie do kontenera wszystkich liter"
        {
                                       
            alphabetChecker.insert(std::tolower(c));
        }
    };
    
    std::for_each(text.begin(), text.end(), magicLambda); // ?? wywolywanie lambdy dla kazdego chara z textu. 
                                                                // czy magicLambda tu nie powinna byc referencja ? 
                                                                //czy uzywajac std::for_each robimy kopie magicLambdy??

    return alphabetChecker.size() == 26;
    
}



int main()
{
    std::cout << "Hello World!\n";
}
