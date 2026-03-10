# Canvi Recursiu

Donat un enter $n \geq 1$ que representa una quantitat d'euros, la
**descomposició màxima** és una llista d'enters $e_1 e_2 e_3 \dots e_n$
(que només poden ser 25, 5, 2 o 1, potser repetits) tals que:

1.  $n = e_1 + e_2 + e_3 + \dots + e_n$.

2.  De totes les possibles combinacions que compleixen l'anterior
    condició, ha de ser la que tingui les monedes més grans possibles.

Per exemple, si $n = 15$ podria tornar el canvi amb monedes de 2 i 1
euros:

$$15 = 2+2+2+2+2+2+2+1$$

o fins i tot només amb monedes de 5, 2 i 1 euro:

$$15 = 5+2+2+2+2+2$$

però cap d'aquestes solucions seria correcta, ja que la solució correcta
és la que fa servir el màxim de monedes de 5:

$$15 = 5+5+5$$

Fes una **funció** `canvi` amb la següent declaració:

    /*
     * Torna el canvi de x en monedes de 25, 5, 2 i 1 euros.
     * El canvi cal que contingui les monedes més grans possibles.
     * Només una solució recursiva.
     */
    void canvi(int x);

## Observació

Només has d'enviar un fitxer que contingui la funció requerida, amb els
`include` necessaris i les funcions auxiliars que hauràs declarat (si
n'hi ha), i **res més**.

Només acceptarem una solució recursiva. Si cal, podeu fer servir
funcions *auxiliars* no recursives, però el gruix del càlcul ha de ser
en la funció recursiva.

## Entrada

Enters més grans que zero.

## Sortida

Per a cada enter, la descomposició màxima en monedes de 25,5,2 i 1
euros.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T12:53:12.672Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
