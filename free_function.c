/*
** free_function.c for free_function in /home/bibibrutal/Rendu/Projets/CPE/CPE_2016_BSQ
** 
** Made by kevin bidet
** Login   <bibibrutal@epitech.net>
** 
** Started on  Sun Dec 18 17:03:37 2016 kevin bidet
** Last update Sun Dec 18 17:26:09 2016 kevin bidet
*/

#include "my_usefull.h"

void    free_map(char **map)
{
  int   i;

  i = 0;
  while (map[i] != NULL)
    {
      free(map[i]);
      i += 1;
    }
  free(map);
}
