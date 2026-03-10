# Productes de matrius quadrades

Feu una funció que, donades dues matrius quadrades \@a@ i \@b@, calculi
el seu producte.

## Interfície

+-----:+:-------------------------------------------------------+
| C++  | ``` c++                                                |
|      | typedef vector< vector<int> > Matriu;                  |
|      |     Matriu producte(const Matriu& a, const Matriu& b); |
|      | ```                                                    |
+------+--------------------------------------------------------+
| MyPy | ``` python                                             |
|      | Matriu: TypeAlias = list[list[int]]                    |
|      |     def producte(a: Matriu, b: Matriu) -> Matriu       |
|      | ```                                                    |
+------+--------------------------------------------------------+

## Precondició

\@a@ i \@b@ són matrius quadrades $n\times n$ amb $n \ge 0$.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T10:33:39.768Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
