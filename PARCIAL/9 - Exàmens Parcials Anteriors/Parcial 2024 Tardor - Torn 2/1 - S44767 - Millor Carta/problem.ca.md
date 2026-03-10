# Millor Carta

Escriu una **funció** que donades dues cartes de Poker retorni `true` si
el valor de la primera carta és major que el valor de la segona carta.
Les cartes són les de la baralla de Poker habitual, representades amb un
dels 13 caràcters següents: `A`, `2`, `3`, \..., `9`, `0`, `J`, `Q`,
`K`. Hi ha dos caràcters especials: la carta `A` és l'As i equival a
l'1, tal com en les baralles normals, i el dígit `0` representa el 10,
per simplificar la lectura. Fixeu-vos que les cartes identificades amb
una lletra sempre són majúscules.

Els valors de les cartes són els següents: les cartes numèriques tenen
el valor que indica el seu número. La carta `0` tindrà el valor 10, pel
fet que representa la carta 10. Tot seguit, la `J` val 11, la `Q` val 12
i la `K` val 13. L'`A` valdria 1, però en aquest problema considerarem
que té el valor més alt (com es fa sovint), i serà 14.

La capçalera de la funció és, exactament:

    /**
     * @pre c1, c2 en {A, 2, 3, ..., 8, 9, 0, J, Q, K}
     * @post Retorna cert si c1 té un valor més alt que c2
     */
    bool better_card(char c1, char c2);

## Observació

Només cal enviar la funció demanada; el programa principal serà ignorat.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T12:45:25.138Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
