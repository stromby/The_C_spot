#ifndef WORDLE_H
# define WORDLE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <time.h>
#include <string.h>

# define GREEN_BG  "\033[42;30m"
# define YELLOW_BG "\033[43;30m"
# define GREY_BG   "\033[100;37m"
# define RESET     "\033[0m"
# define CLEAR_SCREEN() printf("\033[2J\033[H\033[3J")

// get_next_line.c
char	*get_next_line(int fd);
int		ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *str);

#endif
