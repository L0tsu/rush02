#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	read_dict(char *str)
{
	int r = open("numbers.dict", 0);

	int bytes;
	char *c;	
	while ((bytes = read(r, &c, sizeof(c))))
	{
		if (argv == read)
	}

// void	change_dict(char *str, char *str)
// {}