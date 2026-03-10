# El joc de la vida (1)

El matemàtic anglès John Conway es va inventar l'any 1970 el joc
següent: Imagineu una matriu amb $n$ files i $m$ columnes. Es consideren
posicions veïnes a una posició les (vuit, com a molt) posicions
adjacents, ja sigui horitzontalment, verticalment o bé en diagonal. En
cada instant, cada posició està buida o conté una bactèria. Les regles
són:

- Una posició buida en un instant $t$ contindrà una bactèria en
  l'instant $t + 1$ si i només si en l'instant $t$ tenia exactament tres
  bactèries veïnes.

- Una posició ocupada en un instant $t$ contindrà una bactèria en
  l'instant $t + 1$ si i només si en l'instant $t$ tenia dos o tres
  bactèries veïnes.

Feu un programa que, per a cada matriu donada, escrigui la matriu a
l'instant de temps posterior.

## Entrada

L'entrada consisteix en diversos casos. Cada cas comença amb $n$ i $m$,
ambdós estrictament positius, seguits de $n$ línies, cadascuna amb $m$
caràcters: '`B`' si la posició té una bactèria, i '`.`' si la posició és
buida. Un cas especial amb $n = m = 0$ marca el final de l'entrada.

## Sortida

Per a cada cas, escriviu la matriu corresponent a l'instant següent
usant el mateix format de l'entrada (excepte $n$ i $m$, que no
s'escriuen). Separeu les matrius amb una línia buida.

## Informació del problema

Autoria: Salvador Roura

Generació: 2026-01-25T10:28:02.611Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
