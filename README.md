![rangers](https://i.postimg.cc/8PJsgn2J/rangers.png)

<div align="center">
  
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Windows](https://svgshare.com/i/ZhY.svg)](https://svgshare.com/i/ZhY.svg)
[![Ask Me Anything !](https://img.shields.io/badge/Ask%20me-anything-1abc9c.svg)](https://github.com/sysnojo)
[![GitHub commits](https://badgen.net/github/commits/Naereen/Strapdown.js)]()
[![GitHub followers](https://img.shields.io/github/followers/Naereen.svg?style=social&label=Follow&maxAge=2592000)](https://github.com/sysnojo?tab=followers)

</div>


## What is rangers++?

*rangers++* is a simple basic program made in C to show anyone the byte and range of
a data type.<br>This program is for an educational purposes, anyone can learn anytime!<br> It contains the following data types: <br><br>

- *Signed & unsigned char*
```c
// calling maximum/minimum of signed/unsigned char function
int MAX_MIN_SCHAR_UCHAR(int a_range, int b_range, int c_range); // parameter as colors

// for example:
MAX_MIN_SCHAR_UCHAR(10,11,12);
// a_range = 10 (bright green)
// b_range = 11 (bright cyan)
// c_range = 12 (bright red)

// the color function
int color_t(int range); // range from 1 - 25

/* Note: the minimum size of unsigned char starts from 0 (always positive) */
```

- *Signed & unsigned short*
```c
// calling maximum/minimum of signed/unsigned short function
MAX_MIN_SHRT_USHRT(...); // parameter as colors

/* Note: the minimum size of unsigned short starts from 0 (always positive) */
```

- *Signed & unsigned int*
```c
// calling maximum/minimum of signed/unsigned int function
MAX_MIN_INT_UINT(...); // parameter as colors

/* Note: the minimum size of unsigned int starts from 0 (always positive) */
```

- *Data type of float*
```c
// calling maximum/minimum of float function
MAX_MIN_FLT(...); // parameter as colors

```

- *Data type of double*
```c
// calling maximum/minimum of double function
MAX_MIN_DBL_LDBL(...); // parameter as colors 
```

- *Signed & unsigned long long int*
```c
// calling maximum/minimum of signed/unsigned long long int function
 MAX_MIN_LONG_LONG_ULONG(...); // parameter as colors
 
 // typedef's ...
 typedef long long int lli; // longlongint ...
 typedef unsigned long long int ulli; // is this even real? ...
```
<br>

## Terminal Preview

![termPrev](/preview-terminal.png)

## Resources

- [Byjus](https://byjus.com/gate/data-types-in-c/)
- [Geeks for geeks](https://www.geeksforgeeks.org/data-types-in-c/)
