# Sumes de matrius quadrades

Feu una funció que, donades dues matrius quadrades \@a@ i \@b@, calculi
la seva suma.

## Interfície

+-------:+:----------------------------------------------------------------+
| C++    | ``` c++                                                         |
|        | typedef vector< vector<int> > Matriu;                           |
|        | ```                                                             |
+--------+-----------------------------------------------------------------+
|        | ``` c++                                                         |
|        | Matriu suma(const Matriu& a, const Matriu& b);                  |
|        | ```                                                             |
+--------+-----------------------------------------------------------------+
| Java   | ``` java                                                        |
|        | public static int[][] suma(int[][] a, int[][] b);               |
|        | ```                                                             |
+--------+-----------------------------------------------------------------+
| Python | ``` python                                                      |
|        | suma(a, b)  # returns list                                      |
|        | ```                                                             |
+--------+-----------------------------------------------------------------+
| MyPy   | ``` python                                                      |
|        | suma(a: list[list[int]], b: list[list[int]]) -> list[list[int]] |
|        | ```                                                             |
+--------+-----------------------------------------------------------------+

## Precondició

\@a@ i \@b@ són matrius quadrades $n\times n$ amb $n \ge 0$.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T10:28:59.375Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
