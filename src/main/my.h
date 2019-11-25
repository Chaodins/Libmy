#ifndef __MY_H__
#define __MY_H__

void my_putchar(char c);
int my_strlen(char const *str);
void my_putstr(char const *str);
void my_put_nbr(int n);
int my_isneg(int n);
int my_getnbr(char const *str);
void my_swap(int *a, int *b);
void my_sort_int_array(int *array, int size);
int my_put_nbr_base(long nb, char *base);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_alphaisprint(char c);
int my_str_isprintable(char const *str);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isupper(char const *str);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strncat(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
char *my_strdup(char const *str);
char *my_strndup(char const *str, int n);
char *my_strsep(char **to_sep, const char *delim);

#endif /* __MY_H__ */
