# Ordena un Vector V

Un **vector V** és un vector que està compost de dues parts:

$$v = x_1 ~ x_2 ~ x_3 ~ x_4 \dots x_n ~ y_1 ~ y_2~  y_3 \dots y_m$$

tals que $x_1 \dots x_n$ està ordenat de manera escrictament
**decreixent** i $y_1 \dots y_m$ està ordenat de manera escrictament
**creixent**. A més, $x_n > y_1$. Finalment tenim que $n,m > 0$. És a
dir, cap de totes dues parts és buida.

Cal implementar la **funció**

`void ordena(const vector<int>& v, int pos, vector<int>& r)`

amb la següent especificació:

`PRE:` $v$ és un vector V tal que $\mid \! v \! \mid \geq 3$, $pos$ és
la posició en què es troba $y_1$ a $v$ i
$\mid \! v \! \mid = \mid \! r \! \mid$.

`POST:` El vector $r$ conté tots els elements del vector $v$ i està
ordenat.

## Observació

Només cal que envieu la funció que us demanem i les accions i funcions
que vosaltres mateixos definiu. La resta no es tindrà en compte.

No es pot fer servir l'operació `sort` de la biblioteca `stl`.

Pista: saber la posició en què es troba $y_1$ us pot ajudar a ordenar el
vector en temps lineal.

**IMPORTANT:** Només cal que envieu la funció que us demanem i les
accions i funcions que vosaltres mateixos definiu. Mantingueu, però, les
definicions de tipus i els `#include`s.

## Entrada

Un nombre indeterminat de vectors V amb el següent format: un enter que
n'indica la mida, després el vector V, després la posició on es troba
$y_1$ a $v$ i finalment un vector $r$ de la mateixa mida que $v$. Tot
vector V té una mida més gran o igual a 3.

## Sortida

El vector $r$ està ordenat i conté tots els elements de $v$.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T23:07:30.570Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
