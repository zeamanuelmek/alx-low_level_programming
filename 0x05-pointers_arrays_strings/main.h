#ifdef MAIN_H
#define MAIN_H
/**
 *define
 */
int _putchar(char c);

void reset_to_98(int *n);
/**takes a pointer to an int as parameter and updates the value it points to.
 */
void swap_int(int *a, int *b);
/** returns the length of a string)
 */
int _strlen(char *s);
/**prints a string, folowed by a new ine, to stdout
 */
void _puts(char *str);
/** prints a string, in reverse, followed by a new line
 */
void print_rev(char *s);
/**
 * reverses a string.
 */
void rev-string(char *s);
/**
 *void puts_half(char *str);
 *prints n elements of an array of integers, followed by a new line
 */
void puts2(char *str);
/**
 * prints half of a string
 */
void puts_half(char *str);
/**
 * prints n elts of an array of integers
 */
void print_array(int *a, int n);
/** copies the string pointed to by src, including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 */
char *_strcpy(char *dest, char *src);
/* _atoi - convert string to int
 *  @s: string to convert
 *  Return: integer
 */
int _atoi(char *s);

#endif
