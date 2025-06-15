#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int char_print(char c);
int string_print(char *str);
int number_print(int num);
int specifier_handler (va_list args, const char *format, int i, int count);
#endif
