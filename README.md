*This project has been created as part of the 42 curriculum by trmorand.*
# ft_printf

## Description
ft_printf is the second project of the 42 Common Core.

The goal is to recode the C standard `printf()` function as a static library (`libftprintf.a`). The function handles a variable number of arguments and supports the following
conversions: `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X` and `%`.

The entire project is written in C and follows the 42 norm.

## ft_printf conversions.
| Conversions| Description |
|:---|:---|
| `%c`| Prints a single character.|
| `%s` |Prints a string (as defined by the common C convention). |
| `%p` |The `void *` pointer argument has to be printed in hexadecimal format. |
| `%d` |Prints a decimal (base 10) number. |
| `%i` |Prints an integer in base 10. |
| `%u` |Prints an unsigned decimal (base 10) number. |
| `%x` |Prints a number in hexadecimal (base 16) lowercase format. |
| `%X` |Prints a number in hexadecimal (base 16) uppercase format. |
| `%%` |Prints a percent sign. |

## Function
| Function | Description |
|:---|:---|
| `ft_printf` | Main function. Reads the format string, prints normal characters as they are, calls the matching function for each conversion, and returns the total number of characters written. |
| `ft_putchar` | Writes one character and returns 1. Used for `%c`, `%%` and plain characters. |
| `ft_putstr` | Writes a string and returns its length. Prints `(null)` if the pointer is `NULL`. Used for `%s`. |
| `ft_putnbr` | Writes a signed decimal number, with its `-` sign if negative, and returns the number of characters written. Used for `%d` and `%i`. |
| `ft_putnbr_unsigned` | Same as above for an `unsigned int`, without sign. Used for `%u`. |
| `ft_putnbr_hexa` | Writes a number in base 16, using the lowercase or uppercase digit table it receives, and returns the number of digits written. Used for `%x`, `%X` and `%p`. |
| `ft_pmemory` | Writes a pointer as `0x` followed by its address in hexadecimal, or `(nil)` if it is `NULL`. Used for `%p`. |

## Algorithm and data structures
`ft_printf` reads the format string one character at a time. A normal
character is written as it is. A `%` means a conversion: a dispatcher
function looks at the next character and calls the matching function, then
the index skips that letter.

The arguments are read with `va_list` and `va_arg`. The `va_list` is passed
by pointer, so each `va_arg` moves to the next argument.

Each printing function returns the number of characters it wrote, and
`ft_printf` adds these values up to build its return value.

Numbers are printed recursively: `n / base` gives the digits on the left,
`n % base` gives the last one. This writes the digits in the right order
without a buffer or allocation. For base 16, a string table
(`"0123456789abcdef"` or `"0123456789ABCDEF"`) turns a digit into a
character, so one function handles `%x` and `%X`.

`%p` uses an `unsigned long`, because a pointer is 8 bytes on a 64-bit
machine. `NULL` prints `(null)` for `%s` and `(nil)` for `%p`, like the
original `printf`.

No data structure is needed: the only data are the `va_list`, the counter
and the digit tables, so nothing is allocated.

## Instructions
```ssh
make        # Build libftprintf.a.
```

```ssh
make re     # remove and rebuild libftprintf.a
```

```ssh
make clean  # remove object files.
```

```ssh
make fclean # remove object files and libftprintf.a
```

## Resources
- `man 3 printf` Pages for the original function.
- [printf_tester](https://github.com/nda-cunh/printf_tester/), a tester for the project created by [nda-cunh](https://github.com/nda-cunh)

### Use of AI
I used an `AI assistant (Claude)` during this project, for these tasks :
- understanding how to convert a number to hexadecimal.
- proofreading and correcting this README.

I wrote the conversion functions myself.
