# Dibuixar imatges en una pissarra (en mode caràcter)

En aquest exercici us donem un programa a mig fer que haureu de
completar. El programa treballa amb imatges que voldrem dibuixar sobre
una pissarra.

Més concretament, tindrem un tipus de dada `Image`, que té un nom, una
profunditat, una ubicació representada per dos naturals $i,j$ i un
vector de strings $v$. Usualment anomenarem `image` a les variables de
tipus `Image`.

Una pissarra serà un vector de strings que usualment anomenarem `board`.

Diem que una `image` és vàlida si el seu `v` és una matriu rectangular
d'unes certes dimensions $n\times{}m$ no nules.

Diem que un `board` és vàlid si és una matriu rectangular d'unes certes
dimensions $N\times{}M$ no nules.

A més a més, diem que aquesta `image` encaixa dins d'aquest `board` si
$i+n\leq N$ i $j+m\leq M$, on $i,j$ és la ubicació d'aquesta `image`.

El resultat de dibuixar aquesta `image` sobre aquest `board` consisteix
en modificar `board` de manera que, per a cada posició $i',j'$ de
`image` amb un caràcter diferent de `’.’`, es cumpleixi
`board`$[i+i'][j+j']==$`image`$[i'][j']$. Cap altre caràcter de `board`
haurà canviat.

La funció `main`, que ja us donem feta, llegeix una llista d'imatges,
les ordena de major a menor profunditat, i les dibuixa sobre una
pissarra en aquest ordre.

Haureu d'implementar una funció per a llegir una imatge de l'entrada,
una per a calcular les dimensions mínimes d'una pissarra que fan que
totes les imatges d'una llista hi encaixin, i una funció per a dibuixar
una imatge sobre una pissarra. A més a més, haureu d'implementar una
funció que compara imatges i es fa servir per a ordenar-les. Una imatge
és \"menor que\" una altra si té major profunditat que l'altra, o té la
mateixa profunditat que l'altra però el seu nom és menor que el nom de
l'altra en ordre lexicogràfic.

Completeu el següent codi a mig per per tal de solucionar l'exercici:

    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    // Here you can add more includes if you wish.
    // ...

    using namespace std;

    struct Image {
    	string name;
    	int depth;
    	int i, j;
    	vector<string> v;
    };

    typedef vector<Image> ListImages;

    // Auxiliary functions (you can add more functions if you wish)

    // Pre: The input has a description of an image with this format:
    //      - First line: name depth i j n m
    //      - n lines with m characters each (the contents of v)
    //        These characters are different from whitespace, as we use '.' to represent empty character.
    Image readImage()
    {
    	// Implement this function.
    	//...
    }

    // Pre: listimages contains a non-empty list of valid images.
    // Post: N,M are the dimensions of the minimum board such that
    //       all of those images fit in it.
    //       In other words, N,M must be the minimum naturals satisfying that,
    //       for each image in listimages,
    //       if i,j are its location and n,m are the dimensions of its v,
    //       then i+n<=N and j+m<=M must be satisfied,
    void computeMinimumBoardDimensions(const ListImages &listimages, int &N, int &M) {
    	// Implement this function.
    	//...
    }

    // Pre:  image is valid and board is valid and image fits in board.
    // Post: image has been drawn on board. Nothing else has changed.
    //       Recall that occurrences of character '.' in image are not printed on board!
    void drawImage(const Image &image, vector<string> &board)
    {
    	// Implement this function.
    	//...
    }

    // Pre:  image1, image2 represent valid images.
    // Post: Returns true iff one of the following conditions holds:
    //         - depth of image1 is strictly bigger than depth of image2.
    //         - image1 and image2 have same depth, but image1 has smaller name than image2.
    bool compareImages(Image image1, Image image2)
    {
    	// Implement this function.
    	//...
    }

    // Pre: listimages has a list of valid images.
    // Post: prints on the output the result of drawing all of those
    //       images on the minimum board such that all of them fit in,
    //       and sorted by depth and name.
    void drawListImages(const ListImages &listimages)
    {
    	sort(listimages.begin(), listimages.end(), compareImages);
    	int N, M;
    	computeMinimumBoardDimensions(listimages, N, M);
    	vector<string> board(N, string(M, '.'));
    	for (int i = 0; i < int(listimages.size()); i++)
    		drawImage(listimages[i], board);
    	for (int i = 0; i < N; i++)
    		cout << board[i] << endl;
    	cout << endl;
    }

    int main()
    {
    	int n;
    	cin >> n;
    	ListImages listimages(n);
    	for (int i = 0; i < n; i++)
    	listimages[i] = readImage();
    	drawListImages(listimages);
    }

## Entrada

L'entrada consisteix en la descripció d'una llista d'imatges. No us
n'heu de preocupar massa perquè el main que us donem ja s'encarrega de
cridar a les corresponents funcions.

## Sortida

La sortida mostra el resultat d'escriure les imatges sobre un board per
ordre de profunditat i nom. No us n'heu de preocupar massa perquè el
main que us donem ja s'encarrega de produïr aquesta sortida cridant a
les corresponents funcions.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T21:32:35.413Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
