# Màxim de Seqüències per Paritat

Donada una seqüència $S$, una **subseqüència** de parells (o senars) es
una seqüència d'elements parells (o senars) **adjacents** d'$S$. Per
exemple, si $S = 4,6,5,8,9,12,14,16,5,4$, una subseqüència d'elements
parells d'$S$ podria ser $4,6$, o $12,14$ o $12,14,16$, tot i que n'hi
hauria alguna més (per a nombres senars seria igual, però òbviament amb
senars).

Una **subseqüència màxima** de parells (senars) seria una subseqüència
com l'anterior, però que no està pròpiament continguda dins de cap altra
subseqüència de parells (senars). En l'exemple anterior, la subseqüència
$12,14$ no és màxima, perquè està pròpiament continguda dins de
$12,14,16$. En canvi, la subseqüència $12,14,16$ és màxima perquè no
està pròpiament continguda dins de cap altra subseqüència.

Cal implementar la **programa** que calculi la mida de la subseqüència
màxima de parells més llarga i la mida de la subseqüència màxima de
senars més llarga.

## Entrada

Una seqüència $S$ d'enters positius.

## Sortida

La mida de la subseqüència màxima de parells més llarga i la mida de la
subseqüència màxima de senars més llarga.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T15:54:31.986Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
