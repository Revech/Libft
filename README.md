
# Libft - Your Very First Own Library

Welcome to Libft! This project involves reimplementing a subset of the C standard library (libc) functions, as well as creating some additional functions. This README will guide you through the project's structure, the functions you need to implement, and other relevant information.

## Table of Contents
- [Part 1 - Libc Functions](#part-1---libc-functions)
- [Part 2 - Additional Functions](#part-2---additional-functions)
- [Bonus Part](#bonus-part)
- [Compilation and Usage](#compilation-and-usage)


## Part 1 - Libc Functions

In this part, you will reimplement a set of functions from the libc. These functions must have the same prototypes and behaviors as the originals

### Functions to Implement
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_strnstr`
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`


## Part 2 - Additional Functions

In this part, you will develop functions that are either not in the libc or are part of it but in a different form.

### Functions to Implement
- `ft_substr`
  ```c
  char *ft_substr(char const *s, unsigned int start, size_t len);
ft_strjoin
c
Copy code
char *ft_strjoin(char const *s1, char const *s2);
ft_strtrim
c
Copy code
char *ft_strtrim(char const *s1, char const *set);
ft_split
c
Copy code
char **ft_split(char const *s, char c);
ft_itoa
c
Copy code
char *ft_itoa(int n);
ft_strmapi
c
Copy code
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
ft_striteri
c
Copy code
void ft_striteri(char *s, void (*f)(unsigned int, char*));
ft_putchar_fd
c
Copy code
void ft_putchar_fd(char c, int fd);
ft_putstr_fd
c
Copy code
void ft_putstr_fd(char *s, int fd);
ft_putendl_fd
c
Copy code
void ft_putendl_fd(char *s, int fd);
ft_putnbr_fd
c
Copy code
void ft_putnbr_fd(int n, int fd);

Bonus Functions
ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap
Linked List Structure
Add the following structure to your libft.h file:


Copy code
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
Compilation and Usage
Clone the repository:

sh
Copy code
git clone https://github.com/yourusername/libft.git
cd libft
Compile the library:

sh
Copy code
make
Include libft.h in your project:

c
Copy code
#include "libft.h"
Link the compiled library to your project:

sh
Copy code
gcc -L. -lft your_program.c -o your_program
