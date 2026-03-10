# Comptar ocurrències de cada dígit en la seva fila i columna

Donada una matriu de dígits $u$, hem de crear una nova matriu de dígits
$v$ amb les mateixes dimensions, i on el dígit de cada posició es
calcula de la següent manera.

Sigui $i,j$ una posició de $u$, i sigui $d$ el dígit $u[i][j]$. Llavors
$v[i][j]$ és el nombre d'ocurrències de $d$ a $u$ en la fila $i$, més el
nombre d'ocurrències de $d$ a $u$ en la columna $j$, tot plegat mòdul
$10$ per a que ens torni a quedar un dígit.

Fixeu-vos que la ocurrència de $d$ a posició $i,j$ es comptarà dues
vegades, una per la fila $i$ i una altra per la columna $j$.

Per exemple, considereu aquesta matriu $u$:

    0044
    5233
    2221
    1150

Llavors, la matriu $v$ resultant és:

    3333
    2333
    4542
    3322

Per exemple, $u[1][1] = 2$. A la fila $1$ hi tenim un sol $2$. I a la
columna $1$ hi tenim dos $2$. Per aquest motiu
$v[1][1] = (1+2)\%10 = 3$.

## Entrada

L'entrada té varis casos. Cada cas comença amb dos naturals positius
$n,m$ en una primera línia. Després ve una matriu de $n\times{}m$ dígits
($n$ línies amb $m$ dígits cadascuna). Finalment ve una línia en blanc.

## Sortida

Per a cada cas, el programa ha d'escriure $n$ línies amb $m$ dígits
cadascuna, que és la matriu resultant, seguida d'una línia en blanc.

## Observació

Avaluació sobre 10 punts:

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost lineal i capaç
de superar els jocs de proves públics i privats. Entenem com a solució
lenta una que no és ràpida, però és correcta i capaç de superar els jocs
de proves públics.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T22:38:42.894Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
