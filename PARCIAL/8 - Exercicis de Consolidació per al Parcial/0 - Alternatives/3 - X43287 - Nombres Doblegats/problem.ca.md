# Nombres Doblegats

Es tracta de calcular el valor de \"doblegar\" un nombre. \"Doblegar\"
un nombre $n$, es la operació que es mostra a la figura següent (obriu
el PDF si no podeu veure la figura a la pàgina web del Jutge).

::: center
![image](folded_number.eps){width="15cm"}
:::

En particular, qualsevol nombre $n$ el podem considerar una seqüència de
dígits i dividir-lo en dues subseqüències consecutives de dígits $a$ i
$b$, ja siguin de la mateixa longitud, o bé amb longituds que difereixen
només en una unitat (incloent el cas que $a$ o $b$ estiguin buides).
Concatenant aquestes dues meitats $a$ i $b$ de nou obtindríem el nombre
$n$ original.

Llavors, per realitzar la operació de \"doblegar\" es tracta d'invertir
l'ordre de la subseqüència $a$, que donaria lloc a $a_{inv}$, i,
interpretant $a_{inv}$ i $b$ com enters, sumar-los per obtenir el
resultat de la operació de \"doblegat\".

Per exemple, si tenim que $n$ és 1234, la subseqüència $a$ és 12 i la
subseqüència $b$ és 34. Invertint l'ordre d'$a$ obtenim 21 i el resultat
serà, doncs, $21 + 34 = 55$.

En el cas d'un nombre amb una longitud senar, la partició en dues
seqüències té dues possibilitats. Per exemple, si tenim que $n$ és
12345, podem operar de les dues maneres següents:

- Dividir $n$ en $a = 123$ i $b = 45$, i invertint $a$ i sumant,
  tindríem $321 + 45 = 366$.

- Dividir $n$ en $a = 12$ i $b = 345$, i invertint $a$ i sumant, tindrem
  $21 + 345 = 366$.

La xifra del mig doncs, acaba contribuint a la suma final de la mateixa
manera en els dos cassos.

## Entrada

L'entrada consisteix en una seqüència d'enters estrictament positius.

## Sortida

La sortida consisteix en el resultat de \"doblegar\" cada nombre de
l'entrada, tal com s'ha explicat, i amb cada resultat en una línia
separada.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T16:12:14.113Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
