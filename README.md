# Libft

## Overview

Libft is a project for Standard C library override functions that should be done from the ground up, and must behave the same as the originals.

## Prohibited Methods

- For
- Do... While
- Switch
- Case
- Goto
- Variable Length Array (VLA)

## LibC Functions

[] memset
[] bzero
[] memcpy
[] memccpy
[] memmove
[] memchr
[] memcmp
[x] strlen
[] strlcpy
[x] strlcat
[] strchr
[x] strrchr
[x] strncmp
[] atoi (str num -> integer)
[x] isalpha
	checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)).  In some locales, there may be additional

[x] isdigit
	checks for a digit (0 through 9)
[x] isalnum
[x] isascii
	checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
[x] isprint
	checks for any printable character including space.
[x] toupper
[] tolower
[] calloc (with malloc)
[] strdup (with malloc)
