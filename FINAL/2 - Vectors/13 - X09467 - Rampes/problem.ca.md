# Rampes

En aquest exercici direm que a la posició $i$ d'un vector $v$ tenim una
*rampa* quan els elements $v[i]$, $v[i + 1]$ i $v[i + 2]$ estan ordenats
en ordre estrictament creixent o decreixent.

Per exemple, si $n = 7$, i $v = [4,5,4,3, -4,2,4]$ tenim rampes a les
posicions 1, 2 i 4. Quan $v = [0,0, 0,0,0,0]$ no tenim cap posició amb
rampa.

Dues posicions amb rampa, $i$ i $j$ amb $i <j$, són *potencialment
conflictives* si les corresponents rampes involucren alguna posició
comuna.

En l'exemple anterior les rampes de les posicions 1 i 2 són
potencialment conflictives, la de la posició 2 és potencialment
conflictiva amb la de la posició 4. La rampa de la posició 1 no
comparteix cap posició amb la de la posició 4 i per això les rampes de
les posicions 1 i 4 no són potencialment conflictives.

Escriviu un programa que indiqui les posicions en les que tenim rampes i
el nombre de parells $(i, j)$ amb $i <j$ corresponents a parells de
posicions amb rampa i potencialment conflictives.

El vostre programa ha de definir, implementar i utilitzar els
procediments:

    vector <bool> pos_rampas (const vector <int>& V);

que donat un vector d'enters retorna un vector, amb la mateixa dimensió,
de valors booleans, on la posició $i$ conté el valor **true** si i només
si el vector $V$ té una rampa a la posició $i$.

    int pot_conflictives (const vector <bool>& B) ;

que donat un vector indicant les posicions on hi ha una rampa determini
el nombre de parells de posicions $(i, j)$, $i <j$, amb rampes i
potencialment conflictives.

## Entrada

L'entrada està formada per una seqüència no buida de casos. Cada cas
està descrit per un enter $n \geq 3$ seguit dels $n$ valors enters del
vector corresponent.

## Sortida

Indicar per a cada cas les posicions en les que tenim rampes i el nombre
de parells de posicions $(i,j)$, amb $i <j$ amb rampes i potencialment
conflictives.

Seguiu el format especificat als exemples. El vostre codi ha de seguir
les normes d'estil i contenir els comentaris que considereu oportuns. Es
valorarà la senzillesa i l'eficiència de les solucions proposades.

## Informació del problema

Autoria: Professorat de PRO1

Generació: 2026-01-25T13:26:16.036Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
