# Vector E

Un **vector E** (de **E**sglaó) és un vector d'enters compost de dues
parts:

$$v = x ~ x ~ \stackrel{n}\ldots ~ x \quad y ~ y ~ \stackrel{m}\ldots ~ y$$

és a dir, una seqüència de $n$ valors $x$, tots iguals, seguida d'una
seqüència de $m$ valors $y$ tots iguals. A més, $n, m > 0$, per tant cap
de les dues parts és buida, i $x \neq y$.

Cal implementar la **funció** `busca_esglao` amb la següent
especificació:

    /**
     * @brief  Donat un vector esglaó, busca la posició de 
     * l'element just passat l'esglaó (la primera 'y').
     * 
     * @pre  v = [x, ...(n)..., x, x, y, ...(m)..., y, y]
     *       amb n, m >= 1, 'x' != 'y'.
     * 
     * @returns  La posició de la primera 'y'.
     */
    int busca_esglao(const vector<int>& v);

## Observació

Cal enviar la funció `busca_esglao`, amb `#include`s i funcions
auxiliars, si cal. Si descarregueu l'arxiu `main.cc` de la icona
\"**.CPP**\", esborreu (o comenteu amb `/*` i `*/`) les funcions `main`
i `llegeix_vector`.

## Entrada

Una seqüència de vectors E, cadascun en una línia, i amb un enter al
principi de la línia indicant-ne la longitud.

## Sortida

Per a cada vector E, la posició de l'esglaó (el primer valor de la
segona part).

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T13:04:51.742Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
