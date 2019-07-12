/*
** my_getnbr.c for my_getnbr in /home/bibibrutal/Rendu/Piscine/travaux_CPool_Day
** 
** Made by kevin bidet
** Login   <bibibrutal@epitech.net>
** 
** Started on  Sun Dec 11 14:57:49 2016 kevin bidet
** Last update Sun Dec 11 15:15:45 2016 kevin bidet
*/

#include "my_usefull.h"

int     my_getnbr(char *str)
{
  int   sign;
  int   result;

  sign = 1;
  result = 0;
  while (*str == '-' || *str == '+')
    {
      if (*str == '-')
	sign = - sign;
      str = str + 1;
    }
  while (*str != '\0' && *str >= '0' && *str <= '9')
    {
      if (result > 214748364)
	return (0);
      if (result == 214748364 && *str > 7 && sign == 1)
	return (0);
      if (result == 214748364 && *str > 8 && sign == -1)
	return (0);
      result = result * 10 + *str - 48;
      str = str + 1;
    }
  if (sign == -1)
    result = - result;
  return (result);
}
