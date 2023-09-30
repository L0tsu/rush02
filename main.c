#include <unistd.h>
#include <limits.h>

void	change_dict(char *dict, char *str);
void	read_dict(char *str);

int	main(int argc, char **argv)
{
	// if (argc == 2)
	// {
		read_dict(&*argv[1]);
	// }
	// else if (argc == 3)
	// {
	// 	change_dict(&*argv[1], &*argv[2]);
	// }
	// else
	// {
	// 	write(1, "Error.\n", 8);
	// 	return (0);
	// }
}