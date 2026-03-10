# Paraules consecutives repetides

Donada una seqüència de paraules, escriviu la longitud de la
subseqüència consecutiva més llarga que només conté la primera paraula.
És a dir, si la seqüència és $s_1, \dots, s_n$, cal escriure
$$\mbox{màx}\{j - i + 1
      : 1 \le i \le j \le n
      \wedge s_i = s_{i+1} = \dots
      = s_{j-1} = s_j = s_1 \} .$$

## Entrada

L'entrada consisteix en una seqüència no buida de paraules.

## Sortida

Cal escriure el nombre de paraules de la subseqüència consecutiva més
llarga que només conté la primera paraula.

## Informació del problema

Autoria: Salvador Roura

Generació: 2026-01-25T10:16:56.256Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
