# Màxim comú divisor recursiu

Feu una funció recursiva que calculi el màxim comú divisor de dos
naturals \@a@ i \@b@ utilitzant la versió *ràpida* de l'algorisme
d'Euclides.

## Interfície

+-------:+:-------------------------------------+
| C++    | ``` c++                              |
|        | int mcd(int a, int b);               |
|        | ```                                  |
+--------+--------------------------------------+
| C      | ``` c                                |
|        | int mcd(int a, int b);               |
|        | ```                                  |
+--------+--------------------------------------+
| Java   | ``` java                             |
|        | public static int mcd(int a, int b); |
|        | ```                                  |
+--------+--------------------------------------+
| Python | ``` python                           |
|        | mcd(a, b)  # returns int             |
|        | ```                                  |
+--------+--------------------------------------+
|        | ``` python                           |
|        | mcd(a: int, b: int) -> int           |
|        | ```                                  |
+--------+--------------------------------------+

## Precondició

Ni \@a@ ni \@b@ són negatius, i almenys un és estrictament més gran que
zero.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T11:09:08.205Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
