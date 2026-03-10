# Centre de masses de partícules que es mouen a velocitat constant

**Preliminars**

En aquest exercici implementarem un programa que escriu nombres reals
per la sortida. Degut a problemes de format i d'eficiència de `cin` i
`cout` quan treballen amb nombres reals, convé fer algunes coses que
mencionem a continuació.

Al principi de la funció `main` haurieu de posar aquestes instruccions:

    	ios::sync_with_stdio(false);
    	cin.tie(0);    
    	cout.setf(ios::fixed);
    	cout.precision(5);

Per a escriure reals per la sortida, convé que inclogueu i useu aquesta
funció:

    void printDouble(double d)
    {
    	if (abs(d) < 1e-7)
    		cout << 0.0;
    	else
    		cout << d;
    }

Per últim, i no per això menys important, no useu `endl` per a escriure
salts de línia. Useu `’\n’` enlloc seu. És a dir:

    	// This line has been replaced with next one:
    	// cout << endl;
    	cout << '\n';

**Exercici**

**Nota:** En aquest exercici parlarem de posicions de partícules en un
sistema 3-dimensional, i de les seves velocitats i masses. El sistema de
referència i d'unitats no és massa rellevant, sempre i quan se n'esculli
un de més o menys estandar i raonable. Per si algú en sent necessitat,
us podeu imaginar que parlem de metres, segons, metres per segon i
kilograms.

Tindrem com a entrada la posició, velocitat i massa de $n$ partícules
$(p_1,v_1,m_1),\ldots,(p_n,v_n,m_n)$. En particular, la primera
partícula es troba a posició $p_1$ en temps $0$, es desplaça a velocitat
constant $v_1$, i té massa $m_1$. Se suposa que tot s'expressa en un
sistema cartesià de coordenades de tres dimensions.

També tenim com a entrada $k$ valors de temps $t_1,\ldots,t_k$.

Haurem de determinar el centre de masses de les $n$ partícules després
de $t_1$ unitats de temps, després de $t_1+t_2$ unitats de temps,
després de $t_1+t_2+t_3$, ..., després de $t_1+\cdots+t_k$ unitats de
temps.

És obligatori utilitzar coherentment les següents declaracions de tipus,
i implementar i utilitzar coherentment les següents funcions. En cas
contrari, s'invalidarà l'entrega. Podeu declarar més tipus de dades i
implementar més funcions si voleu, i de fet és recomanable fer-ho.

    struct Point {
    	double x, y, z;
    };

    struct Particle {
    	Point p,v;
    	double m;
    };

    // Pre:
    // Post: returns the sum of p1 and p2.
    Point sum(Point p1, Point p2)
    {
    	//...
    }

    // Pre:
    // Post: returns a times p.
    Point mul(double a, Point p)
    {
    	//...
    }

**Nota:** Us recomanem començar fent una implementació senzilla per tal
de superar els jocs de proves públics, i després mirar d'optimitzar-la
per tal se superar també els jocs de proves privats.

## Entrada

L'entrada té varis casos. Cada cas comença amb dos naturals positius
$n, k$ en una primera línia. Després venen $n$ línies, cadascuna
descrivint la posició (tres enters), velocitat (tres enters) i massa (un
natural positiu) d'una partícula. Finalment venen $k$ línies, cadascuna
amb un natural positiu que representa un temps transcorregut.

## Sortida

Per a cada cas, primer s'han d'escriure $k$ línies, on la $i$-éssima
línia conté el centre de masses (tres reals arrodonits a 5 dígits
després del punt decimal) de totes les partícules després de la suma
dels $i$ primers temps. Finalment, s'han d'escriure $n$ línies, amb les
posicions (tres reals arrodonits a 5 dígits després del punt decimal) de
les partícules després de la suma de tots els instants de temps. Cada
cas ve seguit d'una línia en blanc.

## Observació

Avaluació sobre 10 punts:

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost lineal i capaç
de superar els jocs de proves públics i privats. Entenem com a solució
lenta una que no és ràpida, però és correcta i capaç de superar els jocs
de proves públics.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T15:02:28.410Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
