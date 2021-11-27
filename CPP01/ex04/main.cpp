#include <iostream>
#include <fstream>

int check_args(std::ifstream &i_file, char *argv[], int argc)
{
	std::string s1, s2;

	if (argc != 4)
	{
		std::cout << "Error: Wrong argument" << std::endl;
		return (1);
	}
	s1 = argv[2];
	s2 = argv[3];
	if (!s1.length() || !s2.length())
	{
		std::cout << "Error: Wrong argument" << std::endl;
		return (1);
	}
	i_file.open(argv[1]);
	if (!i_file)
	{
		std::cout << "Error: File \"" << argv[1] << "\" can`t open" << std::endl;
		return (1);
	}
	return (0);
}

void	get_buff(std::ifstream &i_file, std::string &buff)
{
	std::string str;
	while (getline(i_file, str))
	{
		buff += str;
		buff += "\n";
	}
}

void	replace_str(std::string &buff, char *argv[])
{
	std::string str1 = argv[2];
	std::string str2 = argv[3];

	for (int i = 0; i < buff.length(); i++)
	{
		if (buff.find(str1, i) < buff.length())
		{
			i = (int)buff.find(str1, i);
			buff.erase(i, str1.length());
			buff.insert(i, str2);
			i += (int)str2.length();
		}
	}
}

int	create_file(std::string &buff, std::ofstream &o_file, const char *name)
{
	std::string name_rep = name;
	name_rep += ".replace";


	o_file.open(name_rep);
	if (!o_file)
	{
		std::cout << "Error: File \"" << name_rep << "\" can`t open" << std::endl;
		return (1);
	}
	o_file << buff;
	o_file.close();
	return (0);
}

int main(int argc, char *argv[])
{
	std::ifstream	i_file;
	std::ofstream	o_file;
	std::string		buff;

	if (check_args(i_file, argv, argc))
		return (1);
	get_buff(i_file, buff);
	i_file.close();
	replace_str(buff, argv);
	if (create_file(buff, o_file, argv[1]))
		return (1);
	return (0);
}