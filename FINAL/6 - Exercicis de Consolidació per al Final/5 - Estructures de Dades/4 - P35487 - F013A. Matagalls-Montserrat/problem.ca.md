# F013A. Matagalls-Montserrat

Una coneguda caminada popular és molt dura, i alguns dels inscrits no la
poden acabar. D'altra banda, n'hi ha que hi participen sense haver-s'hi
inscrit.

Els organitzadors disposen d'aquesta informació:

- Una llista $L_1$ amb els noms dels qui van acabar (estiguessin
  inscrits o no), junt amb l'hora d'arribada. Aquesta llista està
  ordenada per nom, i totes les hores són diferents.

- Una llista desordenada $L_2$ amb el dni i el nom dels participants
  inscrits. Cap dels noms i cap dels dnis no està repetit.

Feu un programa que, per a cada participant de $L_2$, identificat pel
seu dni, escrigui la seva hora d'arribada. Cal tenir en compte:

- Alguns dels inscrits de $L_2$ no aconsegueixen acabar. En aquest cas,
  no apareixen a $L_1$.

- Si acaben dos o més participants amb el mateix nom, i algun d'ells
  estava a $L_2$, llavors no és possible conèixer amb certesa la seva
  hora d'arribada.

- Si un nom de $L_2$ apareix un cop a $L_1$, se suposa que es correspon
  a la mateixa persona.

Per resoldre aquest problema, useu la definició següent:

        struct Info {
            string nom, hora;
        };

Usant aquesta definició, implementeu i useu una funció *eficient*

        string busca(string nom, const vector<Info>& v) {

que retorni l'hora corresponent a `nom` dins de la taula *ordenada per
nom* `v`. Si `nom` hi està repetit, cal retornar `"???"`. Si `nom` no hi
és, cal retornar `"ABANDONA"`. Aquesta `v` ha de contenir tota la
informació de la $L_1$ de l'entrada, noms repetits inclosos.

## Entrada

L'entrada té $L_1$ i $L_2$ separades amb una línia en blanc. $L_1$
comença amb un natural $n$, i segueix amb $n$ línies, cadascuna amb un
nom i una hora. $L_2$ té una sèrie de parells dni nom. $L_1$ està
ordenada per nom. Aquest és l'únic camp de l'entrada amb possibles
repetits. Per comoditat, tracteu tota l'entrada (excepte $n$) com si
fossin strings.

## Sortida

Per a cada dni de cada línia de $L_2$, escriviu una línia amb la seva
hora d'arribada, `"???"` o bé `"ABANDONA"` segons convingui. Segui el
format dels exemples.

## Observació

El vostre programa ha de ser eficient. Les solucions que no ho siguin
seran rebutjades, ja sigui directament pel Jutge o en la posterior
correcció manual.

## Informació del problema

Autoria: Professorat de P1

Generació: 2026-01-25T10:25:46.825Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
