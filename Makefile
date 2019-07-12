##
## Makefile for Makefile in /home/bibibrutal/Rendu/Projets/CPE/CPE_2016_BSQ
## 
## Made by kevin bidet
## Login   <bibibrutal@epitech.net>
## 
## Started on  Tue Dec  6 15:36:39 2016 kevin bidet
## Last update Sun Dec 18 17:06:09 2016 kevin bidet
##

CC	=	gcc

NAME	=	bsq

RM	=	rm -rf

SRC	=	display_function.c	\
		main.c			\
		my_putchar.c		\
		my_strlen.c		\
		my_getnbr.c		\
		error_function.c	\
		calcul_function.c	\
		my_putstr.c		\
		my_putnbr.c		\
		free_function.c


OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

%.o:	%.c
	$(CC) -g3 -c -o $@ $<

$(NAME):		$(OBJ)
		$(CC) -o $(NAME) -g3 $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

go:		re
		$(RM) $(OBJ)
