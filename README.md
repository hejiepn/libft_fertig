# Libft (Custom C Standard Library)

## Overview

This project is a complete reimplementation of key functions from the standard C library, developed as part of the 42 curriculum.

The goal is to build a reliable, reusable **C utility library from scratch**, deepening understanding of memory management, string manipulation, and low-level system behavior.

---

## What This Project Is

Libft is a foundational systems programming project where standard C functions are recreated without using the original library implementations.

It serves as a reusable base library for future C projects.

---

## What I Implemented

This library includes custom implementations of:

### Character functions
- ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
- ft_toupper, ft_tolower

### String functions
- ft_strlen, ft_strlcpy, ft_strlcat
- ft_strchr, ft_strrchr, ft_strncmp
- ft_strnstr, ft_strdup

### Memory functions
- ft_memset, ft_bzero, ft_memcpy, ft_memmove
- ft_memchr, ft_memcmp, ft_calloc

### Utility functions
- ft_atoi, ft_itoa

### Advanced string utilities
- ft_substr, ft_strjoin, ft_strtrim
- ft_split, ft_strmapi, ft_striteri

### File descriptor output functions
- ft_putchar_fd, ft_putstr_fd
- ft_putendl_fd, ft_putnbr_fd

### Bonus: Linked list API
- ft_lstnew, ft_lstadd_front, ft_lstadd_back
- ft_lstsize, ft_lstlast
- ft_lstdelone, ft_lstclear
- ft_lstiter, ft_lstmap

---

## Key Concepts Practiced

- Manual memory allocation and management
- Pointer arithmetic and low-level data handling
- String parsing and manipulation without libc
- Linked list data structures
- Defensive programming and edge-case handling
- Modular C library design

---

## Build Instructions

```bash
make
