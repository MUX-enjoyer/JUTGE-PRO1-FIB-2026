# Longitud mitjana i lletra més freqüent

Donada una seqüència de paraules, volem saber:

1.  Quina és la longitud mitjana $L$ dels seus mots.

2.  Per a cada mot de longitud igual o superior a $L$, quina és la
    lletra més freqüent i, en cas d'empat entre diverses lletres, la més
    petita d'elles en ordre lexicogràfic.

Per a resoldre el segon punt, el vostre programa ha d'implementar la
funció

> **char** *lletra_mes_frequent*(**const string**& s);

que retorna la lletra minúscula que apareix més cops a la paraula $s$
(la menor en ordre lexicogràfic, en cas d'empat).

## Entrada

L'entrada consisteix en un natural $n > 0$ seguit de $n$ paraules no
buides. Cada paraula está formada només per lletres minúscules.

## Sortida

Escriviu la longitud mitjana de les paraules de la seqüència d'entrada
fent servir dos decimals de precisió. Escriviu també, per a cada mot de
longitud igual o superior a la mitjana, quina és la lletra minúscula que
més freqüentment hi apareix (la més petita lexicogràficament, en cas
d'empat). Seguiu el format especificat als exemples.

## Observació

Recordeu que, per tal de fixar una precisió de $d$ decimals al canal de
sortida, cal fer servir les instruccions

> cout.setf(ios::fixed);
>
> cout.precision(*d*);

Si us resulta útil, podeu fer servir la constant *LONG_ALFABET*,
definida com a

> **const int** *LONG_ALFABET* = 'z' - 'a' + 1;

 \

## Informació del problema

Autoria: Maria J. Blesa i Maria J. Serna

Generació: 2026-01-25T14:16:44.797Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
