# 0x07. C - Even more pointers, arrays and strings
## TASKS
### 0. memset
* The function `char *_memset(char *s, char b, unsigned int n)` fills memory with a constant byte.
* The `_memset()` function fills the first n bytes of the memory area pointed to by s with the constant byte b
* Returns a pointer to the memory area s
### 1. memcpy
* The function `char *_memcpy(char *dest, char *src, unsigned int n)` copies memory area.
* The `_memcpy()`  function copies n bytes from memory area src to memory area dest
* Returns a pointer to dest
### 2. strchr
* The function `char *_strchr(char *s, char c)` locates a character in a string.
* Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
### 3. strspn
* The function `unsigned int _strspn(char *s, char *accept)` gets the length of a prefix substring.
* Returns the number of bytes in the initial segment of s which consist only of bytes from `accept`
### 4. strpbrk
* The function `char *_strpbrk(char *s, char *accept)` searches a string for any of a set of bytes.
* The `_strpbrk()` function locates the first occurrence in the string s of any of the bytes in the string `accept`
* Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found
### 5. strstr
* The function `char *_strstr(char *haystack, char *needle)` locates a substring.
* The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes `(\0)` are not compared
* Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.
### 6. Chess is mental torture
* The function `void print_chessboard(char (*a)[8])` prints the chessboard.
### 7. The line of life is a ragged diagonal between duty and desire
* The function `void print_diagsums(int *a, int size)` prints the sum of the two diagonals of a square matrix of integers.
### 8. Double pointer, double fun
* The function `void set_string(char **s, char *to)` sets the value of a pointer to a char.
### 9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure
* The file `101-crackme_password` contains the password for the crackme2 executable.
