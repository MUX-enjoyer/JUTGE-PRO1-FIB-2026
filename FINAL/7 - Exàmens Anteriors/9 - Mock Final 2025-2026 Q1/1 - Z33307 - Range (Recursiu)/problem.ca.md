# Range (Recursiu)

Has de fer una funció **recursiva** tal que, donats dos enters `start` i
`end`, imprimeixi per pantalla tots els nombres enters des de `end` fins
a `start` (ambdós inclosos), de major a menor, separats per un sol
espai. Tota la sortida de la funció ha d'estar en una sola línia (sense
espais abans del primer nombre ni després de l'últim).

Aquesta és la declaració de la funció:

    /**
     * @brief Imprimeix per pantalla tots els enters des de end fins 
     *        a start (ambdós inclosos), de major a menor, separats 
     *        per un sol espai.
     *
     * @pre start > 0, end > 0, start <= end. 
     */
    void range(int start, int end);

## Observació

La icona de nom \".CPP\" conté el programa principal per fer proves.

Només has d'enviar un fitxer que contingui la funció requerida, amb els
`include` necessaris i les funcions auxiliars que hauràs declarat (si
n'hi ha), i **res més**.

Només acceptarem una solució recursiva. Una solució no recursiva
anul·larà l'exercici. Si cal, podeu fer servir funcions *auxiliars* no
recursives, però el gruix del càlcul ha de ser en la funció recursiva.

## Entrada

Diversos casos de prova. Cada cas de prova conté dos enters `start` i
`end`, amb `start > 0`, `end > 0` i `start <= end`.

## Sortida

Per a cada cas de prova, una línia amb tots els enters des de `end` fins
a `start` (ambdós inclosos), de major a menor, separats per un sol
espai.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T19:59:23.337Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
