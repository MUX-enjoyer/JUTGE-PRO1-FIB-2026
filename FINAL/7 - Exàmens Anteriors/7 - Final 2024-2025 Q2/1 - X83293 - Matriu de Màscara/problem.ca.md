# Matriu de Màscara

Una matriu de màscara $K$ és una matriu de caselles de tipus `bool`.
Aplicar $K$ a una matriu d'enters $M$ consisteix en multiplicar per 0
aquelles caselles anàlogues de $M$ (amb la mateixa fila i columna) que a
$K$ contenen `false`, i no alterar les altres caselles. Per exemple:

        M            K        apply_mask(M, K)
    1  2  3  4    1 1 0 0        1  2 0 0
    5  6  7  8    0 1 0 1        0  6 0 8
    9 10 11 12    1 1 0 0        9 10 0 0

Les caselles de $K$ es mostren com a 0 o 1 quan són `false` o `true`,
respectivament. Es veu com la matriu resultat conté zeros en aquelles
caselles a on $K$ té un 0 (`false`), i la resta de valors queden igual
que a $M$.

Implementa una funció `apply_mask` amb la declaració següent:

    typedef vector<vector<int>> Matrix;
    typedef vector<vector<bool>> Mask;

    /**
     * @brief Retorna una nova matriu que és `M` aplicant la
     * màscara `K`. La màscara és una matriu que té caselles de tipus
     * `bool`, i quan una casella de la màscara és `false`, cal
     * deixar la casella anàloga (mateixa fila i columna) de `M` a 0, 
     * altrament no cal fer res.
     *
     * @param `K` la matriu de màscara
     * @param `M` la matriu d'interès (d'enters)
     *
     * @returns  La matriu resultat d'aplicar `K` a `M`
     */
    Matrix apply_mask(const Matrix& M, const Mask& K);

## Observació

El centre d'interès d'aquest problema és la *correctesa*. Els jocs de
prova comproven que la majoria de casos possibles produeixin la sortida
correcta.

## Entrada

*L'entrada ja la fa el programa principal proporcionat*. Consisteix en
un seguit de cassos amb dos enters per files i columnes i les matrius
$M$ i $K$ de costat, en el format mostrat als exemples.

## Sortida

*La sortida també la produeix el programa principal proporcionat*. Es
mostra la matriu resultat de cridar `apply_mask` en el mateix format,
separant les matrius per una línia buida per claredat.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T16:43:29.254Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
