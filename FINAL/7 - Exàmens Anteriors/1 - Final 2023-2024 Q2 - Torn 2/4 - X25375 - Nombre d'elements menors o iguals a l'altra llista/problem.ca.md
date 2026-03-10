# Nombre d'elements menors o iguals a l'altra llista

Cada cas d'entrada d'aquest exercici comença amb un natural positiu $n$
en una primera línia. En una segona línia hi ha una llista de $n$ enters
$u_1,\ldots,u_n$ ordenats creixentment (no necessàriament de forma
estricta, de manera que hi poden haver repeticions). En una tercera
línia hi ha una llista de $n$ enters $v_1,\ldots,v_n$ ordenats
creixentment (no necessàriament de forma estricta, de manera que hi
poden haver repeticions).

La sortida de cada cas escriu $n$ naturals $c_1,\ldots,c_n$ en una
línia. Donat un $i$ de $1,\ldots,n$, el natural $c_i$ és el nombre de
valors de $v_1,\ldots,v_n$ que son menors o iguals a $u_i$.

Per exemple, considereu aquest cas d'entrada:

    10
    1 1 2 4 6 6 6 7 9 9
    0 1 3 3 3 4 5 7 7 8

Amb l'entrada anterior, la sortida ha de ser:

    2 2 2 6 7 7 7 9 10 10

## Entrada

L'entrada té varis casos. Cada cas comença amb un natural positiu $n$ en
una primera línia. Després venen $n$ enters $u_1,\ldots,u_n$ en una
línia, ordenats creixentment (no necessàriament estríctament). Després
venen $n$ enters $v_1,\ldots,v_n$ en una línia, ordenats creixentment
(no necessàriament estríctament).

## Sortida

Per a cada cas, el programa ha d'escriure $n$ naturals $c_1,\ldots,c_n$
en una línia. El natural $c_i$ és el nombre de valors $v_1,\ldots,v_n$
que son menors o iguals a $u_i$.

## Observació

Avaluació sobre 10 punts:

- Solució lenta: 5 punts.

- Solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost lineal
(acceptem també nlogn com a solució ràpida) i capaç de superar els jocs
de proves públics i privats. Entenem com a solució lenta una que no és
ràpida, però és correcta i capaç de superar els jocs de proves públics.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T14:35:38.739Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
