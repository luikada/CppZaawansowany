//1. Wczytaj od u¿ytkownika ³añcuch znaków, a nastêpnie sprawdz czy jest to poprawny adres e - mail.
//^[a-z0-9_.]{3,}@[a-z0-9_]+.(com|pl|edu)$
#include <iostream>
#include<regex>

std::string MailRead()
{
	std::cout << "podaj maila: " << std::endl;
	std::string email;
	std::cin >> email;
	return email;
}
bool CheckMail(const std::string& mail)
{
	std::regex MailRegex(" \\ ^ [a - z0 - 9_.]{3,}@[a - z0 - 9_] + .(com | pl | edu)$");
	return std::regex_match(mail, MailRegex);
}

int main()
{
	std::string emailis = MailRead();
	std::cout << "czy to mail? : " << CheckMail(emailis);

}