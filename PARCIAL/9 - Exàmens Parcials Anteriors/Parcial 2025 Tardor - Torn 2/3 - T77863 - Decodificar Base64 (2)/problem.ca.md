# Decodificar Base64 (2)

*(Aquest problema fa servir la funció `char\_to\_base64` del problema
\"Decodificar Base64 (1)\".)*

Es tracta de fer un programa que, donada una seqüència de caràcters a
l'entrada (un dels 64 que representen els dígits de base 64), la
**decodifiqui en els seus bytes**. La decodificació funciona de la
següent manera:

1.  Primer, per a cada grup de 4 caràcters (o quartet) de l'entrada
    $c_1$, $c_2$, $c_3$ i $c_4$, els transformem en els seus dígits
    corresponents. $d_1$, $d_2$, $d_3$, $d_4$, usant la funció
    `char_to_base64`.

2.  Després, amb els 4 dígits $d_i$ reconstruim el natural $x$ aplicant
    la fórmula:

    $$x = ((d_1 \cdot 64 + d_2) \cdot 64 + d_3) \cdot 64 + d_4$$

3.  Tot seguit, reinterpretem $x$ en base 256, i n'extraiem les xifres,
    que ara són 3: $B_1$, $B_2$, i $B_3$. El procés és totalment anàleg
    a extreure les xifres d'un nombre en base 10, però en base 256. El
    que haurem fet és calcular els dígits $B_i$ de la fórmula següent:

    $$x = (B_1 \cdot 256 + B_2) \cdot 256  + B_3$$

    *(Cal recordar que el procés d'extracció de les xifres treballat a
    PRO1 produeix les xifres al **revés**, començant per $B_3$)*

4.  Finalment, mostrem $B_1$, $B_2$ i $B_3$ com a nombres naturals per
    pantalla, en aquest ordre.

La codificació en base 64 sempre té un nombre de caràcters múltiple de
4, però just al final de la seqüència pot haver-hi '`=`' o '`==`', que
ens diu que el número de bytes de l'últim quartet són 2 o 1, i no 3:

Si l'últim quartet té algun '`=`' al final:

- Si té '`==`': el número de bytes serà 1; assignem $d_3 = 0$ i
  $d_4 = 0$, decodifiquem segons els passos anteriors, però només
  mostrem $B_1$ per pantalla.

- Si té '`=`': el número de bytes és 2; assignem $d_4 = 0$, decodifiquem
  segons els passos anteriors, però només mostrem $B_1$ i $B_2$ per
  pantalla.

## Entrada

L'entrada consisteix en diversos casos, a on cada cas és una seqüència
de caràcters acabada en punt en una línia.

## Sortida

La sortida ha de ser una línia per a cada cas amb els bytes com a
nombres naturals. Abans de cada byte, inclòs el primer, hi ha d'haver un
espai.

## Observació

- Aquest problema té com a centres d'interès la **correctesa** i la
  **llegibilitat**. En particular, es valorarà que el programa utilitzi
  funcions per evitar repetició i separar les diverses tasques.

- Si teniu la funció `char_to_base64` i el Jutge us l'ha acceptat,
  useu-la directament. Si no, copieu la següent definició, (i afegiu
  `#include <algorithm>`):

      int char_to_base64(char c) {
          static char _syms[65] =
              "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
              "abcdefghijklmnopqrstuvwxyz"
              "0123456789+/";
          return std::find(_syms, _syms + 64, c) - _syms;
      }

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T12:55:34.913Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
