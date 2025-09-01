#include <iostream>
#include <fstream>

std::string transformString(const std::string& str, const std::string& s1, const std::string& s2) {
    std::string newStr;
    size_t i = 0; 
    size_t n = 0;

    while ((n = str.find(s1, i)) != std::string::npos) {
        newStr += str.substr(i, n - i);
        newStr += s2;
        i = n + s1.length();
    }
    newStr += str.substr(i);
    return (newStr);
}

int main(int argc, char **argv)
{
    std::string stash;
    if (argc != 4)
        return (1);
    std::ifstream oldFile(argv[1]);
    std::string replaceStr = ".replace";
    std::ofstream newFile(argv[1] + replaceStr);
    while (1)
    {
        std::string line;
        std::getline(oldFile, line);
        if (line.empty())
            break ;
        stash += (line + '\n');
    }
    std::string content = transformString(stash, argv[2], argv[3]);
    newFile << content;
    return (0);
}
