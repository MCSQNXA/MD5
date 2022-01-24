#include "MD5.h"

#include <Windows.h>

#include <string>
#include <iostream>


int main()
{
	SetConsoleTitle("Please enter a string");

	std::string string;
	unsigned char out[16];

	while (std::getline(std::cin, string)) {
		MD5::digest((unsigned char*)string.c_str(), string.size(), out);

		for (int i = 0; i < sizeof(out); i++) {
			printf("%02X ", out[i]);
		}

		std::cout << std::endl << std::endl;
	}



}