# Escala consonant de paraules

**Definició 1:** Un parell de paraules en majúscula ($p_1, p_2$) forma
una *escala consonant* si el nombre d'aparicions de consonants a $p_2$
supera al nombre d'aparicions de consonants a $p_1$.

Per exemple, el parell (MADUIXOT, PRESSEC) forma una escala consonant,
perquè MADUIXOT té 4 consonants i PRESSEC en té 5. També la formen
(POMA, PLATAN). Però en canvi no formen escala consonant (SINDRIA,
PRUNA) ni (PERA, KIWI).

**Definició 2:** Una *escala consonant de paraules* de longitud $k$ és
una seqüència de $k$ paraules escrites amb lletres majúscules, on tot
parell de paraules consecutives de la seqüència forma una escala
consonat.

Per exemple: POMA, MADUIXA, PLATAN, PRESSEC, ALBERCOCS és una escala
consonant de paraules de longitud 5.

**Definició 3:** Donada una matriu amb $n$ files i $m$ columnes, diem
que una seqüència de $k$ posicions de la matriu és *esglaonada* si és de
la forma $\{(i,j), (i+1, j+1),..., (i+k-1, j+k-1)\}$, per $i, j, k$
complint $0\leq i$, $i+k-1 < n$, $0\leq j$, $j+k-1<m$.

Per exemple, donada una matriu de $6\times 10$, la seqüència
$\{(0,2),(1,3),(2,4),(3,5),(4,6)\}$ és una seqüència esglaonada de
posicions que comença a la posició $(0,2)$ i té longitud $5$.

**Es demana:**

Feu un programa que, donada una matriu de paraules i un natural $k$ ,
recorri la matriu per files i indiqui la primera posició $(i,j)$ que
conté una escala consonant de paraules de longitud $k$ en la seqüència
esglaonada de posicions que comença a $(i,j)$.

El vostre programa ha de representar la matriu de paraules mitjançant el
següent tipus:

    struct Paraula {
         string contingut;          // la paraula
         int consonants;            // nombre d'aparicions de consonants 
    };
     
    typedef vector< vector<Paraula> > MatParaules;

## Entrada

L'entrada conté un únic cas. El cas consisteix en el nombre de files
$n\geq
1$, el nombre de columnes $m\geq 1$ de la matriu i un natural positiu
$k$ que determina la longitud de l'escala consonant de paraules a
cercar. A continuació venen $n$ línies amb $m$ strings cadascuna. Cada
string està format només per lletres majúscules.

## Sortida

Cal escriure en una línia el número de fila, el número de columna de la
matriu, i la paraula amb què comença la primera (segons un recorregut
per files) escala consonant de paraules de longitud $k$ en una seqüència
esglaonada de posicions. Cal escriure -1 -1 si la matriu no en conté
cap.

Seguiu el format especificat als exemples. El vostre codi ha de seguir
bones normes d'estil, i ha de contenir els comentaris que considereu
oportuns.

## Informació del problema

Autoria: Gabriel Valiente, Maria Blesa

Generació: 2026-01-25T21:34:41.648Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
