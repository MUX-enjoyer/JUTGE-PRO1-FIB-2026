# Nombre de submatrius quadrades constants

Cada cas d'entrada d'aquest exercici és una matriu de 0s i 1s. El
programa ha de calcular el nombre total de submatrius no-buides,
quadrades i constants (amb tantes files com columnes i amb el mateix
símbol). Per exemple, considereu aquesta matriu d'entrada:

    00001
    00011
    00011
    01111

Té 1 submatriu $3\times{}3$ constant (amb 0s), té 6 submatrius
$2\times{}2$ constants (4 d'elles amb 0s, i 2 d'elles amb 1s), i té 20
submatrius $1\times{}1$ constants. Per tant, en aquest cas la sortida
serà $27$.

## Entrada

L'entrada té varis casos. Cada cas comença amb dos naturals positius
$n,m$ en una primera línia. Després venen $n$ línies amb $m$ caràcters
$0$ o $1$, que descriuen una matriu $n\times{}m$ de 0s i 1s. Després ve
una línia en blanc.

## Sortida

Per a cada cas, el programa ha d'escriure el nombre total de submatrius
no buides i constants en una línia.

## Observació

Avaluació sobre 10 punts:

- Solució lenta: 5 punts.

- Solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost lineal i capaç
de superar els jocs de proves públics i privats. Entenem com a solució
lenta una que no és ràpida, però és correcta i capaç de superar els jocs
de proves públics.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T14:26:12.901Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
