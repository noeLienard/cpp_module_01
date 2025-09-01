#include "Harl.hpp"

int main(int argc, char **argv) {
    Harl harl;
    const std::string &level = argv[1];
    if (argc != 2)
        return (1);
    harl.complain(level);
}
