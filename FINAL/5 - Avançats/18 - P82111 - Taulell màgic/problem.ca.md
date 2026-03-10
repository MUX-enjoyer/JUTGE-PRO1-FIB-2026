# Taulell màgic

Un *taulell màgic d'ordre $k$* és una matriu de $k\times k$ lletres de
forma que a cada fila i a cada columna hi apareix una paraula del
diccionari i que les mateixes paraules es llegeixen horitzontalment i
verticalment. Per exemple, a continuació es dónen diversos taulells
màgics d'ordre tres a vuit en anglès:

      B I T    C A R D    H E A R T    G A R T E R    B R A V A D O    L A T E R A L S
      I C E    A R E A    E M B E R    A V E R S E    R E N A M E D    A X O N E M A L
      T E N    R E A R    A B U S E    R E C I T E    A N A L O G Y    T O E P L A T E
               D A R T    R E S I N    T R I B A L    V A L U E R S    E N P L A N E D
                          T R E N D    E S T A T E    A M O E B A S    R E L A N D E D
                                       R E E L E D    D E G R A D E    A M A N D I N E
                                                      O D Y S S E Y    L A T E E N E R
                                                                       S L E D D E R S

Feu un programa que llegeixi un diccionari i digui si diverses matrius
de caràcters són o no taulells màgics.

## Entrada

L'entrada té dues parts:

- La primera part és un diccionari de $n$ paraules. Primer, es dóna el
  valor de $n$. A continuació, venen les $n$ paraules del diccionari
  (totes en majúscules) en ordre lexicogràfic.

- La segona part són diverses matrius de caràcters. Cada matriu comença
  amb un enter $k$ que en dóna el seu nombre de files i columnes i
  continua amb $k^2$ caràcters (tots lletres majúscules) disposats en
  $k$ files i $k$ columnes. El valor $k=0$ indica el final de l'entrada.

## Sortida

Per a cada matriu de l'entrada, cal escriure "\@SI@" si forma un taulell
màgic utilitzant algunes de les paraules del diccionari i cal escriure
"\@NO@" altrament.

## Observació

En els jocs de proves privats s'utilitza un diccionari derivat de
@/usr/share/dict/words@ amb unes quatre centes mil paraules i es proven
un miler de matrius.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T11:56:26.133Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
