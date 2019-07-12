/*
** calcul_function.c for calcul_function in /home/bibibrutal/Rendu/Projets/CPE/CPE_2016_BSQ
**
** Made by kevin bidet
** Login   <bibibrutal@epitech.net>
**
** Started on  Wed Dec 14 12:25:17 2016 kevin bidet
** Last update Sun Dec 18 18:38:15 2016 kevin bidet
*/

#include "my_usefull.h"

int     retrieve_nb_line(char *buf)
{
  int   i;
  int	nb_line;

  i = 0;
  while (buf[i] != '\n')
    i += 1;
  nb_line = my_getnbr(buf);
  return (nb_line);
}

int	retrieve_nb_column(char *buf)
{
  int	nb_column;
  int	i;
  char	*j;

  i = 0;
  nb_column = 0;
  while (buf[i] != '\n')
      i += 1;
   j = &buf[i + 1];
   while (*j != '\n')
     {
       nb_column += 1;
       j += 1;
     }
  return (nb_column);
}

t_localisation  *find_the_bsq(char **map, t_localisation *pos,
			      t_array_var *array, t_localisation *res)
{
  int   i;
  int   j;
  int   size;

  i = pos->i;
  size = pos->size;
  while (i < (pos->i + size) && map[i] != NULL)
    {
      j = pos->j;
      while (j < (pos->j + size) && map[i][j] != '\n')
	{
	  if (map[i][j] == '.')
	    j += 1;
	  else
	    return (pos);
	}
      i += 1;
      if (i - pos->i > j - pos->j)
	return (pos);
      if (map[i] == NULL || j > array->nb_column)
	return (pos);
    }
  pos->size += 1;
  set_result(res, size, i, j);
  return (find_the_bsq(map, pos, array, res));
}

void	set_result(t_localisation *res, int size, int i, int j)
{
  res->i = i - size;
  res->j = j - size;
  res->size = size;
}

t_localisation *init_pos()
{
  t_localisation        *pos;

  pos = malloc(sizeof(t_localisation));
  pos->i = 0;
  pos->j = 0;
  pos->size = 1;
  return (pos);
}
