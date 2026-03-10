# Inserció en taula ordenada

Feu un procediment que, suposant que totes les posicions de \@v@,
excepte potser la darrera, estan ordenades de petit a gran, deixi \@v@
totalment ordenat de petit a gran.

Per exemple, si \@v@ fos $\langle 2, 4, 7, 7, 8, 9, 5\rangle$, hauria de
quedar $\langle 2, 4, 5, 7, 7, 8, 9\rangle$.

## Interfície

+-------:+:-----------------------------------------+
| C++    | ``` c++                                  |
|        | void insereix(vector<double>& v);        |
|        | ```                                      |
+--------+------------------------------------------+
| C      | ``` c                                    |
|        | void insereix(int n, double v[n]);       |
|        | ```                                      |
+--------+------------------------------------------+
| Java   | ``` java                                 |
|        | public static void insereix(double[] v); |
|        | ```                                      |
+--------+------------------------------------------+
| Python | ``` python                               |
|        | insereix(v)  # returns None              |
|        | ```                                      |
+--------+------------------------------------------+
| MyPy   | ``` python                               |
|        | insereix(v: list[float]) -> None         |
|        | ```                                      |
+--------+------------------------------------------+

## Precondició

Es té $|v|\ge 1$. A més, les posicions 0 a $|v| - 2$ de \@v@ estan
ordenades de petit a gran.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T12:16:34.183Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
