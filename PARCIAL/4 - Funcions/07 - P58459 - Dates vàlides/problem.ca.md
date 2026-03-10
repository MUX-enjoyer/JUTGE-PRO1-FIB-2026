# Dates vàlides

Feu una funció que indiqui si la data definida amb un dia \@d@, mes \@m@
i any \@a@ és vàlida o no.

Per fer aquesta funció, us serà útil usar la funció dels anys de traspàs
de
l'exercici [**problem://problemsjutge.org:problems/p1/jpetit/traspas-funcio.pbm**](https://jutge.org/problems/problem://problems\@jutge.org:problems/p1/jpetit/traspas-funcio.pbm).

## Interfície

+-------:+:---------------------------------------------------------+
| C++    | ``` c++                                                  |
|        | bool es_data_valida(int d, int m, int a);                |
|        | ```                                                      |
+--------+----------------------------------------------------------+
| C      | ``` c                                                    |
|        | int es_data_valida(int d, int m, int a);                 |
|        | ```                                                      |
+--------+----------------------------------------------------------+
| Java   | ``` java                                                 |
|        | public static boolean esDataValida(int d, int m, int a); |
|        | ```                                                      |
+--------+----------------------------------------------------------+
| Python | ``` python                                               |
|        | es_data_valida(d, m, a)  # returns bool                  |
|        | ```                                                      |
+--------+----------------------------------------------------------+
|        | ``` python                                               |
|        | es_data_valida(d: int, m: int, a: int) -> bool           |
|        | ```                                                      |
+--------+----------------------------------------------------------+

## Precondició

El paràmetre \@a@ està entre 1800 i 9999, ambdós inclosos.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T11:30:44.480Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
