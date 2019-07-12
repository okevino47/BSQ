/*
** my_usefull.h for my_usefull in /home/bibibrutal/Rendu/Projets/CPE/CPE_2016_BSQ
**
** Made by kevin bidet
** Login   <bibibrutal@epitech.net>
**
** Started on  Tue Dec  6 15:43:39 2016 kevin bidet
** Last update Sun Dec 18 19:43:14 2016 kevin bidet
*/

#ifndef MY_USEFULL_H_
#define MY_USEFULL_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct	s_array_variables
{
  int		nb_line;
  int		nb_column;
  char		**array_map;
  char		*line;
}		t_array_var;

typedef struct  s_file_infos
{
  char		*buf;
  char		*r_buf;
  int		size;
  int		eff_size;
  int		trust;
}		t_file_var;

typedef struct	s_localisation
{
  int		i;
  int		j;
  int		size;
}		t_localisation;

t_localisation	*init_pos();
t_localisation	*find_the_bsq(char **array_map, t_localisation *pos,
			      t_array_var *array, t_localisation *res);
int		retrieve_nb_line(char *buf);
int		retrieve_nb_column(char *buf);
int		main(int argc, char **argv);
int		my_getnbr(char *str);
int		my_strlen(char *str);
char		*check_map(char *buf);
char		*map_content(char *buf, int i, int k, int nb_line);
char		**print_the_bsq(char **map, t_localisation *res);
char		**my_map_in_my_tab(int nb_line, int nb_column, char *buf);
void		call_error(char *str);
void		my_putnbr(int nb);
void		my_putstr(char *str);
void		free_map(char **map);
void		my_putchar(char c);
void		print_map(char **map);
void		find_my_point(char **array_map, t_array_var *array);
void		set_result(t_localisation *res, int size, int i, int j);
void		under(t_file_var *file, t_array_var *array,
		struct stat *file_source, char *str);

#endif /* !MY_USEFULL_H_ */
