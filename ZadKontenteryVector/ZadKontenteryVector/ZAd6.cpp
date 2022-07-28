#include <iostream>
#include <map>
void translator(const std::map <std::string, std::string>& dictionary, const std::string& english)
{
	std::string polish{};
	try
	{
		polish = dictionary.at(english);
	}
	catch(const std::out_of_range & ex)
	{
		polish = "we can't traslate, make sure the world exists";
	}

	std::cout << english << "means: " << polish << std::endl;
}
int main()
{
	std::map <std::string, std::string> dictionary;
	dictionary.insert({ "soup", "zupa" });
	dictionary.insert({ "coffee", "kawka" });
	dictionary.insert({ "cat", "kot" });
	dictionary.insert({ { "pear", "gruszka" }, { "blue", "niebieski" } });

	std::cout << dictionary.at("kot") << std::endl;
	std::cout << dictionary["soup"] << std::endl;

	translator(dictionary, "coffee");
	translator(dictionary, "buba");



}