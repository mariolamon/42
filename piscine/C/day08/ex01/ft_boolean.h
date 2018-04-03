#include <unistd.h>

#ifndef	FT_BOOLEAN_H
#define FT_BOOLEAN_H
	#define TRUE		1
	#define FALSE		0
	#define SUCCESS		1
	#define EVEN_MSG	"J'ai un nombre pair d'argument.\n"
	#define ODD_MSG		"J'ai un nombre impair d'argument.\n"
	#define EVEN(x)		(x % 2 ? TRUE : FALSE)	
	typedef int t_bool;
#endif
