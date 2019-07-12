/*
** main.c for main in /home/bibibrutal/Rendu/Projets/CPE/CPE_2016_BSQ
** 
** Made by kevin bidet
** Login   <bibibrutal@epitech.net>
** 
** Started on  Thu Dec  8 12:07:26 2016 kevin bidet
** Last update Sun Dec 18 20:07:04 2016 kevin bidet
*/

#include "my_usefull.h"

int	main(int argc, char **argv)
{
  t_array_var	*array;
  t_file_var	*file;
  struct stat	*file_source;

  array = malloc(sizeof(t_array_var));
  file = malloc(sizeof(t_file_var));
  file_source = malloc(sizeof(struct stat));
  if (argc == 2)
    under(file, array, file_source, argv[1]);
  else
    call_error("Error, invalid number of path given.\n");
  free(file);
  free(array);
  free(file_source);
  return (0);
}

void	under(t_file_var *file, t_array_var *array,
	      struct stat *file_source, char *str)
{
  int	len;

  file->trust = open(str, O_RDONLY);
  if (stat(str, file_source) < 0)
    call_error("invalid file.\n");
  file->size = file_source->st_size;
  file->buf = malloc(sizeof(char) * (file->size + 1));
  file->buf[file->size] = '\0';
  len = read(file->trust, file->buf, file->size);
  if (file->trust != -1 || file->size > 0)
    {
      file->r_buf = check_map(file->buf);
      array->nb_line = retrieve_nb_line(file->buf);
      array->nb_column = retrieve_nb_column(file->buf);
      find_my_point(my_map_in_my_tab(array->nb_line, array->nb_column,
				     file->r_buf), array);
    }
  else
    call_error("Error, file doesn't exist or invalid file content.\n");
  close(file->trust);
  free(file->buf);
}

char	**my_map_in_my_tab(int	nb_line, int nb_column, char *buf)
{
  char	**array_map;
  int	i;
  int	j;
  int	k;

  array_map = malloc(sizeof(*array_map) * (nb_line + 1));
  i = 0;
  j = 0;
  while (i < nb_line)
    {
      array_map[i] = malloc(sizeof(**array_map) * (nb_column + 2));
      k = 0;
      while (buf[j] != '\n')
	{
	  array_map[i][k] = buf[j];
	  k += 1;
	  j += 1;
	}
      array_map[i][k] = '\n';
      array_map[i][k + 1] = '\0';
      i += 1;
      j += 1;
    }
  array_map[nb_line] = NULL;
  return (array_map);
}
