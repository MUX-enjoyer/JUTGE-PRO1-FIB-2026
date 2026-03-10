# Vector V

Un **vector V** és un vector que està compost de dues parts:

$$v = x_1 ~ x_2 ~ x_3 ~ x_4 \dots x_n ~ y_1 ~ y_2~  y_3 \dots y_m$$

tals que $x_1 \dots x_n$ està ordenat de manera escrictament
**decreixent** i $y_1 \dots y_m$ està ordenat de manera escrictament
**creixent**. A més, $x_n > y_1$. Finalment tenim que $n,m > 0$. És a
dir, cap de totes dues parts és buida.

Cal implementar la **funció** `int picV(const vector<int>& v)` amb la
següent especificació:

`PRE:` $v$ és un vector V i $\mid \! v \! \mid \geq 3$.

`POST:` La posició en què es troba $y_1$ a $v$.

## Observació

**IMPORTANT:** Només cal que envieu la funció que us demanem i les
accions i funcions que vosaltres mateixos definiu. Mantingueu, però, les
definicions de tipus i els `#include`s.

## Entrada

Un nombre indeterminat de vectors V amb el següent format: un enter que
n'indica la mida, i després el vector V. Tot vector V té una mida més
gran o igual a 3.

## Sortida

La posició dins del vector en què es troba $y_1$.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T13:13:42.068Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
