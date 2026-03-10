# Othello

L'Othello (o Reversi) és un joc per a dos jugadors en un tauler
$8\times8$ amb fitxes que tenen una cara negra i una altra blanca. Es
comença col·locant quatre fitxes en diagonal al centre del tauler, de la
forma següent:

![image](1.png){width="3.2cm"}

Es procedeix per torns, començant el jugador negre, el qual ha de
col·locar una fitxa negra de forma que existeixi almenys una línia recta
(horitzontal, vertical o diagonal) entre aquesta fitxa negra i una altra
fitxa negra, amb una a més fitxes blanques entre elles. Per exemple, a
la situació inicial, es pot jugar a les posicions ombrejades:

![image](2.png){width="3.2cm"}

Després de col·locar una fitxa, el jugador negre gira totes les fitxes
blanques que es troben rodejades entre la seva nova fitxa i qualsevol
fitxa negra, en les vuit direccions possibles. Totes les fitxes girades
ara mostren la seva cara negra. Així, si el jugador negre decideix
col·locar la seva fitxa a la posició més alta del tauler, es gira una
fitxa i s'obté el tauler següent:

![image](3.png){width="3.2cm"}

Ara és el torn del jugador blanc. Aquest té les mateixes regles, amb el
papers de blanc i negre intercanviats. A l'exemple, el jugador blanc té
les possibilitats següents:

![image](4.png){width="3.2cm"}

En el cas que el jugador blanc decideixi jugar a la part d'abaix a
l'esquerra, gira una fitxa i el tauler queda com segueix:

![image](5.png){width="3.2cm"}

Quan un jugador no pot fer cap jugada, perd el seu torn. Quan cap
jugador pot realitzar cap jugada, el joc acaba. Això pot passar quan
s'ha omplert tot el tauler, o quan cap jugador pot col·locar una fitxa
en cap de les caselles lliures. Al final del joc, guanya el jugador amb
més fitxes del seu color.

Feu un programa que llegeixi les jugades d'una partida (potser
inconclusa) i que escrigui les diverses configuracions del tauler.

## Entrada

L'entrada comença amb la mida del tauler $n\ge4$, amb $n$ parell. A
continuació venen les jugades (totes legals) d'una partida. Cada jugada
es descriu amb una lletra '`B`' o '`N`' que indica el jugador que
l'efectua, i la fila i columna (entre 1 i $n$) de la jugada. Quan un
jugador no pot tirar, no es dóna la seva jugada.

## Sortida

Cal escriure el tauler en començar, i després de cada jugada. A més,
després de cada tauler cal indicar el nombre actual de fitxes negres i
blanques.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T10:23:02.278Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
