# Control C202B

Feu un programa que donat un natural $n\geq 2$ seguit de $n$ nombres
reals $x_1, x_2,\ldots, x_n$, calculi la variança dels nombres fent
servir la fórmula $$\frac{1}{n-1}\sum_{i=1}^nx_i^2 \enspace - \enspace
\frac{1}{n(n-1)}\left(\sum_{i=1}^nx_i\right)^2 .$$ Per exemple, la
variança del 2, 3, i 5 és
$$\frac{1}{2} \big( 2^2 + 3^2 + 5^2 \big) \enspace - \enspace
\frac{1}{3 \cdot 2} \big(2 + 3 + 5 \big)^2
\enspace = \enspace
\frac{38}{2} - \frac{100}{6}
\enspace \simeq \enspace
2.33
\enspace .$$

## Entrada

L'entrada és un natural $n\geq 2$ seguit de $n$ nombres reals
$x_1, x_2,\ldots, x_n$.

## Sortida

Cal escriure el valor de la variança dels $n$ nombres donats amb
exactament dos dígits desprès del punt decimal. Per aconseguir-ho, poseu
aquestes dues línies a l'inici del \@main@:

        cout.setf(ios::fixed);
        cout.precision(2); 

## Informació del problema

Autoria: Professorat de P1

Generació: 2026-01-25T11:24:06.832Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
