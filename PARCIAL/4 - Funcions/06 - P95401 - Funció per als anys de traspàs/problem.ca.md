# Funció per als anys de traspàs

Feu una funció que indiqui si l'any donat és de traspàs o no. Per
recordar les regles sobre els anys de traspàs, consulteu
l'exercici [**problem://problemsjutge.org:problems/p1/jpetit/traspas-elemental.pbm**](https://jutge.org/problems/problem://problems\@jutge.org:problems/p1/jpetit/traspas-elemental.pbm).

        bool es_any_de_traspas(int any);

## Interfície

+-------:+:-----------------------------------------------+
| C++    | ``` c++                                        |
|        | bool es_any_de_traspas(int any);               |
|        | ```                                            |
+--------+------------------------------------------------+
| C      | ``` c                                          |
|        | int es_any_de_traspas(int any);                |
|        | ```                                            |
+--------+------------------------------------------------+
| Java   | ``` java                                       |
|        | public static boolean esAnyDeTraspas(int any); |
|        | ```                                            |
+--------+------------------------------------------------+
| Python | ``` python                                     |
|        | es_any_de_traspas(any)  # returns bool         |
|        | ```                                            |
+--------+------------------------------------------------+
|        | ``` python                                     |
|        | es_any_de_traspas(any: int) -> bool            |
|        | ```                                            |
+--------+------------------------------------------------+

## Precondició

El paràmetre \@any@ està entre 1800 i 9999, ambdós inclosos.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T12:08:06.108Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
