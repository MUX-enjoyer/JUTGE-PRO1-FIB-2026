# Seqüència de nombres diferents

Igual que en el problema \"Diferència entre Nombres\", la *diferència*
entre dos nombres es defineix com la suma dels valors absoluts de les
restes dígit a dígit.

Una sequencia és **creixent respecte a la diferència** entre adjacents
si per a cada 3 numeros adjacents de la sequencia:

$$\dots ~~ x_{i-1} ~~ x_i ~~ x_{i+1} ~~ \dots$$

es compleix que

$$d_i \leq d_{i+1}$$

on $d_i$ es la diferència entre $x_{i-1}$ i $x_i$, i $d_{i+1}$ es la
diferència entre $x_i$ i $x_{i+1}$.

Cal implementar un **programa** que digui si una seqüència és creixent
respecte a la diferència.

## Entrada

Una seqüència $S$ d'enters positius, sense sentinella.

## Sortida

El programa ha d'escriure \"`SI`\" pel canal d'entrada en cas que $S$
sigui creixent respecte a la diferència, i \"`NO`\" altrament.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T12:52:48.342Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
