# Diferència entre Nombres

La diferència entre dos nombres es defineix com la suma del valor de la
diferència (en valor absolut) dígit a dígit. Per exemple, la diferència
entre el 24 i el 2317 és 9:

    0024
    2317
    ----
    2313 = 2 + 3 + 1 + 3 = 9

Cal implementar la funció **recursiva** `int diferencia(int x, int y)`
amb la següent especificació:

`PRE: ` Dos enters $x \geq 0$ i $y \geq 0$.

`POST:` La diferència entre $x$ i $y$.

## Observació

Les funcions iteratives s'invalidaran. Només cal que envieu la funció en
un fitxer `.cc`. La resta no es tindrà en compte.

Es pot fer servir la funció `abs` afegint:

    #include <cmath>
    using namespace std;

## Entrada

Dos enters $x \geq 0$ i $y \geq 0$.

## Sortida

La diferència entre $x$ i $y$.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T13:00:23.165Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
