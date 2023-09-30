CFLAGS = -Wall -Werror -Wextra
NAME = rush-02

$(NAME) :
	@echo "Compiling Rush02"
	@cc $(CFLAGS) -o rush02 main.c *.c

noflags :
	@echo "Compiling Rush02 without flags"
	@gcc -o rush02 *.c

clean : 
	rm -r rush02

fclean :
	rm -rf *.o rush02 *.out
	
nc		:
	@norminette *.c