# Primer digits senars (1,3,5,7,9), després dígits parells positius (2,4,6,8)

Feu un programa tal que, per a cada natural positiu `x` d'entrada,
escrigui dos nombres naturals `y,z` separats per un espai en blanc. El
natural `y` està format per la subseqüència de dígits de `x` que son
senars (és a dir, del conjunt `{1,3,5,7,9}`), seguida de la subseqüència
de dígits de `x` que son parells i positius (és a dir, del conjunt
`{2,4,6,8}`). El natural `z` és simplement el doble de `y`, és a dir,
`z == 2*y`.

Per exemple, si `x` és 250813126, llavors el programa ha d'escriure en
primer lloc el natural 51312826, doncs la subseqüència de dígits senars
de `x` és 5131, i la subseqüència de dígits parells i positius de `x` és
2826. En segon lloc, el programa ha d'escriure 102625652, doncs és el
doble de 51312826.

## Entrada

L'entrada consisteix en varis casos de naturals positius `x`, cadascun
en una línia.

## Sortida

Per a cada `x` d'entrada, el programa escriu els corresponents `y,z` en
una nova línia, i separats per un espai en blanc.

## Observació

No es pot utilitzar cap mètode d'emmagatzemament massiu de dades, ni tan
sols `string`. Resoleu aquest exercici utilitzant només el tipus `int` i
manipulant enters amb operacions bàsiques (`+,-,*,/,%`).

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T22:02:10.357Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
