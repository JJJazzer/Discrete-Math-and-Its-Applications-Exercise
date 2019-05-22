/*
 * file name: 1-1.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 21 May 2019 07:17:20 PM CST
 */

#include "cimplh.h"

int main(int argc, char *argv[])
{
	if (argc != 3)
		perror_exit("./a.out <prop p> <prop q>");
	int p = atoi(argv[1]);
	int q = atoi(argv[2]);
	PR("合取(%d %d): %d\n", p, q, (p and q));
	PR("析取(%d %d): %d\n", p, q, (p or q));
	PR("异或(%d %d): %d\n", p, q, (p xor q));
	PR("蕴含(%d %d): %d\n", p, q, ((p == true) and (q == false))
					? false : true);
	PR("双蕴含(%d %d): %d\n", p, q, (((p == true) and (q == true)) 	
					|| ((p == false) and (q == false)))
					? true : false);
	return 0;
}
