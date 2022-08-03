#include <iostream>
#include <fstream>
#include <string>

int anotherMain()
{
    std::string fileNameWithPath("C:\\Users\\Michal\\source\\repos\\SDA_CPP1\\CPP_Zaawansowany\\Pliki\\Pliki.cpp"); // ca�a �cie�ka do pliku
    std::string fileName("Pliki.cpp"); //szuka pliku obok pliku wykonywalnego (.exe) naszego programu
    std::ifstream file(fileNameWithPath); // tworzymy sobie wejsciowy strumien plikowy

    if (file.is_open()) //sprawdzenie czy otworzylem plik
    {
        std::cout << "Hurra wczytaem plik " << fileName << std::endl << std::endl;
    }
    else
    {
        std::cout << "Error nie moge otworzyc pliku :(";
        return -1;
    }

    while (file.good() && !file.eof()) // dopki plik jest dobry i nie dojechalismy do konca pliku
    {
        std::string str;
        //file >> str; //wczytuje kolejne wartosci tak jak przy cin (czyli do pierwszego biaego znaku)
        std::getline(file, str); // wczytuje cal linie - do znaku nowej lini do stringa
        std::cout << str << std::endl;
    }
    file.close();

    std::string fileNameToWrite("C:\\Users\\Michal\\source\\repos\\SDA_CPP1\\CPP_Zaawansowany\\Pliki\\test.txt");
    std::ofstream fileToWrite(fileNameToWrite, std::ios::out | std::ios::trunc);

    if (fileToWrite.is_open()) //sprawdzenie czy otworzy�em plik
    {
        for (int i = 0; i <=10000 ; ++i)
        {
            if (fileToWrite.good())
            {
                fileToWrite << i << "\n"; //nie przekazuje std::endl //zapisuje dane tak jak do cout
            }
        }

        fileToWrite.close();
    }
    else
    {
        std::cout << "Error nie moge otworzyc pliku :(";
        return -1;
    }
  
}