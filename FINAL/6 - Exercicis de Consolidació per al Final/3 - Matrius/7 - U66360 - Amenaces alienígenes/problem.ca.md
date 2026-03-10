# Amenaces alienígenes

Els científics han descobert unes **zones espacials** (representades per
matrius bidimensionals) on s'han detectat alienígenes. Les cel·les de
cada matriu contenen un valor enter que indica la densitat d'alienígenes
en aquella posició específica. Els científics necessiten identificar
certes \"zones crítiques\" dins les zones espacials que podrien indicar
una major amenaça per als humans.

## Entrada

Una seqüència de **zones espacials**, acabada amb un zero. Cada zona ve
indicada per:

- Un enter n que representa el nombre de files de la matriu
  ($1 \leq n \leq 100$).

- Un enter m que representa el nombre de columnes de la matriu
  ($1 \leq m \leq 100$).

- Una matriu de mida $n \times m$ que conté enters no negatius que
  representen la densitat d'alienígenes en cada cel·la de la matriu.

- Un enter k que representa la mida del \"quadrat d'anàlisi\"
  ($1 \leq k \leq min(n, m)$). Aquest quadrat és una submatriu de mida
  $k \times k$ que es farà servir per analitzar zones crítiques.

## Sortida

Cal treure 3 informacions:

- Per cada zona espacial de la seqüència, la posició (índex de fila i
  columna) del vèrtex superior esquerre del subquadrat $k \times k$ que
  conté la major densitat total d'alienígenes. Si hi ha empat entre
  varis subquadrats, escriure la posició del subquadrat amb la posició
  de la fila més petita.

- La suma total de les densitats d'alienígenes dins d'aquell subquadrat.

- El valor màxim de densitat dins d'aquell subquadrat.

## Observació

És obligatori fer, com a mínim, un subprograma que llegeixi una **zona
espacial** sencera. El subprograma rep una matriu per referència i
l'omple amb valors llegits de l'entrada. Tanmateix, probablement és
convenient fer més subprogrames per aquest problema.

## Informació del problema

Autoria: Professors PRO1

Generació: 2026-01-25T19:54:35.644Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
