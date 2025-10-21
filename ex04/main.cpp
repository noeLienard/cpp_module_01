#include <fstream>
#include <iostream>
#include <string.h>

std::string transformString(const std::string &str, const std::string &s1,
	const std::string &s2)
{
	size_t	i;
	size_t	n;

	std::string newStr;
	i = 0;
	n = 0;
	while ((n = str.find(s1, i)) != std::string::npos)
	{
		newStr += str.substr(i, n - i);
		newStr += s2;
		i = n + s1.length();
	}
	newStr += str.substr(i);
	return (newStr);
}

int	main(int argc, char **argv)
{
	std::string stash;
	if (argc != 4)
		return (1);
	std::ifstream oldFile(argv[1]);
	if (oldFile.is_open())
	{
		std::string replaceStr = ".replace";
		std::ofstream newFile(argv[1] + replaceStr);
		std::string line;
		while (std::getline(oldFile, line))
			stash += (line + '\n');
		std::string content = transformString(stash, argv[2], argv[3]);
		newFile << content;
	}
	else
	{
		std::cout << "Error !" << std::endl;
	}
	return (1);
}