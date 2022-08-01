//a) Wygeneruj 100000 losowych liczb z przdziału - 100000 100000
//b) zapisz je do pliku
//c) nastepnie wczytaj je z tego pliku do vectora
//d) wypiszcie 100 pierwszych wczytanych liczb(uzycjie std::advance)

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
int main()
{
    //a) Wygeneruj 100000 losowych liczb z przdziału - 100000 100000
    std::random_device r;
    std::default_random_engine defEngine(r()); 
    std::uniform_int_distribution<int> intDistro(-10000, 10000);
    for (int i = 0; i <= 10000; ++i)
    {
      int n=intDistro(defEngine);
    }

    //b) zapisz je do pliku
    std::string fileName("C:\\Users\\Waldemar\\Desktop\\repos\\liczby10000.txt");
    std::ofstream fileToWrite(fileName, std::ios::out | std::ios::trunc);
    
    if (fileToWrite.is_open()) //sprawdzenie czy otworzy�em plik
    {
        std::cout << "Nice job ;)";

        for (int i = 0; i <= 10000; ++i)
        {
            if (fileToWrite.good())
            {
                fileToWrite << intDistro(defEngine) << ", ";
            }
        }

        fileToWrite.close();
    }
    else
    {
        std::cout << "Nie mozna otworzyc pliku";
        return -1;
    }

    
    //c) nastepnie wczytaj je z tego pliku do vectora

    std::vector<int> Mango;
    std::ifstream fileToRead(fileName);
    std::string numbers;

    while (fileToRead.good() && !fileToRead.eof()) // dopki plik jest dobry i nie dojechalismy do konca pliku
    {
        std::string numbers;
        //file >> str; //wczytuje kolejne wartosci tak jak przy cin (czyli do pierwszego biaego znaku)
        std::getline(fileToRead, numbers); // wczytuje cal linie - do znaku nowej lini do stringa
        std::cout << numbers << std::endl;
    }

        for (int i = 0; i < numbers.size(); i++)
        {
           
            Mango.push_back(fileToRead.eof());
        }

  fileToRead.close();


   //d) wypisac 100 pierwszych liczb
    //sprawdzmy czy w zapisanym pliku te liczby sa w tej samej kolejnosci

  std::vector <int> CopyMango;
  std::copy_n(Mango.begin(), 10, std::back_inserter(CopyMango));
 
  std::cout << "kopia vektora : ";
  std::for_each(CopyMango.begin(), CopyMango.end(), [](const int n) { std::cout << n << ' '; });
  std::cout << std::endl << std::endl;

}



