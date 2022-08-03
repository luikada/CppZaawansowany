#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

void zad1()
{
    std::cout << "Podaj nazwe produktu";
    std::string s;
    std::getline(std::cin, s); //wczytaj az do napotkania zaku nowej lini

    std::cout << "Wczytano: " << s;
}

void zad2()
{
    std::ifstream file("zdania.csv");

    if (!file.is_open())
    {
        std::cout << "nie udalo sie otworzyc pliku";
        return;
    }

    std::string str;
    std::vector<std::string> strings;

    while (std::getline(file, str))
    {
        strings.push_back(str);
    }

    file.close();

    std::cout << "Wczytano " << strings.size() << " lancuchow";


}

struct User
{
public:
    User(std::string login, std::string password)
        : _login(login), _password(password)
    {};
    //dopisac getry/setery itp
    std::string _login;
    std::string _password;
};

void zad3()
{
    std::ifstream file("secret_file.csv");


    if (!file.is_open())
    {
        std::cout << "nie udalo sie otworzyc pliku";
        return;
    }

    std::vector<User> users;

    std::string login;
    std::string password;
    std::getline(file, login); //zjedzenie nag��wka -> wczyta pierwsz� linie i nic z nia nie robimy

    while (std::getline(file, login, ',')) //getlnie wczytuje wszystko do napotkania pierwszego , -> to wczytuje login i usuwa przecinek
    {
        std::getline(file, password); //wczytaj mi do znaku konca lini
        users.emplace_back(login, password); //tworzy Usera i przekazuje mu te parametry do c-tora
        //users.push_back(User(login, password)); // Tworzy tymaczsowy obiekt anoniomy klasy USer i kopiuje/przenosi do wektora
    }

    auto checkPassword = [](const User& user) {
        //std::regex_match
        return user._password.size() < 8;
    };

    std::vector<User> badPassword;
    std::copy_if(users.begin(), users.end(), std::back_inserter(badPassword), checkPassword);

    //while (file.good() && !file.eof()) //getlnie wczytuje wszystko do napotkania pierwszego , -> to wczytuje login i usuwa przecinek
    //{
    //    std::getline(file, login, ',');
    //    std::getline(file, password); //wczytaj mi do znaku konca lini
    //    users.emplace_back(login, password); //tworzy Usera i przekazuje mu te parametry do c-tora
    //    //users.push_back(User(login, password)); // Tworzy tymaczsowy obiekt anoniomy klasy USer i kopiuje/przenosi do wektora
    //}

    for_each(badPassword.begin(), badPassword.end(), [](const User& user)
        {std::cout << user._login << " : " << user._password << std::endl; });

}

struct UserPlus
{
    UserPlus(std::string login, std::string password, std::string mail)
        : _login(login), _password(password), _mail(mail)
    {};

    std::string _login;
    std::string _password;
    std::string _mail;
};

void wrongData()
{
    std::ifstream file("wrong_data.csv");

    if (!file.is_open())
    {
        std::cout << "nie udalo sie otworzyc pliku";
        return;
    }

    std::vector<UserPlus> users;
    std::string login;
    std::string password;
    std::string mail;
    std::getline(file, login); //po�ykam nag��wek (ignoruje, pomija)

    while (std::getline(file, login, ',')) //dopiki mozesz wczytac co� do przecinka (mamy linie z danymi w formacie csv)
    {
        std::getline(file, password, ','); //to mozesz wczytac tez kolejn�
        std::getline(file, mail); // i oczywiscie mozesz tez wczytac to co zosta�o do ko�ca linii (3 warto��)
        users.emplace_back(login, password, mail);

    }

}

int main()
{
    //zad1();
    //zad2();
    zad3();
    //wrongData();
    return 0;
}