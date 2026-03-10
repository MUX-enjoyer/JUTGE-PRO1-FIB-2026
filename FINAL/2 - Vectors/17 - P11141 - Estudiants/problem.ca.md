# Estudiants

Usant la definició

        struct Estudiant {
            int dni;
            string nom;
            double nota;        // La nota és un valor entre 0 i 10, o -1 que representa NP
            bool repetidor;
        };

implementeu l'acció

        void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj)

que calculi la nota mínima (@min@), la nota màxima (@max@) i la nota
mitjana (@mitj@) de tots els estudiants de la taula \@es@ que s'hagin
presentat i que no siguin repetidors. Si no hi ha cap estudiant no
repetidor presentat, el valor d'aquestes tres variables ha de ser $-1$.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

Seguiu estrictament la definició dels tipus de l'enunciat.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T09:57:48.126Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
