# Nombres bicolor

Definim com a número *bicolor* un natural $n$ amb només dos dígits
diferents que estan repetits en dos blocs (o \"colors\"). Més
formalment, la seqüència de dígits de $n$ és
$d_1d_2\ldots d_ke_1e_2\ldots e_l$, on $d$ i $e$ són els dos dígits i,
$d\neq e$, $k > 0$ i $l > 0$.

Exemples de números bicolor: 7722, 44111, 666699, 277 i 45.\
Exemples de números que **no** són bicolor: 121, 113311, 7878, 1234, 7,
99910.

Implementa una **funció** `is_bicolor` que rep un natural i determina si
és bicolor. La funció rep un número $n >= 0$ i retorna `true` si és
bicolor i `false` en cas contrari.

La capçalera de la funció ha de ser:

    /**
     * @pre  n >= 0
     * @post retorna cert si n és bicolor, fals en cas contrari
     */
    bool is_bicolor(int n);

## Observació

Només cal enviar la funció demanada; el programa principal serà ignorat.

## Informació del problema

Autoria: PRO1

Generació: 2026-03-05T08:50:13.138Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
