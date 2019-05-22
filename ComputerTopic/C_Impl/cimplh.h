/*
 * file name: cimplh.h
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 21 May 2019 07:16:12 PM CST
 */

#ifndef _CIMPLH_H
#define _CIMPLH_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define PR(...) 	printf(__VA_ARGS__)	/* Valid in C11 */
#define and 		&&
#define or 		||
#define xor 		^
#define bit_xor		xor 
#define bit_and	 	&
#define bit_or	 	|

static inline void perror_exit(const char *msg)
{
	perror(msg);
	exit(-1);
}
#endif
