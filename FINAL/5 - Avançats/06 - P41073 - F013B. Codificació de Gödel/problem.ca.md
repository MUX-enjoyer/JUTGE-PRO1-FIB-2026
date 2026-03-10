# F013B. Codificació de Gödel

![image](godel.png){width="4cm"}

Considereu la seqüència infinita de nombres primers: $p_0 = 2$,
$p_1 = 3$, $p_2 = 5$, etcètera. Per a cada nombre $s$ de $n$ xifres
$s = s_os_1\dots s_{n-1}$, la seva *codificació de Gödel* es defineix
com $$\prod_{0 \le i < n} p_i^{s_i}
\enspace = \enspace p_0^{s_0} \cdot p_1^{s_1} \dots p_{n-2}^{s_{n-2}} \cdot p_{n-1}^{s_{n-1}}$$
Per exemple, la codificació de Gödel de 4031 és
$2^4 \cdot 3^0 \cdot 5^3 \cdot 7^1 = 16 \cdot 1 \cdot 125 \cdot 7 = 14000$.

Feu un programa que llegeixi nombres i escrigui la seva codificació de
Gödel.

## Entrada

L'entrada consisteix en diversos nombres, amb possibles zeros a
l'esquerra. Els nombres primers necessaris per a les codificacions dels
nombres donats són tots més petits que $4 \cdot 10^6$.

## Sortida

Per a cada nombre de l'entrada, cal escriure una línia amb aquell nombre
i la seva codificació, seguint el format de l'exemple. Suposeu que les
codificacions no tindran mai sobreeiximents.

## Observacions

Alguns dels nombres donats seran molt llargs, o tindran zeros a
l'esquerra. Feu servir \@string@s per llegir i tractar aquests nombres.
A més, el vostre programa ha de ser eficient. Useu el garbell
d'Eratòstenes per calcular tots els primers fins a $4 \cdot 10^6$ al
principi del programa.

## Informació del problema

Autoria: Professorat de P1

Generació: 2026-01-25T11:04:26.729Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
