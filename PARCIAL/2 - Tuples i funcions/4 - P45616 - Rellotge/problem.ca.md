# Rellotge

Usant la definició

        struct Rellotge {
            int h;      // hores    (0<=h<24)
            int m;      // minuts   (0<=m<60)
            int s;      // segons   (0<=s<60)
        };

implementeu les funcions i accions següents:

        Rellotge mitja_nit();
        void incrementa(Rellotge& r);
        void escriu(const Rellotge& r);

La funció \@mitja_nit()@ retorna un rellotge inicialitzat a mitja nit
(00:00:00). L'acció \@incrementa()@ avança el rellotge d'un segon.
L'acció \@escriu()@ escriu l'hora del rellotge en format \@HH:MM:SS@ en
una línia.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

Seguiu estrictament la definició dels tipus de l'enunciat.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T11:18:59.706Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
