# Buscar distancia d en vector amb distàncies consecutives estríctament creixents

Heu d'implementar una funció que rep un natural $d$ i un vector $v$ amb
dos o més elements i que cumpleix la següent condició: la successió de
distàncies entre cada dos elements consecutius de $v$ és estrictament
creixent, és a dir $|v[0]-v[1]| < |v[1]-v[2]| < |v[2]-v[3]| < \cdots$.
Per exemple, la següent seqüència cumpleix aquesta condició:

    3 2 4 8 0 -10 -22 -8 7

Fixeu-vos que la distància entre el primer i el segon element és 1, la
distancia entre el segon i el tercer és 2, entre el tercer i el quart és
4, entre el quart i el cinquè és 8, entre el cinquè i el sisè és 10,
entre el sisè i el setè és 12, entre el setè i el vuitè és 14, i entre
el vuitè i el novè és 15. Queda clar, doncs, que la seqüència de
distàncies consecutives és creixent.

En cas que hi hagi una parella d'elements consecutius a distància $d$,
la funció ha de retornar la posició (indexant des de 0) del primer
element d'aquesta parella. En cas contrari, la funció ha de retornar -1.
En l'exemple anterior, amb $d=12$ la funció ha de retornar $5$, i amb
$d=6$ la funció ha de retornar $-1$. Aquesta és la capcelera:

    // Pre: Let n be v.size(). n>=2 and d>=0 and |v[0]-v[1]| < |v[1]-v[2]| < ... < |v[n-2]-v[n-1]|
    // Post: If there exists i in {0..n-2} holding |v[i]-v[i+1]| = d, then the function returns this i.
    //       Otherwise, it returns -1.
    int findDistance(int d, const vector<int> &v);

Els jocs de proves privats miren de comprovar que la vostra solució és
de cost logarítmic.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Observació

Podeu utilitzar la funció `abs` de `cmath` si voleu. Avaluació sobre 10
punts:

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost logarítmic i
capaç de superar els jocs de proves públics i privats. Entenem com a
solució lenta una que no és ràpida, però és correcta i capaç de superar
els jocs de proves públics.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T16:04:30.399Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
