#include <stdio.h> // i/o ...
#include <limits.h> // min/max ...
#include <windows.h> // yes, for the colors ...
#include <float.h>

/*
                                                       
   _________ _____  ____ ____  __________     __    __ 
  / ___/ __ `/ __ \/ __ `/ _ \/ ___/ ___/  __/ /___/ /_
 / /  / /_/ / / / / /_/ /  __/ /  (__  )  /_  __/_  __/
/_/   \__,_/_/ /_/\__, /\___/_/  /____/    /_/   /_/   
                 /____/                                

     "EEEEEEEEEEEEEE, see those data type range"

[Info]
Author: ++onoj
Date: 9/13/2022 (dd/mm/yyyy)
Note: "Might put this on github.. idk"
*/

typedef long double ld; // longdouble ..
typedef unsigned int ui; // unint ..
typedef unsigned char uc; // unchar ..
typedef unsigned short us; // unshort ..
typedef unsigned long int uli; // unlongint ..
typedef long long int lli; // longlongint ...
typedef unsigned long long int ulli; // is this even real? ...

// stuff ..
void arrow();
int color_t(int range);

// things ...
int MAX_MIN_LONG_LONG_ULONG(int a_range, int b_range, int c_range); // ichi .
int MAX_MIN_SCHAR_UCHAR(int a_range, int b_range, int c_range); // ni ..
int MAX_MIN_SHRT_USHRT(int a_range, int b_range, int c_range); // san ...
int MAX_MIN_DBL_LDBL (int a_range, int b_range, int c_range); // shi ....
int MAX_MIN_INT_UINT(int a_range, int b_range, int c_range); // go .....
int MAX_MIN_FLT (int a_range, int b_range, int c_range); // roku ......



int main()
{
    // calling maximum/minimum of signed/unsigned char function
    MAX_MIN_SCHAR_UCHAR(13,14,12); puts("");
    // calling maximum/minimum of signed/unsigned short function
    MAX_MIN_SHRT_USHRT(8,11,9); puts("");
    // calling maximum/minimum of signed/unsigned int function
    MAX_MIN_INT_UINT(7,6,5); puts("");
    // calling maximum/minimum of float function
    MAX_MIN_FLT(14,12,13); puts("");
    // calling maximum/minimum of double function
    MAX_MIN_DBL_LDBL(3,4,12); puts("");
    // calling maximum/minimum of signed/unsigned long long int function
    MAX_MIN_LONG_LONG_ULONG(9,8,14); puts("");

    return 0;
}

int color_t(int range)
{
    for (int i = 0; i <= range; i++)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, range);
    }
    return range;
}

void arrow()
{
    printf(" -> ", color_t(15));
}

int MAX_MIN_SCHAR_UCHAR(int a_range, int b_range, int c_range)
{
    // range of signed char (char)
    printf("char", color_t(a_range)); arrow(); printf("%d bytes;", sizeof(char)); arrow();
    printf("min", color_t(b_range)); arrow(); printf("%d; ", SCHAR_MIN);
    printf("max", color_t(c_range)); arrow(); printf("%d;\n", SCHAR_MAX);

    // range of unsigned char (unsigned char)
    printf("unsigned char", color_t(a_range)); arrow(); printf("%d bytes;", sizeof(uc)); arrow();
    printf("min", color_t(b_range)); arrow(); printf("0; ");
    printf("max", color_t(c_range)); arrow(); printf("%d;\n", UCHAR_MAX);

    return a_range, b_range, c_range;
}

int MAX_MIN_SHRT_USHRT(int a_range, int b_range, int c_range)
{
    // range of signed short int
    printf("short", color_t(a_range)); arrow(); printf("%d bytes;", sizeof(short)); arrow();
    printf("min", color_t(b_range)); arrow(); printf("%d; ", SHRT_MIN);
    printf("max", color_t(c_range)); arrow(); printf("%d;\n", SHRT_MAX);

    // range of unsigned short int
    printf("unsigned short", color_t(a_range)); arrow(); printf("%d bytes;", sizeof(us)); arrow();
    printf("min", color_t(b_range)); arrow(); printf("0; ");
    printf("max", color_t(c_range)); arrow(); printf("%d;\n", USHRT_MAX);
   
    return a_range, b_range, c_range;
}

int MAX_MIN_INT_UINT(int a_range, int b_range, int c_range)
{
    // range of signed int
    printf("int", color_t(a_range)); arrow(); printf("%d bytes;", sizeof(int)); arrow();
    printf("min", color_t(b_range)); arrow(); printf("%d; ", INT_MIN);
    printf("max", color_t(c_range)); arrow(); printf("%d;\n", INT_MAX);

    // range of unsigned int
    printf("unsigned int", color_t(a_range)); arrow(); printf("%d bytes;", sizeof(ui)); arrow();
    printf("min", color_t(b_range)); arrow(); printf("0; ");
    printf("max", color_t(c_range)); arrow(); printf("%lu;\n", UINT_MAX);
   
    return a_range, b_range, c_range;
}

int MAX_MIN_LONG_LONG_ULONG(int a_range, int b_range, int c_range)
{
    /* In some compilers LLONG_MIN, LLONG_MAX */
    // range of signed long long int
    printf("long long int", color_t(a_range)); arrow(); printf("%d bytes;", sizeof(lli)); arrow();
    printf("min", color_t(b_range)); arrow(); printf("%lld; ", LLONG_MIN);
    printf("max", color_t(c_range)); arrow(); printf("%lld;\n", LLONG_MAX);

    /* In some compilers ULLONG_MAX */
    // range of unsigned long long int
    printf("unsigned long long int", color_t(a_range)); arrow(); printf("%d bytes;", sizeof(ulli)); arrow();
    printf("min", color_t(b_range)); arrow(); printf("0; ");
    printf("max", color_t(c_range)); arrow(); printf("%llu;\n", ULLONG_MAX);
   
    return a_range, b_range, c_range;
}

int MAX_MIN_FLT (int a_range, int b_range, int c_range)
{
    // range of float
    printf("float", color_t(a_range)); arrow(); printf("%d bytes;", sizeof(float)); arrow();
    printf("min", color_t(b_range)); arrow(); printf("%e; ", FLT_MIN);
    printf("max", color_t(c_range)); arrow(); printf("%e;\n", FLT_MAX);

    return a_range, b_range, c_range;
}

int MAX_MIN_DBL_LDBL (int a_range, int b_range, int c_range)
{
    // range of double
    printf("double", color_t(a_range)); arrow(); printf("%d bytes;", sizeof(double)); arrow();
    printf("min", color_t(b_range)); arrow(); printf("%e; ", DBL_MIN);
    printf("max", color_t(c_range)); arrow(); printf("%e;\n", DBL_MAX);

    // range of long double
    printf("long double", color_t(a_range)); arrow(); printf("%d bytes;", sizeof(ld)); arrow();
    printf("min", color_t(b_range)); arrow(); printf("%e; ", LDBL_MIN);
    printf("max", color_t(c_range)); arrow(); printf("%llu;\n", LDBL_MAX);

    return a_range, b_range, c_range;
}



