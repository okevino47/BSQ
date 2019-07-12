/*
** my_putchar.c for NL_my_putchar in /home/bibibrutal/Piscine/travaux_CPool_Day/CPool_Day03
** 
** Made by Kevin Bidet
** Login   <bibibrutal@epitech.net>
** 
** Started on  Wed Nov  2 10:39:55 2016 Kevin Bidet
** Last update Sun Dec 18 20:08:44 2016 kevin bidet
*/

#include "my_usefull.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
