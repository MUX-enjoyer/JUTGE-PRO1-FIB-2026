# Ordena un Vector R

Un **vector R** és un vector que està compost de dues parts:

$$v = x_1 ~ x_2 ~ x_3 ~ x_4 \dots x_n ~ y_1 ~ y_2~  y_3 \dots y_m$$

tals que la part $x_1 \dots x_n$ i la part $y_1 \dots y_m$ estan
ordenades de manera estrictament creixent però $y_m < x_1$. A més tenim
que $n,m > 0$. És a dir, cap de totes dues parts és buida.

Cal implementar la **funció** `void ordena(vector<int>& v, int pos)` amb
la següent especificació:

`PRE:` $v$ és un vector R tal que $\mid \! v \! \mid \geq 3$, i $pos$ és
la posició en què es troba $y_1$ a $v$.

`POST:` El vector $v$ està ordenat.

## Observació

Només cal que envieu la funció que us demanem i les accions i funcions
que vosaltres mateixos definiu. La resta no es tindrà en compte.

No es pot fer servir l'operació `sort` de la biblioteca `stl`.

Pista: saber la posició en què es troba $y_1$ us pot ajudar a ordenar el
vector en temps lineal.

Per altra banda, si feu servir un vector auxiliar per a fer l'ordenació
tindreu una penalització de $-5$ a la correció manual encara que tingueu
un semàfor verd.

## Entrada

Un nombre indeterminat de vectors R amb el següent format: un enter que
n'indica la mida, després el vector R i finalment la posició on es troba
$y_1$. Tot vector R té una mida més gran o igual a 3.

## Sortida

El vector $v$ ordenat.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T12:49:55.758Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
