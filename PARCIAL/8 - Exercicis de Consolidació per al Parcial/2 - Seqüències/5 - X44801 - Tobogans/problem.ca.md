# Tobogans

Un *tobogan* és una seqüència d'enters de com a mínim tres elements tal
que la diferència $d$ entre cada dos elements consecutius és la mateixa
i és diferent de 0. El *pendent* del togoban és $d$, i la *longitud* del
tobogan és el número d'elements d'aquest. Els tobogans són *ascendents*
quan $d > 0$ i són *descendents* quan $d < 0$.

Per exemple, les següents seqüències són totes tobogans:

- 1 2 3, de pendent 1 i longitud 3;

- 5 10 15 20, de pendent 5 i longitud 4;

- -11 -22 -33 -44 -55, de pendent -11 i longitud 5.

L'objectiu de l'exercici és, donada una seqüència d'enters a l'entrada,
trobar la subseqüència consecutiva més llarga que és un tobogan
ascendent, i la subseqüència més llarga consecutiva que és un tobogan
descendent. Si hi hagués més d'un tobogan ascendent amb la mateixa
longitud màxima, ens quedarem amb el primer d'ells, i el mateix cal fer
per tobogans descendents. A més, ens interessa saber en quina posició
(quin element de la seqüència sencera de l'entrada) comença el tobogan,
comptant que la posició del primer element és 1.

## Entrada

Una seqüència d'enters sense sentinella. Es garanteix que la seqüència
té almenys dos elements.

## Sortida

La sortida ha de contenir una línia per a cada tipus de tobogan
(ascendent i descendent). Si no s'han trobat tobogans de qualsevol dels
dos tipus, no cal escriure la línia corresponent. La línia conté un
caràcter (\"`/`\" per a ascendents i \"`\`\" per a descendents), un
espai, i després 3 nombres separats per \"`:`\": la posició inicial del
tobogan més gran, el pendent, i la longitud.

## Informació del problema

Autoria: PRO1

Generació: 2026-02-23T17:08:20.862Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
