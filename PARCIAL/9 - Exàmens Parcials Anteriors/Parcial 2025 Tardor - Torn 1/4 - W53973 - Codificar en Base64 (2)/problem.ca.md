# Codificar en Base64 (2)

*(Aquest problema fa servir la funció `base64\_to\_char` del problema
\"Codificar en Base64 (1)\".)*

Es tracta de fer un programa que, donada una seqüència de bytes a
l'entrada (naturals entre 0 i 255), la **codifiqui en base 64**. La
codificació funciona de la següent manera, i treballa amb tripletes de 3
bytes:

1.  Primer, cada 3 bytes d'entrada $B_1$, $B_2$ i $B_3$, construïm un
    enter $x$ en base 256 de la següent manera:

    $$x = (B_1 \cdot 256 + B_2) \cdot 256  + B_3$$

2.  Després, reinterpretem $x$ en base 64 i n'extraiem les xifres, que
    ara són 4: $d_1$, $d_2$, $d_3$, i $d_4$. El procés és totalment
    anàleg a extreure les xifres d'un nombre en base 10, però en
    base 64. El que estem fent és calcular els dígits $d_i$ de la
    fórmula següent:

    $$x = ((d_1 \cdot 64 + d_2) \cdot 64 + d_3) \cdot 64 + d_4$$

    *(Cal recordar que el procés d'extracció de xifres treballat a PRO1
    produeix les xifres al **revés**, és a dir, començant per $d_4$.)*

3.  Per últim, usant la funció `base64_to_char` convertim $d_1$, $d_2$,
    $d_3$ i $d_4$ en caràcters i els mostrem a la sortida en aquest
    ordre.

Si la seqüència d'entrada no té un llargada múltiple de 3, just al
final, tindrem un grup de només 1 o 2 bytes:

- Si tenim un grup de 2 bytes: assignem $B_3 = 0$, i seguim igualment
  els passos de la codificació. Un cop amb les xifres $d_i$, canviem
  $d_4$ pel caràcter '`=`'.

- Si tenim un grup d'1 byte: assignem $B_2 = 0$ i $B_3 = 0$, i seguim
  igualment els passos de la codificació. Un cop amb les xifres $d_i$,
  canviem tant $d_3$ com $d_4$ pel caràcter '`=`'.

## Entrada

L'entrada consisteix en diverses seqüències de bytes. Cadascuna comença
amb un enter $n$ que indica el nombre de bytes que segueixen i després
hi ha $n$ bytes, a on cadascún és només un nombre natural entre 0 i 255
(ambdós inclosos).

## Sortida

La sortida ha de ser una línia per a cada cas amb la codificació en base
64 de la seqüència de bytes de l'entrada, sense espais entre els
caràcters.

## Observacions

- Aquest problema té com a centre d'interès la **correctesa** i la
  **llegibilitat**. Sobre la llegibilitat, es valorarà que el programa
  utilitzi funcions per evitar repetició i separar les diverses tasques.

- Si teniu la funció `base64_to_char` i el Jutge us l'ha acceptat,
  useu-la directament. Si no, copieu la següent definició:

      char base64_to_char(int d) {
          static char _syms[65] =
              "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
              "abcdefghijklmnopqrstuvwxyz"
              "0123456789+/";
          return _syms[d];
      }

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T13:19:01.988Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
