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
int my_alphaisprint(char c);
int my_str_isprintable(char const *str);
int my_showmem(char const *str, int size);

#endif /* __MY_H__ */
