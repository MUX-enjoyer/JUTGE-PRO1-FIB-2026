# Trucades a cada hora

Disposem d'un llistat *desordenat* de trucades a un conjunt limitat de
telèfons, i per a cada trucada tenim el número de telèfon i l'hora
d'inici de la trucada. El llistat té el format:

    3 
    666321000 934500000 979808080

    979808080 15:45
    666321000 19:01
    934500000 09:09
    979808080 14:22
    666321000 10:43
    ...

Al principi, se'ns dóna una seqüència amb el conjunt de telèfons
d'interès, ordenats pel seu valor numèric de menor a major. La seqüència
comença amb el número total de telèfons, que és sempre major que 0 (el
`3` de la primera línia), i després venen els números de telèfon, tots
de 9 xifres. A continuació, després d'una línia buida, ve una seqüència
sense sentinella de trucades. Cada trucada és una línia, i el número de
telèfon és al principi de la línia i després hi ha l'hora de la trucada
en format `HH:MM`, separada per un sol espai.

Fes un **programa** que llegeix aquestes dades i produeix a la sortida
la llista de telèfons que han rebut *almenys una trucada a cada hora del
rellotge*, és a dir, que tenen una o més trucades per a cada valor
diferent de les hores (de 0 a 23). Cal dissenyar el programa tenint en
compte que el llistat de trucades és, típicament, entre un i dos ordres
de magnitud més gran que el conjunt de telèfons.

## Observació

Aquest problema té com a centre d'interès l'*eficiència*. Feu servir els
millors algorismes i estructures de dades que pogueu i considereu que
rebreu dades d'entrada de grans dimensions.

En aquest problema, si feu servir vectors, és important donar-los la
dimensió des del principi per no haver de fer `push_back`, ja que això
pot afectar al temps d'execució.

## Entrada

L'entrada és el llistat explicat més amunt.

## Sortida

La sortida és un llistat de telèfons, un per línia, per *ordre numèric
creixent*. Si no hi ha cap telèfon que hagi rebut trucades a totes les
hores del dia, cal mostrar la frase \"Empty\" en una línia.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T12:46:54.082Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
