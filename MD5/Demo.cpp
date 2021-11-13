#include "MD5.h"


void main()
{
	unsigned char in[10];
	unsigned char out[16];

	memset(in, 0, sizeof(in));

	for (int i = 0; i < sizeof(in); i++) {
		printf("%02X ", in[i]);
	}printf("\n");

	MD5::digest(in, sizeof(in), out);

	for (int i = 0; i < sizeof(out); i++) {
		printf("%02X ", out[i]);
	}printf("\n");



	system("pause");
}