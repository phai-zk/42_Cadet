#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int c); // 1
int				ft_isdigit(int c); // 2
int				ft_isalnum(int c); // 3
int				ft_isascii(int c); // 4
int				ft_isprint(int c); // 5
unsigned long	ft_strlen(const char *s); // 6
void			*ft_memset(void *s, int c, unsigned long n); // 7
void			ft_bzero(void *s, unsigned long n); // 8
void			*ft_memcpy(void *dest, const void *src, unsigned long n); // 9
void			*ft_memmove(void *dest, const void *src, unsigned long n); // 10
unsigned long	ft_strlcpy(char *dest, const char *src, unsigned long size); // 11
unsigned long	ft_strlcat(char *dest, char *src, unsigned long size); // 12
int				ft_toupper(int c); // 13
int				ft_tolower(int c); // 14
char			*ft_strchr(const char *s, int c);// 15
char			*ft_strrchr(const char *s, int c); // 16
int				ft_strncmp(const char *s1, const char *s2, unsigned long n); // 17
void			*ft_memchr(const void *s, int c, unsigned long n); // 18
int				ft_memcmp(const void *s1, const void *s2, unsigned long n); // 19
char            *ft_strnstr(const char *big,	const char *little, unsigned long len); // 20
int				ft_atoi(const char *nptr); // 21
void			*ft_calloc(unsigned long nmemb, unsigned long size); // 22
char			*ft_strdup(const char *s); // 23

#endif
