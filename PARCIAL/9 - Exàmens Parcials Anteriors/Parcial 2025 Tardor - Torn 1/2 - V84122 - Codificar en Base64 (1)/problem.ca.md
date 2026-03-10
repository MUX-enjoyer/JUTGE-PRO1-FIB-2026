# Codificar en Base64 (1)

**Preliminars**

En base 2 tenim 2 dígits (`0` i `1`), en base 10 en tenim 10 (`0`, `1`,
`2`, \..., `9`), i en base 16 en tenim 16 (l'hexadecimal, que utilitza
`0`, `1`, `2`, \..., `9`, `A`, `B`, `C`, `D`, `E`, i `F`).

La **base 64** és doncs, simplement, una base amb molts més dígits. Però
donat que necessitem 64 símbols diferents per representar tots els
dígits, cal fer servir totes les lletres del codi ASCII (26 majúscules i
26 minúscules, en total 52), i tots els dígits decimals (0 a 9, en total
10). De fet això no és suficient, perquè ens dóna 62 símbols en total.
Per arribar als 64, es van escollir el '`+`' pel dígit 62 i '`/`' pel
63.

Les correspondències exactes entre dígits en base 64 i els seus
caràcters respectius són aquestes:

- Del 0 al 25, la corresponent lletra majúscula,

- del 26 al 51, la corresponent lletra minúscula,

- del 52 al 61, el corresponent dígit decimal,

- el 62 és el caràcter '`+`'; i

- el 63 és el caràcter '`/`'.

Així doncs, si mostrem els caràcters ASCII utilitzats, tots junts i per
ordre, en la codificació de base 64 (que, per cert, és un estàndard),
tenim:

    ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/

**Objectiu**

Fes una **funció** que, donat un valor en base 64 retorni el seu
caràcter associat. La funció té la capçalera:

    /**
     * @brief Passa un valor en base 64 a un caràcter.
     * @pre Precondició: `d` >= 0 i `d` <= 63
     */
    char base64_to_char(int d);

## Observació

Aquest problema té com a centres d'interès la **correctesa** i la
**llegibilitat**. Només cal enviar la funció demanada; el programa
principal serà ignorat. No es poden utilitzar les funcions `isupper`,
`islower` de la llibreria estàndard.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T13:12:52.185Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
