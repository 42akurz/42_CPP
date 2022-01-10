#include "Replacer.hpp"

int main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;

	/* error */
	if (argc != 4)
	{
		PRINT("error:\nusage: ./replace <filename> <string to replace> <replacement string>");
		return 1;
	}

	/* construct class and init vars */
	Replacer	Replacer(argv[1], argv[2], argv[3]);

	/* open infile */
	infile.open(Replacer.get_infile_name());
	if (!infile.is_open())
	{
		PRINT("error opening infile!");
		return 1;
	}

	/* find and replace string */
	while (getline(infile, line))
		Replacer.replaceString(line);

	/* close infile */
	infile.close();
	if (infile.is_open())
		PRINT("error closing infile!");

	/* open outfile */
	outfile.open(Replacer.get_outfile_name(), std::ios_base::trunc);
	if (!outfile.is_open())
		PRINT("error opening outfile!");

	/* write content to outfile */
	outfile << Replacer.get_replacedText_name();

	/* close outfile */
	outfile.close();
	if (outfile.is_open())
		PRINT("error clsoing outfile!");

	return 0;
}
