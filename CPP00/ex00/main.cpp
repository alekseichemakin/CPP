#include <iostream>

void    parser(char **av)
{
    int i = 0;
    int n;

    while (av[++i])
    {
        n = -1;
        while (av[i][++n])
            std::cout << (char)toupper(av[i][n]);
    }
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        parser(argv);
    return (0);
}