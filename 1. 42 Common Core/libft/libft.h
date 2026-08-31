#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t 	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void 	ft_bzero(void *s, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strcmp(char *str1, char *str2);
void 	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif