# Rectangles (1)

En un popular gestor de finestres, s'usa la definició següent per
mantenir la informació de les finestres visibles a la pantalla de
l'ordinador:

        struct Rectangle {
            int x_esq, x_dre, y_baix, y_dalt;
        };

Aquí, els rectangles tenen els costats paral·lels als eixos \@x@ i \@y@,
i \@x_esq@, \@x_dre@, \@y_baix@ i \@y_dalt@ són respectivament la mínima
coordenada horitzontal, la màxima coordenada horitzontal, la mínima
coordenada vertical i la màxima coordenada vertical de cada rectangle.

Feu un procediment que llegeixi un rectangle:

        void llegeix(Rectangle& r);

el qual ve donat a l'entrada amb els quatre enters \@x_esq@, \@x_dre@,
\@y_baix@ i \@y_dalt@ en aquest ordre.

Feu també una funció que indiqui la relació que tenen dos rectangles
\@r1@ i \@r2@ donats:

        int relacio(const Rectangle& r1, const Rectangle& r2);

Cal que la funció retorni 1 si \@r1@ és interior a \@r2@, 2 si \@r2@ és
interior a \@r1@, 3 si cap rectangle és interior a l'altre però els
rectangles intersecten, 4 si els rectangles són idèntics, i 0 altrament
(si els rectangles no tenen cap punt en comú).

Suposeu que dos rectangles intersecten fins i tot si coincideixen només
en un segment o només en un punt. A més, suposeu que tots els rectangles
estan ben formats, és a dir, que \@x_esq@ és estrictament més petit que
\@x_dre@, i que \@y_baix@ és estrictament més petit que \@y_dalt@.

Useu aquestes definicions i procediments per fer un programa que
llegeixi una sèrie de parells de rectangles, i per a cadascun escrigui
quina relació tenen.

## Entrada

L'entrada consisteix en un natural $n$, seguit de $n$ línies, cadascuna
amb dos rectangles (vuit nombres enters).

## Sortida

Per a cada parell de rectangles, cal escriure la seva relació segons es
mostra en els exemples.

## Informació del problema

Autoria: Salvador Roura

Generació: 2026-01-25T11:23:31.209Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
