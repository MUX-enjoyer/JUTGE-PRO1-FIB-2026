# Fusió de taules

Feu una funció que fusioni els vectors ordenats \@v1@ i \@v2@ i en
retorni el resultat, sense eliminar els elements repetits. Per exemple,
el resultat de fusionar una taula amb 2, 3 i 5 amb una taula amb 3, 5, 5
i 7 és una taula amb 2, 3, 3, 5, 5, 5 i 7.

## Interfície

+-------:+:--------------------------------------------------------------------------+
| C++    | ``` c++                                                                   |
|        | vector<double> fusio(const vector<double>& v1, const vector<double>& v2); |
|        | ```                                                                       |
+--------+---------------------------------------------------------------------------+
| Java   | ``` java                                                                  |
|        | public static double[] fusio(double[] v1, double[] v2);                   |
|        | ```                                                                       |
+--------+---------------------------------------------------------------------------+
| Python | ``` python                                                                |
|        | fusio(v1, v2)  # returns list                                             |
|        | ```                                                                       |
+--------+---------------------------------------------------------------------------+
| MyPy   | ``` python                                                                |
|        | fusio(v1: list[float], v2: list[float]) -> list[float]                    |
|        | ```                                                                       |
+--------+---------------------------------------------------------------------------+

## Precondició

\@v1@ i \@v2@ estan ordenats de petit a gran.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Informació del problema

Autoria: Salvador Roura

Generació: 2026-01-25T11:33:33.801Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
