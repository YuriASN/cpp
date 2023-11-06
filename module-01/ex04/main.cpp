#include "includes.hpp"

/* Return new copy of DATA with OUT replaced with IN */
std::wstring	SwapStr(std::wstring data, std::wstring out, std::wstring in)
{
	ssize_t	i = 0, sv = 0;
	std::wstring	str = L"";

	while (sv >= 0)
	{
		sv = data.find(out, i);
		if (sv == i || sv == -1)
			break;
		else
		{
			str += data.substr(i, sv - i);
			str += in;
			i = sv + out.length();
		}
	}
	str += data.substr(i, data.length() - i);
	return (str);
}

/* Converts string to wstring */
int StringToWString(std::wstring &ws, const std::string &s)
{
    std::wstring wsTmp(s.begin(), s.end());

    ws = wsTmp;

    return 0;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments!" << std::endl;
		return (42);
	}
	std::wstring		data, tmp, s1, s2;
	std::string	replace = argv[1];
	std::wfstream	fd(argv[1], std::wios::in);
	std::locale loc("pt_PT.UTF-8");
	fd.imbue(loc);

	data = (L"");
	tmp = (L"");
	StringToWString(s1, argv[2]);
	StringToWString(s2, argv[3]);
	if (!fd.is_open())
	{
		std::cout << "Can't open the file \"" << argv[1] << "\"" << std::endl;
		return (errno);
	}
	while (std::getline(fd, tmp))
	{
		data += tmp;
		if (fd.good())
			data += (L"\n");
	}
	fd.close();
	data = SwapStr(data, s1, s2);
	replace += ".replace";
	fd.open(replace.c_str(), std::wios::binary | std::wios::out);
	fd.write(data.c_str(), data.length());
	fd.close();
	return (0);
}
