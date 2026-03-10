# Nombres consecutius a distancia menor o igual a 1, només dos consecutius a distància 0.

En aquest exercici heu d'implementar una funció que rep un vector
d'enters que cumpleix el següent. Qualsevol parella de valors
consecutius d'aquest vector es troben a una distància menor o igual a 1.
Però, a més, només hi ha exactament una parella de valors consecutius
d'aquest vector que es troben a distància exactament 0, és a dir, que
son iguals. Per exemple, la següent seqüencia de valors cumpleix aquesta
condició:

    3 2 1 2 3 4 3 3 2 1 2 3 4 5 6 5

La funció ha de retornar la posició (indexant des de 0) del primer
element de la parella consecutiva que es troben a distància 0, és a dir,
que son iguals. Amb l'exemple anterior com a entrada, la funció ha de
retornar 6.

Aquesta és la capçalera:

    // Pre: Sigui n la mida v.size(). Llavors, n>=2.
    //      A més, per a cada i a {0..n-2}, es cumpleix |v[i]-v[i+1]|<=1.
    //      A més, hi ha exactament un i a {0..n-2} que cumpleix |v[i]-v[i+1]|=0.
    // Post: La funció retorna el i particular a {0..n-2} que cumpleix |v[i]-v[i+1]|=0.
    int positionDistance0(const vector<int> &v);

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Observació

Avaluació sobre 10 punts:

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost logarítmic i
capaç de superar els jocs de proves públics i privats. Entenem com a
solució lenta una que no és ràpida, però és correcta i capaç de superar
els jocs de proves públics.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T14:04:50.246Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
