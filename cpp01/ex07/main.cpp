#include <iostream>
#include <fstream>

int		error(std::string str_error)
{
	std::cout << str_error << std::endl;
	return (0);
}

void	replace_in_file(std::fstream &read_fd, std::ofstream &write_fd, char *argv[])
{
	std::string		str_origin;
	std::string		str_replace;
	std::string		input_line;
	size_t			position;

	str_origin = argv[1];
	str_replace = argv[2];
	while (std::getline(read_fd, input_line))
	{

		while ((position = input_line.find(str_origin)) != std::string::npos)
		{
			write_fd << input_line.substr(0, position) << str_replace;
			input_line = input_line.substr(position + str_origin.length());
		}
		write_fd << input_line;
		if (!read_fd.eof())
			write_fd << std::endl;
	}
}

int		main(int argc, char *argv[])
{
	std::string		filename = "test.txt";
	std::fstream	read_fd;
	std::ofstream	write_fd;

	if (argc != 3)
		return (error("Wrong numbers of arguments"));

	read_fd.open(filename);
	if (!read_fd.is_open())
		return (error("Can`t open file " + filename));
	write_fd.open(filename + ".replace");
	if (!write_fd.is_open())
	{
		read_fd.close();
		return (error("Can`t open file " + filename + ".replace"));
	}
	replace_in_file(read_fd, write_fd, argv);
	read_fd.close();
	write_fd.close();
	return (0);
}