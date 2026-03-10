# Taules Alineades

Quan disposem de dades tabulades, és a dir en forma de taula (una matriu
amb caselles de tipus `string`), el més còmode per visualitzarles és
alinear les columnes verticalment a algun dels dos costats (esquerre si
es tracta de text o dret si són dades numèriques) i posar dos espais de
separació entre columnes de tal manera que l'esforç de lectura sigui el
menor possible.

Per exemple, les següents dades:

    sanches 2 45
    kim 13 1000
    yang 1234 22
    schmitz 420 3345
    papanopoulos 9 51231

Són molt més fàcils de llegir si les formatem així:

    sanches          2     45
    kim             13   1000
    yang          1234     22
    schmitz        420   3345
    papanopoulos     9  51231

La primera columna està alineada a l'esquerra perquè les caselles
contenen text (només que una contingui text, ja es considera que tota la
columna és de text). La segona i tercera columnes estan alineades a la
dreta perquè totes les caselles contenen només dígits. Entre el caràcter
de més a la dreta de la primera columna (la `'s'` de `papanopoulos`) i
el primer caràcter de la segona columna (l'`'1'` del `"1234"`) hi ha dos
espais exactament.

L'alineament es fa simplement imprimint espais entre el contingut de les
caselles i posant-lo al davant o al darrere per produir l'alineació a la
dreta o l'esquerra.

Fes un programa que llegeix dades tabulars i les mostra alineades tal
com en l'exemple.

## Entrada

L'entrada consisteix en un seguit de taules, sense sentinella, a on cada
taula comença amb el nombre de files i columnes (dos enters $f$ i $c$),
seguit de $f \times c$ strings (sense espais) que són les caselles, amb
les $c$ columnes de cada fila consecutives i les files per ordre.

## Sortida

La sortida han de ser les taules de l'entrada totes alineades tal com
s'ha explicat, amb una línia buida després de cada taula (inclosa la
última).

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T19:56:29.808Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
