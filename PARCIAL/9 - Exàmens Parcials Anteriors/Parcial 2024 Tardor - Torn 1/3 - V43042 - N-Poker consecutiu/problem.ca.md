# N-Poker consecutiu

Tenim una seqüència de cartes de Poker, i volem saber si en algun punt
de la seqüència hi ha $N$ cartes consecutives iguals (un \"N-Poker
consecutiu\"). Fes un **programa** que llegeixi un enter positiu $N$, i
una seqüència de cartes, i determini si la seqüència té o no $N$ cartes
consecutives iguals.

## Entrada

L'entrada comença amb un enter positiu $N$. Després ve una seqüència de
caràcters que representen les cartes de la seqüència. Tal com en el
problema \"Mà de Poker\", els caràcters per a les cartes són `A`, `2`,
`3`, \..., `9`, `0`, `J`, `Q` i `K`. Es garanteix que la seqüència de
cartes té almenys una carta.

## Sortida

Escriu \"$N$-Poker de $x$!\" si la seqüència té $N$ cartes consecutives
de valor $x$ iguals. En cas contrari, escriu \"No hi ha N-Poker\". Per
exemple, si $N$ és 7, i trobem 7 repeticions de la carta K, la sortida
serà \"7-Poker de K!\", però si no hi ha cap carta repetida 7 vegades,
la sortida serà \"No hi ha 7-Poker\". La sortida identifica el primer
$N$-Poker consecutiu trobat, amb la $x$ corresponent, tot i que a la
seqüència hi podria haver subseqüents $N$-Pokers consecutius.

## Observació

En aquest problema cal tractar l'entrada caràcter a caràcter, si fas
servir `string`s o algun mètode per emmagatzemar les dades el problema
serà considerat invàlid. A més, tingues en compte que la seqüència prové
d'una font il·limitada de cartes, de manera que no es pot suposar cap
longitud màxima.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T13:09:23.797Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
