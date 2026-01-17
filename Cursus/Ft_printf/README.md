*This project has been created as part
of the 42 curriculum by angcasad*

# 📝 ft_printf
## 📖 Description
The **ft_printf** project consists of recreating the well‑known C standard library function `printf`.  
Its purpose is to deepen your understanding of variadic functions, formatted output, and low‑level data manipulation.  

---

## ⚙️ Instructions

### **Compilation**

✨ To compile the library:

```bash
make
```
This will generate the static library: **libftprintf.a**

🧼 Cleaning object files:
```bash
make clean
```
🗑️ Removing all generated files:
```bash
make fclean
```
♻️ Recompiling everything:
```bash
make re
```
---

### **Usage**

Include the header in your C file:
```c
#include "ft_printf.h"
```
Compile your program with the library:
```bash
gcc main.c libftprintf.a
```
Use `ft_printf` just like the standard `printf`.

---
## 📌 Supported Format Specifiers

| Specifier | Description |
|----------|-------------|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` / `%i` | Prints a signed integer |
| `%u` | Prints an unsigned integer |
| `%x` | Prints a number in lowercase hexadecimal |
| `%X` | Prints a number in uppercase hexadecimal |
| `%%` | Prints a literal percent sign |

---
## 🧠 Algorithm & Data Structure Choices

### **1. Variadic Arguments Handling**

The implementation uses:

- `va_list`
- `va_start`
- `va_arg`
- `va_end`

These allow retrieving an unknown number of arguments passed to the function, replicating the internal mechanism of the real `printf`.

## 🧠 Algorithm & Data Structure Choices

### 1. How ft_printf handles different arguments

The function uses the tools provided by `stdarg.h` to read an unknown number of arguments.

Variadic functions:
- `va_list`
- `va_start`
- `va_arg`
- `va_end`

This is the same mechanism the real `printf` uses.  
In simple terms: it allows the function to “pick up” each argument one by one, no matter how many were passed.

### 2. How each format is processed

When ft_printf finds a `%` in the string, it checks which format comes after it (like `d`, `s`, `x`, etc.).  
Depending on the format, it sends the value to a specific function that knows how to print that type.

This structure was chosen because:

- It keeps the code organized.
- Each type (char, string, number, hex…) has its own function.
- It makes the project easier to read and maintain.

### 3. How numbers are converted

To print numbers (decimal or hexadecimal), the function uses simple division and modulo operations to extract digits.  
This avoids using `malloc` or creating temporary strings.  
Everything is printed directly using `write()`.

### 4. Why no dynamic memory is used

The project requires avoiding unnecessary memory allocation, so the implementation prints everything directly.  
This makes the function:

- Safer (no memory leaks)
- Simpler
- Closer to how the real `printf` behaves internally

## 📚 Resources

### Documentation & References
- C Standard Library documentation (printf)
- Variadic functions: `stdarg.h`
- Basic number-to-string conversion concepts
- 42 ft_printf subject PDF
- Peer to peer

### 🌱🦾 AI Usage Disclosure
Artificial Intelligence tools were used only for:
- Organizing and improving the README structure  
- Making explanations clearer and easier to understand  
- Translate and rewriting some sentences for better readability 

