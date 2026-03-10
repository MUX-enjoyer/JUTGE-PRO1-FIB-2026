# Cerca dicotòmica

Feu una funció recursiva eficient que retorni la posició on es troba
\@x@ dins del subvector \@v@\[@esq@..@dre@\]. Si \@x@ no pertany a
\@v@\[@esq@..@dre@\] o si \@esq@ $>$ \@dre@, cal retornar -1.

## Precondició

El vector \@v@ està ordenat de forma estrictament creixent. A més, es té
$0 \le$ \@esq@ $\le$ mida de v i $-1 \le$ \@dre@ $<$ mida de v.

## Interfície

+-------:+:-------------------------------------------------------------------+
| C++    | ``` c++                                                            |
|        | int posicio(double x, const vector<double>& v, int esq, int dre);  |
|        | ```                                                                |
+--------+--------------------------------------------------------------------+
| C      | ``` c                                                              |
|        | int posicio(double x, double v[], int esq, int dre);               |
|        | ```                                                                |
+--------+--------------------------------------------------------------------+
| Java   | ``` java                                                           |
|        | public static int posicio(double x, double[] v, int esq, int dre); |
|        | ```                                                                |
+--------+--------------------------------------------------------------------+
| Python | ``` python                                                         |
|        | posicio(x, v, esq, dre)  # returns int                             |
|        | ```                                                                |
+--------+--------------------------------------------------------------------+
| MyPy   | ``` python                                                         |
|        | posicio(x: float, v: list[float], esq: int, dre: int) -> int       |
|        | ```                                                                |
+--------+--------------------------------------------------------------------+

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Informació del problema

Autoria: Salvador Roura

Generació: 2026-01-25T11:56:02.702Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
