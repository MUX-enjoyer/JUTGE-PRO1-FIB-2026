# Seqüència Pseudo-Morse

Una seqüència **pseudo-morse** és una seqüència que pot contenir aquests
tres símbols:

`                                  0 1 *`

Una subseqüència de 0's i 1's representa un enter en base 2 escrit a
l'inrevés. Per exemple, el 65 és, en binari:

$$01000001$$

però escrit a l'inrevés és:

$$10000010$$

En una seqüència pseudo-morse totes les subseqüències màximes de 0's i
1's representen un caràcter ASCII. Això vol dir que el caràcter `*`
separa subseqüències màximes. Per exemple, `10000010` representa el 65,
és a dir, el caràcter `A` (recordeu que escrivim amb el bit de menys pes
a l'esquerra de tot).

Cal fer un programa que llegeixi una seqüència pseudo-morse i que
transformi totes les subseqüències de 0's i 1's en caràcters ASCII.

Per exemple, la seqüència:

`                00010010 * 11110010 * 00110010 * 10000010 *`

representa la seqüència `HOLA`:

`                00010010 * 11110010 * 00110010 * 10000010 *`

`                  72         79         76         65`

`                  H          O          L          A`

No totes les subseqüències de 0's i 1's han de tenir la mateixa mida.
Per exemple, la seqüència:

`                00010010 * 1111001 * 0011001 * 1000001 *`

donaria el mateix resultat que la seqüència anterior (altrament dit: els
zeros a la dreta són opcionals).

## Observació

Com que llegireu caràcters, no cal que tingueu en compte els espais,
perquè quan feu `cin >> c` (on `char c;`) no agafa els espais.

Òbviament, no podeu fer servir la funció d'exponenciació ni tampoc no en
podeu implementar cap vosaltres (penalització de -8 punts a la correcció
manual).

El format de la seqüència d'entrada sempre serà: 0's i 1's i un `*`.

## Entrada

Pel canal d'entrada estàndard: una seqüència pseudo-Morse $S$.

## Sortida

La transformació en ASCII de la seqüència pseudo-Morse $S$.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T20:03:45.020Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
