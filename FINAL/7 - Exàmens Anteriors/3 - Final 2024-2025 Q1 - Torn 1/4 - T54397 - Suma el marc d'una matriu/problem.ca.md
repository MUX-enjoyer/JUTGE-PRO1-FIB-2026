# Suma Marc d'una Matriu

Sigui $M$ una matriu quadrada $N \times N$. Aquesta matriu té diferents
**marcs**. El marc $0$ està format per les files $0$ i $N-1$ i les
columnes $0$ i $N-1$. El marc $1$ està format per les files $1$ i $N-2$
i les columnes $1$ i $N-2$, excloent les parts que són part del marc
$0$, etc.

En el següent exemple, teniu que el marc $0$ el formen totes les
posicions en què hi ha un $0$, el marc $1$ les posicions en què hi ha un
$1$, i el marc $2$ les posicions en què hi ha un $2$:

                              0  0  0  0  0
                              0  1  1  1  0
                              0  1  2  1  0
                              0  1  1  1  0
                              0  0  0  0  0

Cal implementar la funció `int sumaMarc(const Matriu& m, int x);` amb la
següent especificació:

`PRE: ` $m$ una matriu $N \times N$ i $0 \leq x < N/2 + (N~mod~2)$.

`POST:` Torna la **suma** dels elements del **marc** $x$ d'$M$.

## Observació

Només cal que envieu la funció que us demanem i les funcions que
vosaltres definiu. La resta no es tindrà en compte.

## Entrada

Una matriu $N \times N$ i $0 \leq x < N/2 + (N~mod~2)$.

## Sortida

La **suma** dels elements del **marc** $x$ d'$M$.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T12:53:51.684Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
