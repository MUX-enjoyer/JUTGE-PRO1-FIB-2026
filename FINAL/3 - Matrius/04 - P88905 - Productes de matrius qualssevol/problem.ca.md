# Productes de matrius qualssevol

Feu una funció que, donades dues matrius \@a@ i \@b@, calculi el seu
producte.

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

\@a@ és una matriu $p\times q$ i \@b@ és una matriu $q\times r$, amb
$p,q,r\ge1$.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T12:17:25.347Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
