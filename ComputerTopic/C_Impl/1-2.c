/*
 * file name: 1-2.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 21 May 2019 07:45:49 PM CST
 */

#include "cimplh.h"

int main(int argc, char *argv[])
{
	if (argc != 4)
		perror_exit("./a.out <bit string> <oper> <bit string>");
	int len1 = strlen(argv[1]);
	int len2 = strlen(argv[3]);
	if (len1 != len2)
		perror_exit("string's length not equal each other");
	char *pstr1 = argv[1];
	char *pstr2 = argv[3];
	int *res = (int*) malloc(sizeof(*res) * len1);
	int i = 0;
	while (i < len1) {
		if (!strcmp(argv[2], "and"))
			res[i] = (pstr1[i] - '0') bit_and (pstr2[i] - '0');
		else if (!strcmp(argv[2], "or"))
			res[i] = (pstr1[i] - '0') bit_or (pstr2[i] - '0');
		else if (!strcmp(argv[2], "xor"))
			res[i] = (pstr1[i] - '0') bit_xor (pstr2[i] - '0');
		i++;
	}
	for (i = 0; i < len1; i++)
		PR("%d", res[i]);
	PR("\n");
	free(res);
	return 0;
}
