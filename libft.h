/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:11:26 by elemarch          #+#    #+#             */
/*   Updated: 2015/01/24 17:51:28 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

# define ISNUM(x) (x >= '0' && x <= '9')
# define INT_MAX 2147483647

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** ============================== PROTOTYPES =============================== **
*/

/*
** ================================= MISC ================================== **
** ---- ft_atoi ------------------------------------------------------------ **
**	converts the string argument str to an integer (type int).				 **
*/

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_memdel(void **ep);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *str, int c, size_t n);
void				ft_putchar(char c);
void				ft_putnbr(int n);
void				ft_putstr(const char *str);
void				ft_putstrc(const char *str, char c);
void				ft_putstrn(const char *str, int n);
void				ft_putstrs(const char *str, const char *str2);

/*
** ================================ STR... ================================= **
** ---- ft_strcpy ---------------------------------------------------------- **
**	Copies the C string pointed by source into the array pointed by 		 **
**	destination, including the terminating null character (and stopping at 	 **
**	that point).															 **
**	To avoid overflows, the size of the array pointed by destination shall 	 **
**	be long enough to contain the same C string as source (including the 	 **
**	terminating null character), and should not overlap in memory with 		 **
**	source.																	 **
** ---- ft_strcmp ---------------------------------------------------------- **
**	Compares the C string str1 to the C string str2.
**	This function starts comparing the first character of each string. if 	 **
**	they are equal to each other, it continues with the following pairs 	 **
**	until the characters differ or until a terminating null-character is 	 **
**	reached. Returns 0 if equal.											 **
** ------------------------------------------------------------------------- **
*/

char				*ft_strcat(char *dest, const char *src);
char				*ft_strchr(const char *str, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *str1, const char *str2);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **ep);
char				*ft_strdup(const char *str);
int					ft_strequ(const char *s1, const char *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_strlen(const char *str);
char				*ft_strncat(char *dest, const char *src, size_t n);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
void				*ft_strnew(size_t size);
char				*ft_strnstr(char *str1, const char *str2, size_t n);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *str1, const char *str2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(const char *str, int fd);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(const void *content, size_t content_size);

#endif
