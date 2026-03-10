# Seqüència teulada

Una \"seqüència teulada\" és una seqüència d'enters sense sentinella que
té les següents propietats:

- El primer i últim element són iguals.

- Té dues parts de la mateixa longitud: un subseqüència creixent fins al
  punt mig que dóna lloc a una subseqüència decreixent fins al final
  (les dues parts de la teulada).

![image](teulada.png){width="15cm"}

**NOTA: Obriu el PDF per veure la imatge, a la web no apareix.**

Per ser totalment precisos, considerem que els elements de la seqüència
teulada són $x_i$, amb $1 \leq i \leq N$ i $N$ senar. Sigui $k$ la
posició central de la seqüència (és a dir, $N = 2k - 1$). La pujada
inicial inclou els elements $x_1, x_2, \ldots, x_{k-1}, x_k$ i es
compleix que $x_{i-1} \leq x_{i}$ per a $2 \leq i \leq k$. La baixada
inclou $x_k$ i té els elements $x_k, x_{k+1}, \ldots, x_{N-1}, x_N$, i
es complexien dues condicions: per una banda, $x_k > x_{k+1}$
*estrictament* (el principi de la baixada); per altra, que
$x_{i-1} \geq x_i$, per a la resta d'elements, $k+2 \leq i \leq N$. A
més a més es compleix que $x_1 = x_N$.

Fes un **programa** que determina si la seqüència d'entrada és una
\"seqüència teulada\".

## Observació

Aquest problema té com a centres d'interès la **correctesa**,
l'**eficiència** i la **llegibilitat**.

Els diferents jocs de prova d'aquest problema otorguen una puntuació
parcial, i la nota del problema és la suma de tots. Els jocs de prova
estan separats en correctesa i eficiència, i els d'eficiència fan servir
entrades de longituds molt grans i és necessari que el programa faci el
mínim número d'operacions possible per arribar al resultat.

## Entrada

Una seqüència d'enters sense sentinella.

## Sortida

La paraula \"`si`\" si la seqüència d'entrada és una \"seqüència
teulada\" i \"`no`\" en cas contrari.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T12:51:34.851Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
