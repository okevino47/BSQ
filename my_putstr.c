/*
** my_putstr.c for NL_lib in /home/bibibrutal/Piscine/travaux_CPool_Day/CPool_Day04
** 
** Made by Kevin Bidet
** Login   <bibibrutal@epitech.net>
** 
** Started on  Sun Nov  6 15:57:18 2016 Kevin Bidet
** Last update Thu Dec 15 16:01:00 2016 kevin bidet
*/

#include "my_usefull.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i += 1;
    }
}
