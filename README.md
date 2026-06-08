*This project has been created as part of the 42 curriculum by yvasques*

---

# 42_Libft 

A custom static library written in C, containing recreated standard libc functions, additional utility tools, and fully integrated singly linked list data structures.

---

## Description

The **Libft** project serves as the foundation for the 42 Common Core curriculum. The primary goal is to master low-level C programming, memory allocation, and pointer manipulation by recreating essential functions from the standard C library (`libc`), alongside creating new custom string and data manipulation utilities. 

Instead of relying on pre-existing standard functions, this project requires building an independent toolbox from scratch. The final code compiles into a static library (`libft.a`) that is thoroughly checked against the **42 Norminette** coding standards for optimization and memory efficiency.

---

## Detailed Library Description

The library unifies all three mandatory parts of the updated curriculum into a single system, containing 43 functions in total:

### Part 1 — Libc Functions
Recreation of standard functions from the `libc` library to understand memory layout and data types.
* `ft_isalpha` | `ft_isdigit` | `ft_isalnum` | `ft_isascii` | `ft_isprint` — Character classification and verification tests.
* `ft_toupper` | `ft_tolower` — Character case conversion rules.
* `ft_strlen` — Measures exact string length.
* `ft_strchr` | `ft_strrchr` — Scans characters inside strings from left or right.
* `ft_strncmp` — Compares two strings up to a specified character limit.
* `ft_strnstr` — Locates a specific substring inside a larger string.
* `ft_strlcpy` | `ft_strlcat` — Size-bounded, secure string copying and concatenation.
* `ft_atoi` — Converts a string representing a number into a formal integer.
* `ft_memset` | `ft_bzero` | `ft_memcpy` | `ft_memmove` — Memory block byte-manipulations.
* `ft_memchr` | `ft_memcmp` — Scanning and comparing raw memory buffers.
* `ft_calloc` | `ft_strdup` — Heap-allocated memory generation and string duplication.

### Part 2 — Additional Functions
Non-standard C utility functions critical for complex string formatting and file output handling.
* `ft_substr` — Safely clips a substring from a string.
* `ft_strjoin` — Merges two separate strings into a newly allocated string.
* `ft_strtrim` — Strips designated character sets from the edges of a string.
* `ft_split` — Tokens a string into a dynamic array of strings using a delimiter.
* `ft_itoa` — Turns numerical integer values into dynamic string characters.
* `ft_strmapi` | `ft_striteri` — Map/iterate operations applying custom logic to string indexes.
* `ft_putchar_fd` | `ft_putstr_fd` | `ft_putendl_fd` | `ft_putnbr_fd` — Direct output printing to dedicated File Descriptors.

### Part 3 — Linked List Functions
A fully integrated singly linked list system enabling dynamic collections of elements.
* `ft_lstnew` — Generates a standalone node in the Heap memory.
* `ft_lstadd_front` — Places a node right at the start/head of the list.
* `ft_lstsize` — Counts total nodes within the list scope.
* `ft_lstlast` — Safely catches the final node in a list structure.
* `ft_lstadd_back` — Appends a new element to the end of the list.
* `ft_lstdelone` — Deletes and frees a single node's data.
* `ft_lstclear` — Clears out a complete chain of list nodes safely.
* `ft_lstiter` — Iterates across a list sequence, applying a function to each node.
* `ft_lstmap` — Generates a completely new transformed list based on an existing one.

---

## Instructions

### Compilation

The project is governed by a strict `Makefile` designed to compile object modules without triggering code relinks.

| Command | Execution Action |
| :--- | :--- |
| `make` | Gathers all `.c` files from Parts 1, 2, and 3, compiling them into `libft.a`. |
| `make clean` | Safely removes all compiled object files (`.o`). |
| `make fclean` | Erases all object files (`.o`) and the compiled `libft.a` static archive. |
| `make re` | Performs a fresh rebuilt via `fclean` followed by `make`. |

### Execution and Project Integration

To implement this library in your own C applications, include the primary header file in your code and link the static file `.a` during compilation time:

1. Add the header call in your files:
#include "libft.h"

###	Resources

Classic References
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/) — Standard detailed documentation on the behavior of `libc` functions.
- [Man7.org Online Manual Pages](https://man7.org/linux/man-pages/) — Official Linux manual pages for every standard function reimplemented in this project.
- [C Standard Library Reference (cppreference.com)](https://en.cppreference.com/w/c) — Comprehensive reference for all standard C types, macros, and functions.