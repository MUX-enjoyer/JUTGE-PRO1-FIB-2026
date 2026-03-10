# Cruz recursiva

Haz un programa que escriba por pantalla diseños como el que se muestra
a continuación, que corresponde a $n=3$.

                 |
                -O-
                 |
              |  |  |
             -O--O--O-
              |  |  |
                 |
                -O-
                 |
        |        |        |
       -O-      -O-      -O-
        |        |        |
     |  |  |  |  |  |  |  |  |
    -O--O--O--O--O--O--O--O--O-
     |  |  |  |  |  |  |  |  |
        |        |        |
       -O-      -O-      -O-
        |        |        |
                 |
                -O-
                 |
              |  |  |
             -O--O--O-
              |  |  |
                 |
                -O-
                 |

Esto puede parecer complicado, a menos que te des cuenta que en realidad
este diseño no es más que repetir 5 veces la solución para $n=2$,

                 |
                -O-
                 |
              |  |  |
             -O--O--O-
              |  |  |
                 |
                -O-
                 |

tal y como se muestra a continuación,

    -------------------------------
    |         |    |    |         |
    |         |   -O-   |         |
    |         |    |    |         |
    |         | |  |  | |         |
    |         |-O--O--O-|         |
    |         | |  |  | |         |
    |         |    |    |         |
    |         |   -O-   |         |
    |         |    |    |         |
    -------------------------------
    |    |    |    |    |    |    |
    |   -O-   |   -O-   |   -O-   |
    |    |    |    |    |    |    |
    | |  |  | | |  |  | | |  |  | |
    |-O--O--O-|-O--O--O-|-O--O--O-|
    | |  |  | | |  |  | | |  |  | |
    |    |    |    |    |    |    |
    |   -O-   |   -O-   |   -O-   |
    |    |    |    |    |    |    |
    -------------------------------
    |         |    |    |         |
    |         |   -O-   |         |
    |         |    |    |         |
    |         | |  |  | |         |
    |         |-O--O--O-|         |
    |         | |  |  | |         |
    |         |    |    |         |
    |         |   -O-   |         |
    |         |    |    |         |
    -------------------------------

y que ésta, a su vez, consiste en repetir 5 veces la solución para
$n=1$.

## Entrada

Una línea con un valor $n$ entre 1 y 6.

## Salida

Exactamente $3^n$ líneas de $3^n+2$ caracteres cada una, mostrando el
diseño descrito, más dos carácters adicionales '$\vert$' al principio y
al final de cada línea.

## Información del problema

Autoría: Omer Giménez

Generación: 2026-01-25T11:11:44.173Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
