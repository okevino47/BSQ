/*
** my_put_nbr.c for my_put_nbr in /home/bibibrutal/Piscine/travaux_CPool_Day/CPool_Day03
** 
** Made by Kevin Bidet
** Login   <bibibrutal@epitech.net>
** 
** Started on  Fri Nov  4 08:55:17 2016 Kevin Bidet
** Last update Thu Dec 15 12:39:28 2016 kevin bidet
*/

#include "my_usefull.h"

void            my_putnbr(int nb)
{
  int           div;
  unsigned int  number;

  div = 1;
  if (nb < 0)
    {
      number = nb * -1;
      my_putchar('-');
    }
  else
    number = nb;
  while (number / div >= 10)
    div = div * 10;
  while (div > 0)
    {
      my_putchar(number / div % 10 + 48);
      div = div / 10;
    }
}
