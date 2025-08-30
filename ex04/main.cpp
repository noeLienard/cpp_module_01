#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);
    std::ifstream oldFile(argv[1]);
    std::string replaceStr = ".replace";
    std::ofstream newFile(argv[1] + replaceStr);
    return (0);
}