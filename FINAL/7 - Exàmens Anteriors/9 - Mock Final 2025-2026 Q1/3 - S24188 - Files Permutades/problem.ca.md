# Files Permutades

Sigui una matriu $M$ quadrada $n \times n$ d'enters ($n \geq 1$), en la
qual sabem que els valors d'una mateixa fila són sempre tots diferents
entre ells (és a dir, no hi ha valors repetits), i
$M_{ij} \in [0, 1000]$, o sigui, els valors de la matriu estan entre 0 i
1000, ambdós inclosos.

Diem que la matriu satisfà la propietat de **files permutades** si i
només si:

- Per a cada parell de files $i$ i $j$, amb $i \neq j$, la fila $i$ és
  una permutació de la fila $j$. És a dir, cada fila conté els mateixos
  valors que les altres files, però en un ordre diferent. (En
  particular, això implica que totes les files són diferents.)

Per exemple, considerem la matriu de $3 \times 3$:

::: center
  --- --- ---
   1   2   3
   2   3   1
   3   1   2
  --- --- ---
:::

Aquesta matriu satisfà la propietat perquè totes les files contenen els
valors $\{1, 2, 3\}$, i són totes diferents.

Escriu una funció `te_files_permutades` amb la següent declaració i
especificació:

    /*
     * @pre  M és quadrada i M.size() > 0
     *       1 <= M[i][j] <= 1000
     *       Els valors d'una mateixa fila són tots diferents.
     *
     * @post Retorna `true` si i només si la matriu satisfà les 
     *       següents condicions:
     *       - Totes les files són diferents.
     *       - Totes les files són permutacions entre elles.
     */
    bool te_files_permutades(const vector<vector<int>>& M);

## Observació

La icona de nom \".CPP\" conté el programa principal per fer proves.
**Només** cal enviar la funció que us demanem (i les funcions que hagueu
pogut declarar vosaltres). Podeu començar amb `main.cc` i comentar o
esborrar les funcions `llegeix_matriu` i `main` per fer l'enviament.

En aquest problema és molt avantatjós utilitzar la comparació de vectors
(és a dir, comparar-los amb els operadors `==` i `!=`). Per exemple:

    vector<int> a = {1, 2, 3}, b = {1, 2, 3}, c = {4, 5, 6};
    if (a == b) { cout << "Iguals!" << endl; }
    if (a != c) { cout << "Diferents!" << endl; }

## Entrada

L'entrada és una seqüència de matrius quadrades. De la lectura ja se
n'encarrega el programa principal.

## Sortida

La sortida són els resultats per a cada matriu: \"`yes`\" si satisfà la
propietat, \"`no`\" en cas contrari. De l'escriptura també se
n'encarrega el programa principal.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T12:43:05.754Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
