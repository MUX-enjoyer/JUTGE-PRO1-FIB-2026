# Exchange rates

Write a program that, given the exchange rate from euros to dollars
(EUR-\>USD), and a list of values given in either euros or dollars,
prints the sum of such values both in euros and in dollars.

For example, if we are given 1 EUR = 1.093 USD and the list

    31 USD
    2.40 EUR
    27.25 USD
    50 USD

The sum of all such values in euros is $101.4393$, whereas the sum of
all such values in dollars is $110.8732$. Thus, the program must print
both values as result.

Your program can only include `iostream` and `string`, no other library
can be used. Your program must not store the input by any means and must
not define nor use functions or procedures other than those defined in
the `iostream` and `string` libraries. Failure to satisfy these
requirements will invalidate (final score = 0) your program.

**Exam score:** 2.5 **Automatic part:** 50%

## Input

The input starts with a strictly positive real number, that represents
how much dollars costs one euro. After that, several lines follow, each
one with a strictly positive real number $x$ followed by either `EUR` or
`USD`, representing that $x$ must be interpreted as a value in euros or
dollars, respectively.

## Output

The output has the sum of the money represented by the given $x$'s
printed twice, once in euros and once in dollars, separated by a blank
space. Print both values with 4 digits after the decimal point. Use the
following instructions at the beginning of your program to fix such
precision:

      cout.setf(ios::fixed);
      cout.precision(4);

## Problem information

Author: PRO1

Generation: 2026-01-25T15:27:11.129Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
