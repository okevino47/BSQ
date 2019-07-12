/*
** my_strlen.c for NL_my_strlen in /home/bibibrutal/Piscine/travaux_CPool_Day/CPool_Day04
** 
** Made by Kevin Bidet
** Login   <bibibrutal@epitech.net>
** 
** Started on  Sun Nov  6 16:03:19 2016 Kevin Bidet
** Last update Sun Dec 11 15:25:59 2016 kevin bidet
*/

#include "my_usefull.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i += 1;
    }
  return (i);
}
