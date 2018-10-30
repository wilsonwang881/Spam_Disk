//============================================================================
// Name        : spamDisk.cpp
// Author      : Wilson
// Version     :
// Copyright   : Feel free to use
// Description : Spam the disk and erase old data
//============================================================================

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main() {
	std::cout << "Program initiated" << std::endl;


	std::ofstream outfile;
	outfile.open("spam.txt");

	std::string dummy = "";

	std::cout << "Generating dummy data" << std::endl;

	for(unsigned int i=0; i<5535; i++){
		dummy += "111111111111111";
		dummy += "\n";
	}

	std::cout << "Writing dummy data" << std::endl;

	for(unsigned int i=0; i<967295; i++){
		outfile << dummy << std::endl;

		if(i==967295/10){
			std::cout << "10% completed" << std::endl;
		}
		else if(i==967295/5){
			std::cout << "20% completed" << std::endl;
		}
		else if(i==967295/2){
			std::cout << "50% completed" << std::endl;
		}
		else if(i==967295/5*3){
			std::cout << "60% completed" << std::endl;
		}
		else if(i==967295/5*4){
			std::cout << "80% completed" << std::endl;
		}
	}

	std::cout << "100% completed" << std::endl;

	outfile.close();

	std::cout << "Program finished" << std::endl;

	return 0;
}
