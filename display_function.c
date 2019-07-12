/*
** display_function.c for display_function in /home/bibibrutal/Rendu/Projets/CPE/CPE_2016_BSQ
** 
** Made by kevin bidet
** Login   <bibibrutal@epitech.net>
** 
** Started on  Thu Dec  8 14:34:03 2016 kevin bidet
** Last update Sun Dec 18 20:09:58 2016 kevin bidet
*/

#include "my_usefull.h"

void	find_my_point(char **array_map, t_array_var *array)
{
  t_localisation	*pos;
  t_localisation	*res;

  pos = init_pos();
  res = init_pos();
  while (array_map[pos->i] != NULL)
    {
      while (array_map[pos->i][pos->j] == 'o' || array_map[pos->i][pos->j] == '.')
	{
	  if (array_map[pos->i][pos->j] == '.')
	    find_the_bsq(array_map, pos, array, res);
	  pos->j += 1;
	}
      pos->i += 1;
      pos->j = 0;
    }
  print_the_bsq(array_map, res);
  free_map(array_map);
  free(pos);
  free(res);
}

void	print_map(char **map)
{
  int	i;

  i = 0;
  while (map[i] != NULL)
    {
      my_putstr(map[i]);
      i += 1;
    }
}

char	**print_the_bsq(char **map, t_localisation *res)
{
  int	i;
  int	j;

  if (map[res->i][res->j] == '.')
    {
      i = res->i;
      while (i < res->i + res->size)
	{
	  j = res->j;
	  while (j < res->j + res->size)
	    {
	      map[i][j] = 'x';
	      j += 1;
	    }
	  i += 1;
	}
      print_map(map);
    }
  else
    print_map(map);
  return (map);
}
