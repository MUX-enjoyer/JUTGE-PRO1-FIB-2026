# Decodificació

La **decodificació** d'un natural $n$ és una cadena de caràcters tal que
cada dos dígits de $n$ representen un caràcter. Per exemple, la
decodificació de $n = 6568$ és `AD`, perquè el codi ASCII del caràcter
`A` és 65 i el caràcter ASCII del caràcter `D` és 68. Fixeu-vos que $n$
té dos grups de dos dígits: $65$ i $68$. Un altre exemple: la
decodificació de $65666768$ és `ABCD`, ja que $n$ es composa de $65$,
$66$, $67$ i $68$.

Cal implementar la funció **recursiva** `void decodificacio(int)` amb la
següent especificació:

`PRE: ` L'entrada és un enter $n$ tal que:

1.  $n \geq 65$

2.  $n = d_1 d_2 d_3 d_4 \dots d_{m-1} d_m$.

3.  $m$ és parell

4.  per qualsevol parell de dígits $d_i d_{i+1}$ ($i$ senar) tenim que
    $65 \leq d_i d_{i+1} \leq 90$.

`POST:` escriu pel canal de sortida `cout` la decodificació d'$n$.

## Observació

Només s'accepten solucions recursives.

**IMPORTANT:** Només cal que envieu la funció que us demanem i les
accions i funcions que vosaltres mateixos definiu. Mantingueu, però, les
definicions de tipus i els `#include`s.

## Entrada

L'entrada consisteix en un natural $n \geq 65$ tal que
$n = d_1d_2d_3d_4 \dots d_{m-1}d_m$, $m$ és parell i per qualsevol
parell de dígits $d_i d_{i+1}$ tal que $i$ és senar, tenim que
$65 \leq d_i d_{i+1} \leq 90$.

## Sortida

Per cada enter $n$, la seva decodificació.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T13:12:00.969Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
