# Rius digitals

Un riu digital és una seqüència de nombres on el nombre que segueix $n$
és $n$ més la suma dels seus dígits. Per exemple, 12345 ve seguit de
12360, perquè 12345+1+2+3+4+5 = 12360.

Si el primer número d'un riu digital és $k$, llavors anomenem aquella
seqüència riu $k$. Per exemple, el riu 480 és la sequencia 480, 492,
507, 519, \... i el riu 483 és la seqüència 483, 498, 519, \...

Igual que els rius amb aigua, els rius digitals poden trobar-se. Això
passa quan dos rius digitals comparteixen alguns dels seus valors. Per
exemple: El riu 480 es troba amb el riu 483 al valor 519, i es troba amb
el riu 507 al valor 507. En canvi, mai es troba amb el riu 481.

Es pot demostrar que qualsevol riu digital es trobarà eventualment amb
el riu 1, el riu 3 o el riu 9. Per això, feu la funció

        int trobada_de_rius(int n);

que, donat un natural $n$, retorni el primer valor per al qual el riu
$n$ troba els rius 1, 3 o 9.

## Precondició

Es té $1\le n \le16384$.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

Aquest problema prové de la "The British Informatics Olympiad for
schools and colleges".

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T11:18:45.943Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
