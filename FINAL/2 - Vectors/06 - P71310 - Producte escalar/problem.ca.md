# Producte escalar

El producte escalar de dos vectors $u=(u_0,\dots,u_{n-1})$ i
$v=(v_0,\dots,v_{n-1})$ és $\sum_{i=0}^{n-1} u_i v_i$.

Feu una funció que retorni el producte escalar de \@u@ i \@v@.

## Interfície

+-------:+:---------------------------------------------------------------------------+
| C++    | ``` c++                                                                    |
|        | double producte_escalar(const vector<double>& u, const vector<double>& v); |
|        | ```                                                                        |
+--------+----------------------------------------------------------------------------+
| C      | ``` c                                                                      |
|        | double producte_escalar(int n, double u[n], double v[n]);                  |
|        | ```                                                                        |
+--------+----------------------------------------------------------------------------+
| Java   | ``` java                                                                   |
|        | public static double producteEscalar(double[] u, double[] v);              |
|        | ```                                                                        |
+--------+----------------------------------------------------------------------------+
| Python | ``` python                                                                 |
|        | producte_escalar(u, v)  # returns float                                    |
|        | ```                                                                        |
+--------+----------------------------------------------------------------------------+
| MyPy   | ``` python                                                                 |
|        | producte_escalar(u: list[float], v: list[float]) -> float                  |
|        | ```                                                                        |
+--------+----------------------------------------------------------------------------+

## Precondició

Els vectors \@u@ i \@v@ tenen la mateixa mida.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T11:38:22.456Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
