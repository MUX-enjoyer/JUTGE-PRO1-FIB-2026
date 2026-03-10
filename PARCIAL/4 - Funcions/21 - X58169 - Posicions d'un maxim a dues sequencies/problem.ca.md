# Posicions d'un màxim a dues seqüències

Donades dues seqüències $s_1$ i $s_2$ de naturals no negatius acabades
ambdues en $0$, feu un programa que calculi el màxim $m$ dels elements
de $s_1$ i indiqui la posició de la seva darrera aparició dins de $s_1$
i la seva primera aparició dins de $s_2$.

En el vostre programa, heu d'implementar i fer servir el següent
procediment:

> **void** infoSequencia(**int**& *max*, **int**& *lpos*);

que llegeix una seqüència acabada en 0 i calcula els paràmetres *max* i
*lpos*. En finalitzar l'execució del procediment, el paràmetre *max*
tindrà el valor més gran que apareix a la seqüència i el paràmetre
*lpos* ha d'indicar la última posició on apareix el valor màxim.

## Entrada

L'entrada consisteix en dues seqüències $s_1$ i $s_2$ de naturals
estrictament positius, ambdues acabades en $0$. La seqüència $s_1$ no és
buida (és a dir, té com a mínim un element diferent de la marca de
final), però la seqüència $s_2$ pot ser-ho.

## Sortida

La sortida està formada per tres informacions: L'element màxim de $s_1$,
la posició de la darrera aparició de $m$ dins de $s_1$, i la posició de
la primera aparició de $m$ dins de $s_2$. Si $m$ no apareix a $s_2$, o
bé $s_2$ és buida (i, per tant, $m$ tampoc hi apareix), s'ha d'indicar
convenientment.

 \
Seguiu el format especificat als exemples.

 \

## Informació del problema

Autoria: Maria J. Serna i Maria J. Blesa

Generació: 2026-01-25T21:50:39.466Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
