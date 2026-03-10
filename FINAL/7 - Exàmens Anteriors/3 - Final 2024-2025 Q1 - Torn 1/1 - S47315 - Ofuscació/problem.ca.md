# Ofuscació

L'ofuscació d'un string $s = c_1 c_2 c_3 \dots c_k$ respecte a un
natural $n$ consisteix en canviar tots les lletres $c_i \in s$ per la
lletra que va $n$ llocs després de $c_i$ en l'alfabet.

Per exemple, `ofuscacio(1,'A') = 'B'`, perquè la `'B'` va un lloc
després de l`'A'`. Uns altres exemples: `ofuscacio(4,'B') = 'F'` i
`ofuscacio(2,'AB') = 'CD'`.

Cal implementar la funció **recursiva**
`void ofuscacio(int n, string s)` amb la següent especificació:

`PRE: ` L'entrada és un enter $n$ tal que $0 \leq n \leq 20$ i una
cadena de caràcters $s = c_1 c_2 c_3 \dots c_k$ tal que $k > 0$ i
$\forall c_i \in s, 'A' \leq c_i \leq 'F'$.

`POST:` escriu pel canal de sortida `cout` l'ofuscació de la cadena de
caràcters $s$ respecte d'$n$.

## Observació

Si calgués, podeu fer servir el mètode `pop_back()` per a vectors i
`string`.

Només s'accepten solucions recursives.

Només cal que envieu la funció. La resta no es tindrà en compte.

## Entrada

Un enter $n$ tal que $0 \leq n \leq 20$ i una cadena de caràcters
$s = c_1 c_2 c_3 \dots c_k$ tal que $k > 0$ i
$\forall c_i \in s, 'A' \leq c_i \leq 'F'$.

## Sortida

Per cada parell `n, s`, l'ofuscació d'`s` respecte d'`n`.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T12:45:36.920Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
