<br />
<div align="center">
<h3 align="center">ft_printf</h3>
  <p align="center">
    42 Cursus Circle 1 Subject
    <br />
    <a href="https://cdn.intra.42.fr/pdf/pdf/102774/en.subject.pdf"><strong>Subject Docs »</strong></a>
    <br />
  </p>
</div>

<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#summary">Summary</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#about-the-project">About the Project</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
  </ol>
</details>


## Summary
The goal of this project is pretty straightforward. 
You will recode printf().
You will mainly learn about using a variable number of arguments. How cool is that?

<p align="right">(<a href="#readme-top">back to top</a>)</p>



### Built With
* [![C][C-shield]][C-url]

<p align="right">(<a href="#readme-top">back to top</a>)</p>


## About The Project

You have to recode the printf() function from libc.

The prototype of ft_printf() is:
```
  int ft_printf(const char *, ...);
```

Here are the requirements:

• Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.

Using the libtool command is forbidden.

• Your libftprintf.a has to be created at the root of your repository

You have to implement the following conversions:

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign

### Prerequisites

* C99+

### Installation

1. compile file
   ```sh
   make all
   ```
2. if you want to clean up
    ```sh
    make fclean
    ```

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[C-shield]: https://img.shields.io/badge/C-35495E?style=for-the-badge&logo=c&logoColor=White
[C-url]: https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2731.pdf