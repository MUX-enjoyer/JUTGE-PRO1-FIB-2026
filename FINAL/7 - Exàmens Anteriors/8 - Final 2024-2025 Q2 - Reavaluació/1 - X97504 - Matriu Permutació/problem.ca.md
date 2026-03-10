# Matriu Permutació

Siguin $A$ i $B$ dues matrius d'enters amb les mateixes dimensions tals
que els qualsevol valor de totes dues matrius és entre 0 i 99
(inclosos). Dit altrament: $0 \leq A[i][j] \leq 99$ i
$0 \leq B[i][j] \leq 99$, per a tot $i,j$ dins de les mides de les
matrius.

Implementa una funció `permutacio` amb la declaració següent:

    typedef vector<vector<int>> Matrix;

    /* 
     * A i B són dues matrius de les mateixes dimensions.
     * A i B són matrius d'enters i els valors que hi ha
     * a totes dues matrius és entre 0 i 99 (tots dos inclosos).
     * Torna true si i només si la matriu B és una 
     * permutació de la matriu A.
     */
    bool permutacio(const Matrix& A, const Matrix& B)

Per exemple,

        A        B     
    1 3 4 2   8 8 4 1
    5 9 7 3   2 4 3 1
    1 8 8 4   3 7 9 5  

torna `true` perquè la matriu $B$ és una permutació de la matriu $B$.
Una matriu $B$ és una permutació d'una matriu $A$ si i només si $B$
conté els mateixos elements que $B$ i en la mateixa quantitat. Dit
altrament: $B$ és la matriu $A$ però no necessàriament en el mateix
ordre.

## Observació

Només has d'enviar un fitxer que contingui la funció requerida, amb els
`include` necessaris i les funcions auxiliars que hauràs declarat (si
n'hi ha), i **res més**.

El centre d'interès d'aquest problema és la *correctesa*. Els jocs de
prova comproven que la majoria de casos possibles produeixin la sortida
correcta.

## Entrada

*L'entrada ja la fa el programa principal proporcionat*. Consisteix en
un seguit de casos amb dos enters per files i columnes i les matrius $A$
i $B$ de costat, en el format mostrat als exemples.

## Sortida

*La sortida també la produeix el programa principal proporcionat*. Es
mostra la matriu resultat de cridar `permutacio` en el mateix format.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T17:36:19.175Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
