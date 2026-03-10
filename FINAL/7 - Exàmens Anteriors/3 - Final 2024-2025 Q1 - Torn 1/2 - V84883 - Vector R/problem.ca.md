# Vector R

Un **vector R** és un vector que està compost de dues parts:

$$v = x_1 ~ x_2 ~ x_3 ~ x_4 \dots x_n ~ y_1 ~ y_2~  y_3 \dots y_m$$

tals que la part $x_1 \dots x_n$ i la part $y_1 \dots y_m$ estan
ordenades de manera estrictament creixent però $y_m < x_1$. A més tenim
que $n,m > 0$. És a dir, cap de totes dues parts és buida.

Cal implementar la **funció** `int vectorR(const vector<int>& v)` amb la
següent especificació:

`PRE:` $v$ és un vector R i $\mid \! v \! \mid \geq 3$.

`POST:` La posició en què es troba $y_1$ a $v$.

## Observació

Només cal que envieu la funció que us demanem i les accions i funcions
que vosaltres mateixos definiu. La resta no es tindrà en compte.

## Entrada

Un nombre indeterminat de vectors R amb el següent format: un enter que
n'indica la mida, i després el vector R. Tot vector R té una mida més
gran o igual a 3.

## Sortida

La posició dins del vector en què es troba $y_1$.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T13:13:17.719Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
