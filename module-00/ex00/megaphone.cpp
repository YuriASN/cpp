#include <iostream>

int	main(int argc, char **argv){
	if (argc < 2){
		std::cout<<"\n";
		return(0);
	}
	for (int i = 1; i < argc; ++i){
		for (int j = 0; argv[i][j]; ++j){
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] -= 32;
		}
		std::cout<<argv[i];
	}
	std::cout << std::endl;
	return(0);
}
