*This project has been created as part
of the 42 curriculum by angcasad*

# 📚 Libft

## 📖 Description
This project is about creating a custom library of functions to better understand C programming and memory management.


## 🛠️ Installation
Compile the project with:

```bash
make
```
This will generate the library file `libft.a` and the objects files.


## ⚡ Usage
Include the library in your C programs:
```c
#include "libft.h"

int main()
{
    ft_putstr("Hello 42!\n");
    return 0;
}
```


## 📂 Functions

### 🔠 Character and Type Functions

| Function | Description |
|----------|-------------|
| `ft_isalpha.c` | Checks if a character is a letter (A-Z, a-z). |
| `ft_isdigit.c` | Checks if a character is a digit (0-9). |
| `ft_isalnum.c` | Checks if a character is alphanumeric (letter or number). |
| `ft_isascii.c` | Checks if a character is ASCII (0-127). |
| `ft_isprint.c` | Checks if a character is printable. |
| `ft_toupper.c` | Converts a lowercase letter to uppercase. |
| `ft_tolower.c` | Converts an uppercase letter to lowercase. |

### 📜 String Functions

| Function | Description |
|----------|-------------|
| `ft_strlen.c` | Returns the length of a string. |
| `ft_strchr.c` | Finds the first occurrence of a character in a string. |
| `ft_strrchr.c` | Finds the last occurrence of a character in a string. |
| `ft_strncmp.c` | Compares two strings up to n characters. |
| `ft_strlcpy.c` | Copies a string into a buffer of limited size. |
| `ft_strlcat.c` | Concatenates strings with size limitation. |
| `ft_strnstr.c` | Locates a substring within a string up to n characters. |
| `ft_strdup.c` | Duplicates a string. |
| `ft_substr.c` | Extracts a substring from a string. |
| `ft_strjoin.c` | Joins two strings into a new one. |
| `ft_strtrim.c` | Trims characters from the start and end of a string. |
| `ft_split.c` | Splits a string into an array of strings based on a delimiter. |
| `ft_itoa.c` | Converts an integer to a string. |
| `ft_strmapi.c` | Applies a function to each character of a string and returns a new string. |
| `ft_striteri.c` | Applies a function to each character of a string **modifying the original**. |

### 💾 Memory Functions

| Function | Description |
|----------|-------------|
| `ft_memset.c` | Fills a memory block with a value. |
| `ft_bzero.c` | Fills a memory block with zeros. |
| `ft_memcpy.c` | Copies a memory block to another. |
| `ft_memmove.c` | Safely copies memory even if it overlaps. |
| `ft_memchr.c` | Searches for a byte in a memory block. |
| `ft_memcmp.c` | Compares two memory blocks. |
| `ft_calloc.c` | Allocates memory initialized to zero. |

### 📤 Output Functions

| Function | Description |
|----------|-------------|
| `ft_putchar_fd.c` | Writes a character to a file descriptor. |
| `ft_putstr_fd.c` | Writes a string to a file descriptor. |
| `ft_putendl_fd.c` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd.c` | Writes a number to a file descriptor. |

### 💱 Conversion Functions

| Function | Description |
|----------|-------------|
| `ft_atoi.c` | Converts a string to an integer. |

### 🔗 Linked List Functions

| Function | Description |
|----------|-------------|
| `ft_lstnew.c` | Creates a new node. |
| `ft_lstlast.c` | Returns the last node of the list. |
| `ft_lstsize.c` | Returns the number of nodes in the list. |
| `ft_lstadd_front.c` | Adds a node at the beginning of the list. |
| `ft_lstadd_back.c` | Adds a node at the end of the list. |
| `ft_lstdelone.c` | Deletes a specific node. |
| `ft_lstclear.c` | Deletes all nodes in the list. |
| `ft_lstiter.c` | Applies a function to each node in the list. |
| `ft_lstmap.c` | Creates a new list by applying a function to each node. |


## ⚙️ Makefile Overview

This project includes a Makefile to **compile and manage the libft library** efficiently. Here’s a visual breakdown:

### 📝 Variables
- `NAME` → The name of the final library: `libft.a`.  
- `CC` → Compiler used: `cc`.  
- `CFLAGS` → Compiler flags:  
  - `-Wall` → Enable all warnings.  
  - `-Wextra` → Enable extra warnings.  
  - `-Werror` → Treat warnings as errors.  
- `RM` → Command to remove files: `rm -f`.  
- `AR` → Command to create or update the archive: `ar rcs`.

### 💾 Source & Object Files
- `SRC` → Main source files (string, memory, character, conversion, and output functions).  
- `OBJ` → Object files from `SRC` (`.c → .o`).

### 🏷️ Makefile Targets
| Target | Description |
|--------|-------------|
| `all` | Compiles the library from main source files and creates `libft.a`. |
| `$(NAME)` | Archives object files into `libft.a` using `ar rcs`. |
| `clean` | Removes all object files (`.o`). |
| `fclean` | Runs `clean` and also removes `libft.a`. |
| `re` | Rebuilds everything: runs `fclean` and then `all`. |

### ⚠️ Special Notes
- `.PHONY: all clean fclean re` → Declares targets as **phony**, meaning they are not real files and always execute when called.  
- Only modified `.c` files are recompiled when running `make`, ensuring **efficient compilation**.

## 🧻 Resources

Here are some useful resources and references for this project:

- [42 Network Curriculum](https://www.42.fr/en/campus/42-network/) → Official 42 curriculum and project guidelines.  
- [Gitbook42](https://42-cursus.gitbook.io/guide) → Complete documentation for Makefiles and other functions.  
- [Peer 2 peer](<clusters of 42>) → Information for standard C functions.  
- [Tutorial Markdown Guide](https://tutorialmarkdown.com/guia) → Learn how to write and format Markdown.  
- [42 Libft Project PDF](https://cdn.intra.42.fr/pdf/pdf/42cursus/en.subject.pdf) → Official subject file for the Libft project.  



