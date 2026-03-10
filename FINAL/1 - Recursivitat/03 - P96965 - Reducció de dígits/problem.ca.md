# Reducció de dígits

Feu una funció que, donat un natural \@x@, retorni la reducció dels seus
dígits.

## Interfície

+-------:+:-----------------------------------------+
| C++    | ``` c++                                  |
|        | int reduccio_digits(int x);              |
|        | ```                                      |
+--------+------------------------------------------+
| C      | ``` c                                    |
|        | int reduccio_digits(int x);              |
|        | ```                                      |
+--------+------------------------------------------+
| Java   | ``` java                                 |
|        | public static int reduccioDigits(int x); |
|        | ```                                      |
+--------+------------------------------------------+
| Python | ``` python                               |
|        | reduccio_digits(x)  # returns int        |
|        | ```                                      |
+--------+------------------------------------------+
|        | ``` python                               |
|        | reduccio_digits(x: int) -> int           |
|        | ```                                      |
+--------+------------------------------------------+

En aquest exercici, direm que reduir els dígits d'un nombre consisteix a
calcular la suma dels seus dígits. Si la suma és un dígit, aquest ja és
el resultat. Altrament, es torna a aplicar el mateix procés a la suma
obtinguda, fins a tenir un sol dígit.

Resoleu aquest problema utilitzant la funció recursiva que retorna la
suma dels dígits d'un natural \@x@.

## Interfície

+-------:+:-------------------------------------+
| C++    | ``` c++                              |
|        | int suma_digits(int x);              |
|        | ```                                  |
+--------+--------------------------------------+
| C      | ``` c                                |
|        | int suma_digits(int x);              |
|        | ```                                  |
+--------+--------------------------------------+
| Java   | ``` java                             |
|        | public static int sumaDigits(int x); |
|        | ```                                  |
+--------+--------------------------------------+
| Python | ``` python                           |
|        | suma_digits(x)  # returns int        |
|        | ```                                  |
+--------+--------------------------------------+
|        | ``` python                           |
|        | suma_digits(x: int) -> int           |
|        | ```                                  |
+--------+--------------------------------------+

## Precondició

\@x@ és un natural.

## Observació

Encara que hi ha un truc matemàtic per resoldre aquest problema més
ràpidament que sumant dígits, no el feu servir aquí.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T12:13:12.740Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
