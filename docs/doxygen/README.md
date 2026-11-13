# Module 4: Doxygen – Code Documentation

## 1. Introduction

Doxygen is a documentation generation tool used
to produce technical documentation from specially
formatted comments in source code.

It is commonly used in C and C++ projects.

## 2. Objectives

- Understand automated code documentation.
- Use Doxygen comments in C++ source files.
- Understand commonly used documentation tags.
- Generate HTML documentation.

## 3. Important Doxygen Tags

| Tag | Purpose |
|---|---|
| @file | Describes a source file |
| @brief | Provides a short description |
| @param | Describes a function parameter |
| @return | Describes the return value |
| @throws | Documents an exception |

## 4. Practical Implementation

The file `math_ops.h` contains four mathematical
functions: addition, subtraction, multiplication,
and division.

Each function includes structured Doxygen comments.

## 5. Generating Documentation

Run:

`doxygen Doxyfile`

Doxygen generates HTML documentation in the
`html` directory and LaTeX documentation in
the `latex` directory.

Open `html/index.html` in a web browser.

## 6. Conclusion

Doxygen simplifies software documentation by
converting structured source-code comments into
readable documentation. It improves code
maintainability and makes software projects easier
to understand.