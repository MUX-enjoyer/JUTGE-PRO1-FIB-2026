# Nombre de màxims locals interiors

Donada una matriu de dígits 0,1,2,...,9, hem de comptar el nombre de
màxims locals interiors que té. Expliquem a continuació què vol dir
això.

Considereu el següent exemple de matriu de dígits:

    02139
    28124
    32453
    15321
    34173
    21771

Fixeu-vos en el 8 que apareix a la matriu. Aquest 8 apareix en una
posició interior, perquè està totalment envoltat de dígits. A més a més
és un màxim local, perquè tots els dígits que l'envolten (és a dir, tots
els que estan a distància 1 d'ell horitzontalment, verticalment o
diagonalment) son estríctament menors que ell.

En aquesta matriu, a part del 8, hi ha dos altres màxims locals
interiors, que corresponen a les posicions dels dos 5's que apareixen a
la matriu.

Per tant, la resposta amb aquesta entrada és 3.

## Entrada

L'entrada té varis casos. Cada cas comença amb dos naturals positius
$n,m$ majors o iguals a 3 en una primera línia. Després ve una matriu de
$n\times{}m$ dígits 0,1, 2,..., 9 ($n$ línies amb $m$ dígits cadascuna).
El cas ve seguit d'una línia en blanc.

## Sortida

Per a cada cas, el programa ha d'escriure en una nova línia el
corresponent nombre de màxims locals interiors.

## Observació

No calen optimitzacions per a superar els jocs de proves privats.
Qualsevol implementació més o menys raonable els passarà.

Avaluació sobre 10 punts:

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost lineal i capaç
de superar els jocs de proves públics i privats. Entenem com a solució
lenta una que no és ràpida, però és correcta i capaç de superar els jocs
de proves públics.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T17:13:42.781Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
