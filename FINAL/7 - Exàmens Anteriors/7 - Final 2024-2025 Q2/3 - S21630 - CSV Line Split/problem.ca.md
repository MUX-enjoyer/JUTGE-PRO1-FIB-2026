# CSV Line Split

Els fitxers CSV són fitxers tabulars a on cada línia de text és una fila
de la taula, i les diferents columnes estan separades per un caràcter
separador, típicament '`;`' o '`,`'. Sovint, la primera fila conté les
capçaleres de cada columna. Per exemple, el següent text té el format
CSV, amb 3 columnes per al nom, cognom i edat de 3 persones:

    nom;cognom;edat
    Pete;Buttigieg;43
    Hillary;Clinton;77
    Donald;Trump;78

El format és senzill, però té una particularitat interessant, i és que
es permeten textos que *contenen* el separador. És a dir, si en
l'exemple anterior un nom o cognom tingués un caràcter `';'`, es
confondria amb el separador i la partició de les columnes no funcionaria
correctament.

Per arreglar aquest problema, el format CSV ens deixa delimitar el text
d'una casella fent servir **cometes dobles** (`"`). Així, el text de
cada cel·la pot utilitzar el separador com a caràcter, ja que un cop
obertes les cometes, es poden tenir tants separadors com es vulgui fins
que no apareguin les cometes dobles de tancar. (En aquest exercici *no*
es considerarà el cas que una cel·la contingui unes cometes dobles com a
caràcter!)

Per exemple, el següent CSV té 2 columnes i el separador és la coma. Les
cel·les de la primera columna totes tenen una coma dins del text, que
separa el cognom del nom:

    "Apellido, Nombre",Edad
    "Sanchez, Pedro",53
    "N. Feijoo, Alberto",64
    "Díaz, Yolanda",54

Un detall important: les cometes dobles d'obrir només poden aparèixer al
principi de tot o bé just després d'un separador, i les de tancar només
poden aparèixer abans d'un separador o bé al final de tot de la línia.
És a dir, no es permet barrejar trossos de text delimitats amb cometes i
d'altres que no ho estiguin.

Implementa una funció `csv_line_split` amb la declaració següent:

    /**
     * @brief Donada una línia sencera d'un CSV, separa la línia 
     * en les seves cel·les. Es té en compte que les cel·les poden 
     * tenir com a delimitadors les cometes dobles i que això permet 
     * fer servir el separador dins les cometes.
     *
     * @param  line  La línia d'un fitxer CSV
     * @param  sep   El separador que s'utilitza a la línia
     * 
     * @returns Un vector amb els `string`s de cada cel·la de la línia.
     */
    vector<string> csv_line_split(string line, char sep);

## Observació

El centre d'interès d'aquest problema és la *correctesa*. Els jocs de
prova comproven que la majoria de casos possibles produeixin la sortida
correcta.

## Entrada

L'entrada la gestiona el programa principal, i consisteix en un seguit
de cassos amb dues línies seguides, a on el primer caràcter de la
primera línia és el separador i la segona línia sencera és el contingut
d'una de les files d'un fitxer CSV.

## Sortida

La sortida mostra les caselles obtingudes de cridar `csv_line_split` i
mostrar el resultat a la sortida en un format entenedor, una línia per a
cada cas.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T12:42:54.800Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
