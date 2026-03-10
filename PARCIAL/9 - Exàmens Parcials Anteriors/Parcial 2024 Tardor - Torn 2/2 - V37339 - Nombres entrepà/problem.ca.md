# Nombres entrepà

Definim com a número *entrepà* un natural $n$ amb només dos dígits $d$ i
$e$ diferents, que formen una seqüència $de_1e_2\cdots e_kd$. És a dir,
el digít $d$ és el primer i l'últim dígit de $n$ (és el pa), i el dígit
$e$ està repetit $k \geq 1$ vegades entremig dels dos dígits $d$ (és
l'embotit o el farciment). Per exemple, 121 és un número entrepà amb
$d = 1$, $e = 2$, i $k = 1$. El 4004 és un número entrepà amb $d = 4$,
$e = 0$, i $k = 2$.

Més exemples de números entrepà: 7227, 41114, 966669, 10001 i 535.\
Exemples de números que **no** són entrepà: 9, 12, 113311, 7878, 1234,
9991, 1000.

Implementa una **funció** `is_sandwich` que rep un nombre natural i
retorna `true` si és un número entrepà i `false` en cas contrari.

La capçalera de la funció ha de ser:

    /**
     * @pre  n >= 0
     * @post retorna cert si n és un número entrepà, fals en cas contrari
     */
    bool is_sandwich(int n);

## Observació

Només cal enviar la funció demanada; el programa principal serà ignorat.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T13:08:40.923Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
