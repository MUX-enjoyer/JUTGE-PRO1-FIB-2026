# Quants partits guanya cadascú?

Amb l'ànim de fer un gest en pro de la concòrdia i la solidaritat entre
els pobles del món, i mostrar que hi han millors vies i més inòcues de
solucionar conflictes, una companyia multinacional ha decidit organitzar
un torneig de ping-pong entre dos equips, un format per treballadors de
la companyia que son Russos, i un format per treballadors de la
companyia que son Estadounidencs.

Hi han $n$ persones a cada equip. Cada membre d'un equip juga dues
partides contra cada membre de l'altre equip. Per tant, en total cada
persona haurà jugat $2n$ partides de ping-pong.

En realitat, es pot anticipar quantes partides guanyarà cadascú, perquè
es coneix el nivell de cada persona com a jugador de ping-pong.
Qualsevol persona sempre guanya les dues partides a qualsevol altri que
tingui un nivell inferior. En canvi, quan una persona juga amb algú
altri del mateix nivell, llavors guanyarà exactament una de les dues
partides, i per tant perdrà l'altra.

Es tracta de calcular quantes partides guanyarà cada persona en total.

## Entrada

L'entrada té varis casos. Cada cas comença amb un natural positiu $n$ en
una primera línia. Després, hi ha una segona línia amb una llista de $n$
parelles (string,natural) indicant el nom i el nivell dels jugadors
Russos. Després hi ha una tercera línia amb el mateix format i indicant
el nom i el nivell dels jugadors Estadounidencs. Després hi ha una línia
en blanc.

## Sortida

Per a cada cas, la sortida té dues línies. Una primera línia amb una
llista de $n$ parelles (string,natural) indicant el nom i el nombre de
partits guanyats per cadascun dels jugadors Russos. Els noms han de
venir en el mateix ordre que a l'entrada. Una segona línia té la mateixa
informació i en el mateix format per als jugadors Estadounidencs.
Finalment segueix una línia en blanc.

## Observació

Avaluació sobre 10 punts:

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost $n\log(n)$ i
capaç de superar els jocs de proves públics i privats. Entenem com a
solució lenta una que no és ràpida, però és correcta i capaç de superar
els jocs de proves públics.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T21:32:50.505Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
