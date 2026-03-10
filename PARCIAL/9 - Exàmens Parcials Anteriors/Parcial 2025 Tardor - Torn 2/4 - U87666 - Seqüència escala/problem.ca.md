# Seqüència escala

Un \"esglaó\" és una subseqüència de $w$ enters del mateix valor $h$. El
valor repetit $h$ d'un esglaó es diu l'\"alçada\", i el número
d'elements $w$ és l'\"amplada\". Per exemple, les subseqüències següents
són \"esglaons\": \"`1`\" ($h = 1$, $w = 1$), \"`5 5 5`\" ($h = 5$,
$w = 3$), i \"`-1 -1 -1 -1`\" ($h = -1$, $w = 4$).

Una \"seqüència escala\" és una seqüència no buida d'enters sense
sentinella, amb les següents propietats:

- Està formada per un mínim de 2 \"esglaons\", segons la definició
  anterior.

- Tots els \"esglaons\" de l'escala tenen la mateixa amplada $w$.

- A tota l'escala, la diferència $D = h - h_{prev}$ entre l'alçada d'un
  esglaó i l'alçada de l'anterior és *constant* (és a dir, els esglaons
  estan distribuits uniformement en alçada).

![image](escala.png){width="15cm"}

**NOTA: Obriu el PDF per veure la imatge, a la web no apareix.**

Exemples de seqüències escala:

  ------------------- ----------------------------------
  `1 1 2 2 3 3`       3 esglaons, $w = 2$, i $D = 1$.
  `10 6 2 -2`         4 esglaons, $w = 1$, i $D = -4$.
  `0 0 0 0 3 3 3 3`   2 esglaons, $w = 4$, i $D = 3$.
  ------------------- ----------------------------------

Fes un **programa** que determina si la seqüència d'entrada és una
\"seqüència escala\".

## Observació

Aquest problema té com a centres d'interès la **correctesa**,
l'**eficiència** i la **llegibilitat**.

Els diferents jocs de prova d'aquest problema otorguen una **puntuació
parcial**, i la nota del problema és la suma de totes. Els jocs de prova
estan separats en correctesa i eficiència, i els d'eficiència fan servir
entrades de longituds molt grans i és necessari que el programa faci el
mínim número d'operacions possible per arribar al resultat.

## Entrada

Una seqüència no builda d'enters sense sentinella.

## Sortida

La paraula \"`si`\" si la seqüència d'entrada és una \"seqüència
escala\" i \"`no`\" en cas contrari.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T13:04:04.010Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
