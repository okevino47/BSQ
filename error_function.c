/*
** error_function.c for error_function in /home/bibibrutal/Rendu/Projets/CPE/CPE_2016_BSQ
** 
** Made by kevin bidet
** Login   <bibibrutal@epitech.net>
** 
** Started on  Sun Dec 11 20:18:39 2016 kevin bidet
** Last update Fri Dec 16 15:03:53 2016 kevin bidet
*/

#include "my_usefull.h"

char     *check_map(char *buf)
{
  int   i;
  int   k;
  int   nb_line;
  char	*j;

  i = 0;
  k = 0;
  j = 0;
  nb_line = 0;
  j = map_content(buf, i, k , nb_line);
  return (j);
}

char	*map_content(char *buf, int i, int k, int nb_line)
{
  char	*j;

  while (buf[i] != '\n' && buf[i] != '\0')
    {
      if (buf[i] >= '0' && buf[i] <= '9')
	i += 1;
      else
	call_error("Error, invalid number of line.\n");
      nb_line = my_getnbr(buf);
    }
  j = &buf[i + 1];
  while (buf[i] != '\0')
    {
      if (buf[i] == '\n' || buf[i] == 'o' || buf[i] == '.')
	{
	  i += 1;
	  if (buf[i] == '\n')
	    k += 1;
	}
      else
	call_error("Error, wrong file content.\n");
    }
  if (k != nb_line)
    call_error("Error, number of line does not match.\n");
  return (j);
}

void    call_error(char *str)
{
  int   nb_char;

  nb_char = 0;
  nb_char = my_strlen(str);
  write(2, str, nb_char);
  exit(84);
}
