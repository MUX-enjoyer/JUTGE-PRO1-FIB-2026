# Robots (2)

Aquesta és una variació de
l'exercici [**problem://problemsjutge.org:problems/p1/roura/robots-1.pbm**](https://jutge.org/problems/problem://problems\@jutge.org:problems/p1/roura/robots-1.pbm).
Feu un programa per simular els moviments d'un robot que es troba en un
món rectangular amb $n$ files i $m$ columnes. El robot rep una seqüència
d'ordres de cap a on s'ha de moure, ja sigui a la dreta, esquerra, amunt
o avall. Cal acabar la simulació si alguna instrucció és errònia, si el
robot surt fora del món o si el robot passa per una posició per la qual
ja havia passat.

## Entrada

La primera línia conté dos naturals estrictament positius $n$ i $m$. La
segona línia conté la fila inicial (entre 1 i $n$) i la columna inicial
(entre 1 i $m$). A continuació vénen diverses ordres, una per línia.
Cada ordre és una paraula no buida formada només per lletres minúscules.

## Sortida

Cal escriure les posicions per on passa el robot, començant amb la
inicial. Si el robot surt fora del món, o si passa per una posició per
la qual ja havia passat, o si alguna ordre no és "`dreta`",
"`esquerra`", "`amunt`", o "`avall`", cal escriure "`fora de limits`",
"`posicio repetida`" o bé "`ordre incorrecta`" i aturar la simulació.

## Informació del problema

Autoria: Salvador Roura

Generació: 2026-01-25T10:10:39.663Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
