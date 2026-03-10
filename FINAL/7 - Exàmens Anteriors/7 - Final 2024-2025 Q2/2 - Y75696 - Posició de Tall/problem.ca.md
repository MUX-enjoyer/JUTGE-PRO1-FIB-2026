# Posició de Tall

En unes oposicions els participants tenen un nom (un `string`) i un
número de punts (un `double`). El guanyador $G$ de les oposicions és el
participant amb la major puntuació, $p_G$. Les normes de les oposicions
diuen que aproven tots els participants que tenen almenys $p_G / 2$
punts, és a dir, la meitat de punts que el guanyador.

Disposem d'una tupla `Participant` amb la declaració:

    struct Participant {
        string nom;
        double punts;
    };

Fes una funció `posicio_de_tall` amb la següent declaració:

    /**
     * @brief Retorna la primera posició `p` des del principi del vector, 
     * tal que el participant a `p` és el primer amb menys de la meitat 
     * de la puntuació del guanyador. Es pot suposar que aquesta cerca 
     * _sempre_ tindrà exit.
     * 
     * @pre El vector `participants` està ordenat de més a menys punts.
     */
    int posicio_de_tall(const vector<Participant>& participants);

## Observació

Aquest problema té com a centre d'interès l'*eficiència*. Feu servir el
millor algorisme possible a la funció i considereu que rebreu un vector
de grans dimensions.

**IMPORTANT**: Quan envieu aquest problema, cal posar en el fitxer `.cc`
només: *a)* els includes, *b)* la declaració de la tupla `Participant` i
*c)* la definició de la funció `posicio_de_tall`. Si modifiqueu el
`main.cc` per poder provar en el vostre ordinador, podeu esborrar (o
comentar amb `/*` i `*/`) tant la funció `main` com
`llegeix_participants`.

## Entrada

L'entrada són diversos cassos de llistes de participants. De la lectura
ja se n'encarrega el programa principal. La funció rep un **vector
ordenat** segons els punts de major a menor.

## Sortida

La sortida són els resultats per a cada llista. De l'escriptura també se
n'encarrega el programa principal.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T19:57:13.932Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
