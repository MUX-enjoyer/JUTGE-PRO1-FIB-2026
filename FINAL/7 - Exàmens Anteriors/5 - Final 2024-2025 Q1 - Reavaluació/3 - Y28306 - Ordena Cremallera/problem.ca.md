# Ordena Cremallera

Un **vector cremallera** és un vector de longitud $2n$, essent $n > 0$,
tal que els elements estan entrellaçats de la forma

$$x_1, y_1, x_2, y_2, \ldots, x_n, y_n$$

Tant la seqüència d'elements $x_i$ com $y_i$ són estrictament creixents.
És a dir, $x_i < x_{i+1}$ i $y_i < y_{i+1}$, amb $1 \leq i < n$.

Cal implementar la **funció** `ordena_cremallera` amb la següent
especificació:

    /**
     * @brief  Ordena un vector "cremallera" format per elements 
     *         entrellaçats, retornant el vector resultat.
     * 
     * @returns  Un vector amb els elements ordenats de menor a major.
     * 
     * @pre   v = {x_1, y_1, x_2, y_2, ..., x_n, y_n}, n > 0. 
     *        x_i < x_{i+1}, y_i < y_{i+1}, per a tot i.
     */
    vector<double> ordena_cremallera(const vector<double>& v);

## Observació

Cal enviar la funció `ordena_cremallera`, amb `#include`s i funcions
auxiliars, si cal, però sense `main`. Si descarregueu l'arxiu `main.cc`
de la icona \".CPP\", podeu esborrar (o comentar amb `/*` i `*/`) les
funcions `main` i `llegeix_vector`.

## Entrada

Una seqüència de vectors cremallera, cadascun en una línia, i amb un
enter al principi de la línia indicant-ne la longitud.

## Sortida

El vector resultant de la ordenació, en una línia i amb espais entre els
elements.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T19:55:24.033Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
