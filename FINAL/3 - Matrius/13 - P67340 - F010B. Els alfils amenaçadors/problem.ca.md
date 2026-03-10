# F010B. Els alfils amenaçadors

Considereu un tauler d'escacs rectangular sobre el qual s'han disposat
diversos alfils. Un alfil n'amenaça un altre si tots dos es troben a la
mateixa diagonal i no n'hi ha cap altre entre ells dos. Es vol conèixer
quines són totes les amenaces entre alfils.

Per exemple, considereu el tauler següent amb 4 files i 5 columnes:

:::: center
::: pspicture
(6,5.5)

(1,1)(1,0)6(0,0)(0,4) (1,1)(0,1)5(0,0)(5,0)

(0.5 , 1.5 )4 (0.5 , 2.5 )3 (0.5 , 3.5 )2 (0.5 , 4.5 )1

(1.5 ,0.5 )1 (2.5 ,0.5 )2 (3.5 ,0.5 )3 (4.5 ,0.5 )4 (5.5 ,0.5 )5

(1.5 ,1.5 )X (3.5 ,3.5 )X (4.5 ,2.5 )X (4.5 ,4.5 )X (5.5 ,2.5 )X
:::
::::

L'alfil de la posició (3,5) no té amenaces. L'alfil de la posició (4,1)
amenaça el de la posició (2,3), i cap altre. L'alfil de la posició (2,3)
amenaça els de les posicions (4,1), (1,4) i (3,4). El conjunt de totes
les amenaces és:

$$\begin{array}{l}
(4,1)\leftrightarrow(2,3) \\
(2,3)\leftrightarrow(4,1) \\
(2,3)\leftrightarrow(1,4) \\
(1,4)\leftrightarrow(2,3) \\
(2,3)\leftrightarrow(3,4) \\
(3,4)\leftrightarrow(2,3)
\end{array}$$

Feu un programa que llegeixi un tauler amb alfils i escrigui totes les
seves amenaces.

## Entrada

L'entrada comença amb el nombre de files i el nombre de columnes del
tauler (dos enters estrictament positius). A continuació ve un tauler de
la mida indicada, amb caràcters '\|X\|' per marcar els alfils i punts
per marcar les caselles buides.

## Sortida

Per a cada amenaça d'un alfil a la posició $(f_1,c_1)$ amb un altre
alfil a la posició $(f_2,c_2)$, cal escriure una línia amb el text
"\|(\|$f_1$\|,\|$c_1$\|)\<-\>(\|$f_2$\|,\|$c_2$\|)\|". Les posicions es
numeren de dalt a baix i d'esquerra a dreta, començant per 1.

## Observació

L'ordre en què escriviu les línies és irrellevant. El Jutge donarà per
bona qualsevol sortida que contingui totes les amenaces correctes, amb
independència del seu ordre.

## Informació del problema

Autoria: Professorat de P1

Generació: 2026-01-25T11:31:54.673Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
