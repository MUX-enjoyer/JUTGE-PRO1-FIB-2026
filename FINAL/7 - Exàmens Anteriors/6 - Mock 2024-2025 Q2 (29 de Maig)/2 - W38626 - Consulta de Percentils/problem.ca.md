# Consulta de Percentils

Disposem de les dades d'un rànking de jugadors, cadascún amb el seu nom
(un `string`) i els seus punts (un `int`). Si els ordenem per puntuació
de major a menor, el **percentil** d'un jugador és el tant per cent de
jugadors que té per sota (incloent-se a sí mateix) en el rànking.

Per exemple, en el següent rànking es mostren el nom, els punts i el
percentil d'un grup de 5 jugadors, ordenats per punts descendentment:

  --------- ---- ------
  `ramon`    15   100%
  `amy`      13   80%
  `john`     10   60%
  `pete`     8    40%
  `zach`     4    20%
  --------- ---- ------

Feu un programa que llegeixi les puntuacions d'un rànking de jugadors i
després contesti una sèrie de consultes, en què es demana un nom i cal
contestar amb el percentil del jugador demanat. El programa s'ha de
dissenyar tenint en compte que el nombre de consultes és, típicament,
*dos ordres de magnitud major* que el nombre de jugadors del rànking.

## Observació

En aquest problema l'eficiència és el centre d'interès. Es tracta
d'aplicar els millors algorismes coneguts i trobar formes de fer el
mínim número de operacions per poder produir la sortida.

L'ús de l'algorisme `sort` de `vector` està permès en aquest problema.
Com a recordatori, per fer servir `sort`, caldria:

- Afegir `#include <algorithm>`.

- Definir una funció de comparació `fcomp` que rebi dos elements
  constants `a` i `b` i retorni `true` si `a` va abans que `b` en la
  ordenació final.

- Cridar `sort(v.begin, v.end(), fcomp)`, suposant que `v` és el vector
  que es vol ordenar.

## Entrada

L'entrada té dues parts. Primer hi ha una seqüència de noms de jugadors,
acabada en \"`---`\", a on cada jugador va acompanyat de la seva
puntuació. L'ordre dels jugadors és arbitrari. Després segueix una
seqüència sense sentinella de noms de jugadors dels quals es vol
consultar el percentil.

## Sortida

La sortida és simplement el percentil de cada jugador consultat, un per
línia. Els percentils cal mostar-los amb 2 decimals. Per mostrar dos
decimals amb tots els nombres reals d'un programa se sol posar, al
principi de la funció `main`:

    cout.precision(2);
    cout.setf(ios::fixed);

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T13:17:59.348Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
