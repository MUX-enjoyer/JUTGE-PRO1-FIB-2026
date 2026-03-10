# Barquets (1)

El joc dels barquets es juga sobre un tauler de $10x10$, on les files es
numeren amb lletres (de l'*a* a la *j*), i les columnes es numeren amb
números de l'1 al 10.

 \
Cadascun dels dos jugadors que hi participen té un tauler. Sobre les
caselles del tauler cada jugador disposa un total de 10 vaixells, que
ocupen 2, 3, 4 o 5 caselles contigües en línia recta. En concret, cada
jugador disposa d'una flota formada per: 1 vaixell de longitud 5, 2 de
longitud 4, 3 de longitud 3, i 4 de longitud 2.

 \
Els vaixells no es poden tocar entre ells ni es poden posicionar de
qualsevol forma: sempre han de definir una línia contínua horitzontal o
vertical, però mai diagonal. Sempre que es compleixin aquestes
restriccions, els jugadors poden disposar els seus vaixells en qualsevol
lloc del tauler. Després, cada jugador intentaà enfonsar els vaixells de
l'altre jugador mitjançant 'trets' directes a una coordenada del tauler
contrari.

## Entrada

- Les primeres 10 línies defineixen el taulervàlid pel jugador 1. Cada
  línia defineix la posició d'un vaixell al tauler. Cada vaixell es
  defineix per una coordenada inicial del tauler, una mida i una
  orientació: la coordenada està formada per una lletra de {*a*..*j*} i
  un número de {1..10}, la mida és un enter entre 2 i 5, i l'orientació
  és una lletra *h* (horitzontal) una *v* (vertical). El vaixell es
  posarà al tauler a partir de la coordenada inicial, seguint
  l'orientació indicada, al llarg de tantes caselles com indica la
  llargada. Quan l'orientació és horitzontal, la coordenada inicial
  indica la de la casella més a l'esquerra, i quan és vertical, la
  casella superior.

  Per exemple, el vaixell definit per ***a1 3 h*** ocupa les caselles
  ***a1, a2, a3***, mentre que el vaixell definit per ***a1 3 v*** ocupa
  les caselles ***a1, b1, c1***.

- A continuació hi ha una seqüència (sense repeticions) de coordenades
  vàlides que representen els trets del jugador 2 sobre el tauler del
  jugador 1.

## Sortida

- Dibuixeu el tauler del jugador 1 després de posicionar-hi els 10
  vaixells definits a l'entrada.

- A continuació indiqueu, per a cada coordenada de la seqüència de trets
  del jugador 2, si hi ha vaixell en aquella posició al tauler del
  jugador 1. En cas que no n'hi hagi, indiqueu quina és la distància al
  vaixell més proper.

Seguiu el format indicat als exemples.

## Observació

- Els taulers i les coordenades dels tirs dels jocs de proves compleixen
  les condicions del joc. No cal que les comproveu, doncs.

- Feu servir la definició següent:

  > **typedef** vector$<$ vector$<$**bool**$>$ $>$ *Tauler*;

- La distància entre dues caselles $(i,j)$ i $(i',j')$ del tauler es
  defineix com la màxima diferència entre les seves coordenades, és a
  dir, $$distancia((i,j), (i',j')) = max\{| 
  i-i'|, |j-j'|\}$$ Fixeu-vos que, segons això, les posicions a
  distància 1 són totes les posicions contigües (horitzontalment,
  verticalment o en diagonal), les posicions a distància 2 són les
  contigües a les de distància 1, etc.

- Es valorarà l'eficiència de l'algorisme utilitzat per a calcular el
  vaixell més pròxim.

 \

## Informació del problema

Autoria: Maria J. Blesa i Maria J. Serna

Generació: 2026-01-25T13:38:58.250Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
