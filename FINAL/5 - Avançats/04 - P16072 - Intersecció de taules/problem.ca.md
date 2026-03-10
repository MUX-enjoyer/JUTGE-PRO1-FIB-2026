# Intersecció de taules

Feu una funció que retorni una taula ordenada amb la intersecció dels
vectors ordenats \@v1@ i \@v2@. El resultat ha de tenir els elements
comuns a \@v1@ i \@v2@, i sense repetits. Per exemple, el resultat de
fer la intersecció d'una taula amb 1, 2, 2, 5, 5 i 7 amb una taula amb
2, 3, 3 i 7 és una taula amb 2 i 7.

## Interfície

+-------:+:--------------------------------------------------------------------------------+
| C++    | ``` c++                                                                         |
|        | vector<double> interseccio(const vector<double>& v1, const vector<double>& v2); |
|        | ```                                                                             |
+--------+---------------------------------------------------------------------------------+
| Java   | ``` java                                                                        |
|        | public static double[] interseccio(double[] v1, double[] v2);                   |
|        | ```                                                                             |
+--------+---------------------------------------------------------------------------------+
| Python | ``` python                                                                      |
|        | interseccio(v1, v2)  # returns list                                             |
|        | ```                                                                             |
+--------+---------------------------------------------------------------------------------+
| MyPy   | ``` python                                                                      |
|        | interseccio(v1: list[float], v2: list[float]) -> list[float]                    |
|        | ```                                                                             |
+--------+---------------------------------------------------------------------------------+

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Informació del problema

Autoria: Salvador Roura

Generació: 2026-01-25T10:13:43.391Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
