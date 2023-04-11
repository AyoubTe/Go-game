#include <stdio.h>
#include <stdlib.h>
#include <windows.h> /// Pour l'utlisation de la fonction color

///######################################################### Affichage SECTION #########################################################################

void couleur_pierre( int a ){ /// permet d'afficher la pierre blue (noir) et orange (blance).
    if ( a == 1 ) {
        color(11,11);
        printf("aa");
        color(8,0);
        printf("");
    }
    if ( a == 2 ) {
        color(14,14);
        printf("aa");
        color(8,0);
        printf("");
     }
}

void afficher_resultat_tirage_au_sort( int j ){ /// Pour afficher le résultat de tirage au sort, et annoncé le celui que commençra le premier.
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t*****************************************************************************************************************************\n");
    printf("\n\n\t\t\t\t\t\t\t                    RESULTAT DE TIRAGE AU SORT: \n");
    printf("\n\n\n\t\t\t                                                           \n");
    printf("\t\t\t                                                            \n");
    printf("\t\t\t\t                    Le Joueur J%d jouera le premier avec les pierres noires : ", 2-(1+j)%2); couleur_pierre( 1 ) ;printf("\n");
    printf("\t\t\t                                                            \n");
    printf("\t\t\t\t                    Le Joueur J%d jouera le deuxieme avec les pierres blancs : ", 1+(1+j)%2); couleur_pierre( 2 ) ;printf("\n");
    printf("\t\t\t                                                            \n");
    printf("\n\n\n\n\t\t\t                                                            \n");
    printf("\t\t\t****************************************************************************************************************************\n");
    sleep(5);
}

void menu(){ /// Le menu
    system("@cls||clear");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t****************************** MENU *****************************\n");
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*                       1. Jouer                                *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                   2. Instructions et regles                   *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                      3. Quitter                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*****************************************************************\n");
}

void play(){ /// TYPE DE JEU
    int choix_play = 0; // Le menu
    system("@cls||clear");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t*****************************************************************\n");
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                       1. Joueur V/S Joueur                    *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*                    2. Joueur V/S Machine                      *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*                      3. Retour                                *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*                        4. Quitter                             *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*****************************************************************\n");

    printf("\t\t\t\t\t\t    Veuiller enter votre choix :\n\t\t\t\t\t\t    >>> ");
    scanf("%d", &choix_play);
    if (choix_play == 1){
        system("@cls||clear");
        joueur_joueur();
    }
    if (choix_play == 2){
            system("@cls||clear");
            levels();
    }
    if (choix_play == 3){
        system("@cls||clear");
        principale();
    }
    if (choix_play == 4){
        exit;
    }
}

void levels(){ /// Les niveaux
    int choix_level = 0;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t*****************************************************************\n");;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*                       1. Niveau FACILE                        *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*                    2. Niveau MOYEN                            *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*                      3. Retour                                *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*                        4. Quitter                             *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n") ;
    printf("\t\t\t\t\t\t*                                                               *\n");
    printf("\t\t\t\t\t\t*****************************************************************\n");

    printf("\t\t\t\t\t\t    Veuiller enter votre choix :\n\t\t\t\t\t\t    >>> ");
    scanf("%d", &choix_level);
    if (choix_level == 1){
        system("@cls||clear");
        joueur_machine_facile();
    }
    if (choix_level == 2){
        system("@cls||clear");
        joueur_machine_moyen();
    }
    if (choix_level == 3){
        system("@cls||clear");
        play();
    }
    if (choix_level == 4){
        exit;
    }

}

void color(int t,int f){/// Pour afficher les pierres des joueurs en couleur au lieu de 'X' et 'O'.
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

void welcome(){ /// L'affiche de nom de jeu "JEU GO" et Welcome.
    color(2,0);
    printf ("\n\n\n\n\t\t\t\t********************************************************************************************************\n") ;
    printf ("\t\t\t\t*                                                                                                      *\n") ;
    printf ("\t\t\t\t*                                                                                                      *\n") ;
    printf ("\t\t\t\t*        ***        **********      ****** **********  ****     ****    **********         ******      *\n") ;
    printf ("\t\t\t\t*        ***         *********        ***   *********   ***     ***    ***********       **********    *\n") ;
    printf ("\t\t\t\t*        ***         ***              ***   ***         ***     ***   ***               ***      ***   *\n") ;
    printf ("\t\t\t\t*        ***         *********        ***   *********   ***     ***   ***    ********  ***        ***  *\n") ;
    printf ("\t\t\t\t*        ***         *********   *    ***   *********   ***     ***   ***   ********** ***        ***  *\n") ;
    printf ("\t\t\t\t*        ***         ***         **   ***   ***         ***     ***    ***     *** ***  ***      ***   *\n") ;
    printf ("\t\t\t\t*        *********   *********   ********   *********    *********      **********       **********    *\n") ;
    printf ("\t\t\t\t*        *********  **********    ******   **********     *******         ******           ******      *\n") ;
    printf ("\t\t\t\t*                                                                                                      *\n") ;
    printf ("\t\t\t\t*                                                                                                      *\n") ;
    printf ("\t\t\t\t********************************************************************************************************\n") ;
    printf("\n\n");
    color(4, 0);
    printf ("\t\t\t\t\t\t\t\t\t   Tous les droits reserves  Company Ayoub SAMI @2023\n") ;
    color(7,0);
}

void instructions(){ /// Afficher les instructions et les régles générales de jeu.
    int choix;
    printf("\n\n\n\n\n\t1- Le go se joue a deux joueurs.\n");
    printf("\t2- Un joueur joue avec les pierres noires, l'autre avec les pierres blanches. Les joueurs jouent leurs coups un par un a tour de role.\n");
    printf("\t3- Un coup consiste a placer une pierre sur une intersection du quadrillage. Les pierres peuvent egalement etre placees sur les bords de celui-ci.\n");
    printf("\t4- Une fois qu'ume pierre est placee sur une intersection, elle ne peut plus etre deplacee.\n");
    printf("\t5- Quand il y a une difference de force entre les deux adversaires, le joueur le plus faible place des pierres supplementaires sur le plateau pour compenser\n");
    printf("\t  cette difference de niveau.\n");
    printf("\t6- Dans une partie a egalite, le joeur ayant les pierres noires joue toujours le premier, mais dans une partie a handicap, c'est le blanc qui commence.\n");
    printf("\n");
    printf("\t                1. Retour                                                               2.Quitter \n");
    printf("\t\t>>> ");
    scanf("%d", &choix);
    if ( choix == 1 ){
        principale();
    }
    if ( choix == 1 ){
        exit;
    }
}

void principale(){ /// Le menu principale de jeu.
    int choix_principal = 0;
    menu();

    printf("\t\t\t\t\t\t    Veuiller enter votre choix :\n\t\t\t\t\t\t    >>> ");
    scanf("%d", &choix_principal);
    if (choix_principal == 1){
        play();
    }
    if (choix_principal == 2){
        system("@cls||clear");
        instructions();
    }
    if (choix_principal == 3){
        exit;
    }
}

void A(int a, int *T){/// Afficher les pierres les pierres noires (en blue)
    if ( T[a] == 1 ) {
        color(11,11);
        printf("aa");
        color(8,0);
        printf("");
    }
    if ( T[a] == 2 ) {
        color(14,14);
        printf("aa"); /// , les pierres blanc (en orange), ou le numero
        color(8,0);
        printf("");
     }

    if ( T[a] == 0 ) {
        if ( ( a>= 1 ) && ( a <= 9 ) ){
            printf("%d ", a) ;
        }
        if ( a > 9 ) {
            printf("%d", a) ;
        }
    }
}


void grille_remplie(int *T, int stones1, int stones2, int capture1, int capture2){  /// Cette foonction permet d'afficher la grille
    printf("\n");
    printf("\n");
    printf("\n");
    printf(" \t\t                ");A(1,T);printf("------ ");A(2,T);printf("------ ");A(3,T);printf("------ ");A(4,T);printf("------ ");A(5,T);printf("------ ");A(6,T);printf("------ ");A(7,T);printf("------ ");A(8,T);printf("----- ");A(9,T);printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \t\t ----------- ---------------  \n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \t\t| stones 1  |     %4d      |  \t", stones1);couleur_pierre(1); printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \t\t ----------- ---------------  \n");
    printf(" \t\t                ");A(10,T);printf("------ ");A(11,T);printf("------ ");A(12,T);printf("------ ");A(13,T);printf("------ ");A(14,T);printf("------ ");A(15,T);printf("------ ");A(16,T);printf("------ ");A(17,T);printf("------");A(18,T);printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \t\t ----------- --------------- \n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \t\t| stones 2  |     %4d      |  \t", stones2);couleur_pierre(2); printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \t\t ----------- --------------- \n");
    printf(" \t\tPasser : 88     ");A(19,T);printf("------ ");A(20,T);printf("------ ");A(21,T);printf("------ ");A(22,T);printf("------ ");A(23,T);printf("------ ");A(24,T);printf("------ ");A(25,T);printf("------ ");A(26,T);printf("------");A(27,T);printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \t\t ------------- -------------\n");
    printf(" \t\tRetour : 0       |       |        |        |        |        |        |        |       | \t\t| capturees 1 |   %4d      |\t", capture1 );couleur_pierre(1); printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \t\t ------------- -------------\n");
    printf(" \t\t                ");A(28,T);printf("------ ");A(29,T);printf("------ ");A(30,T);printf("------ ");A(31,T);printf("------ ");A(32,T);printf("------ ");A(33,T);printf("------ ");A(34,T);printf("------ ");A(35,T);printf("------");A(36,T);printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \t\t ------------- -------------\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \t\t| capturees 2 |   %4d      |\t", capture2);couleur_pierre(2); printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \t\t ------------- -------------\n");
    printf(" \t\t                ");A(37,T);printf("------ ");A(38,T);printf("------ ");A(39,T);printf("------ ");A(40,T);printf("------ ");A(41,T);printf("------ ");A(42,T);printf("------ ");A(43,T);printf("------ ");A(44,T);printf("------");A(45,T);printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \tRemarques :\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \tAssurez bien que vous tape des valeurs entre 1 - 81.\n");
    printf(" \t\t                ");A(46,T);printf("------ ");A(47,T);printf("------ ");A(48,T);printf("------ ");A(49,T);printf("------ ");A(50,T);printf("------ ");A(51,T);printf("------ ");A(52,T);printf("------ ");A(53,T);printf("------");A(54,T);printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \tVous pouvez abandonner la partie en tapant: 0.\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \tVous pouvez passer votre tour en tapant: 88.\n");
    printf(" \t\t                ");A(55,T);printf("------ ");A(56,T);printf("------ ");A(57,T);printf("------ ");A(58,T);printf("------ ");A(59,T);printf("------ ");A(60,T);printf("------ ");A(61,T);printf("------ ");A(62,T);printf("------");A(63,T);printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       | \n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       |\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       |\n");
    printf(" \t\t                ");A(64,T);printf("------ ");A(65,T);printf("------ ");A(66,T);printf("------ ");A(67,T);printf("------ ");A(68,T);printf("------ ");A(69,T);printf("------ ");A(70,T);printf("------ ");A(71,T);printf("------");A(72,T);printf("\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       |\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       |\n");
    printf(" \t\t                 |       |        |        |        |        |        |        |       |\n");
    printf(" \t\t                ");A(73,T);printf("------ ");A(74,T);printf("------ ");A(75,T);printf("------ ");A(76,T);printf("------ ");A(77,T);printf("------ ");A(78,T);printf("------ ");A(79,T);printf("------ ");A(80,T);printf("------");A(81,T);printf("\n");
    printf("\n");
    printf("\n");

}

void winner( float points, int j){ /// Pour afficher le gagnat à la fin de partie.
    int choix;
    system("@cls||clear");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t*****************************************************************************************************\n");
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                 Le gagnant est le Joueur %d                                        *\n", j);
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                        Par %4.1f points                                            *\n", points);
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*****************************************************************************************************\n");
    printf("\n\n\t\t\t\t\t            1. Retour                                                     2. Nouvelle partie\n\n\n");
    printf("\t\t\t\t\t Veuillez entrer votre choix >>> ");
    scanf("%d", &choix);
    if(choix == 1){
        system("@cls||clear");
        play();
    }
    if (choix == 2){
        system("@cls||clear");
        joueur_joueur();
    }
}

void winner_joueur(float points){  /// Le cas où le joueur est le gagnant lorsque il joue contre la machine.
    int choix;
    system("@cls||clear");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t*****************************************************************************************************\n");
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                 Le gagnant est le Joueur                                          *\n");
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                      Par %4.1f points                                              *\n", points);
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*****************************************************************************************************\n");
    printf("\n\n\t\t\t\t\t            1. Retour                                                     2. Nouvelle partie\n\n\n");
    printf("\t\t\t\t\t Veuillez entrer votre choix >>> ");
    scanf("%d", &choix);
    if(choix == 1){
        system("@cls||clear");
        play();
    }
    if (choix == 2){
        system("@cls||clear");
        joueur_joueur();
    }
}

void winner_machine(float points){  /// Le cas où l'ordinateur est le gagnant lorsque il joue contre la machine.
    int choix;
    system("@cls||clear");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t*****************************************************************************************************\n");
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                 Le gagnant est l'ordinateur                                       *\n");
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                      Par %4.1f points                                              *\n", points);
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*                                                                                                   *\n");
    printf("\t\t\t\t\t*****************************************************************************************************\n");
    printf("\n\n\t\t\t\t\t            1. Retour                                                     2. Nouvelle partie\n\n\n");
    printf("\t\t\t\t\t Veuillez entrer votre choix >>> ");
    scanf("%d", &choix);
    if(choix == 1){
        system("@cls||clear");
        play();
    }
    if (choix == 2){
        system("@cls||clear");
        joueur_joueur();
    }
}


/// ######################################################### Player V/S  Player SECTION ###############################################################

void test(int *T, int **chaines, int *stones1, int *stones2, int *capture1, int *capture2){ /// Permet de faire de traitement sur le tableau contenat les emplacements des pierres pour faire de traitement a chaque fois qu'un joueur dispose une nouvelle pierre.
    ///capture_coin(T);
    ///capture_milieu(T);
    ///capture_cotees(T);
    remplie_chaines(T , chaines);
    capture_chaines(T, chaines, stones1, stones2, capture1, capture2);
}

void vider( int **T , int t){ /// pour supprimer les tableaux déclarée par l'allocation dynamique.
    for(int j = 0; j<t; j++){
        free(T[j]);
    }
    free(T);
}

int remplie_atari( int *T, int **chaines, int *atari_liste , int j){ /// remplie la liste des postions atari de l'adversaire.
    for (int i = 1; i < 82; i++){
        if( (atari_chaine(T, chaines[i])== 1) && (T[chaines[i][0]] == j) ) {
            ajouter_au_liste(atari_liste, indice_atari_chaine(T, chaines[i]));
        }
    }
}

int tirage_au_sort(){ /// le choix de joueur que commencera le premier
    int first;
    srand(time(NULL)) ;
    first =rand();
    first = first%2;
    return first;
}

int pierres_restantes(int *T, int i){ /// Permet de calculer les pierres restantes sur le goban.
    int k=0;
    for( int j=1; j<82; j++ ){
        if ( T[j] == i ){
            k++;
        }
    }
    return k;
}

void joueur_joueur(){ /// Le cas de 1 : joueur contre un autre joueur.
    int j, choix = 1, passer = 0, finie = 0, retour = 0, ko = 0;
    int capture1 = 0, capture2 = 0; // Le nbr des pierres capturées par chacun des joueurs respect
    int stones1 = 0 , stones2 = 0 ;// Le nbr des pierres restantes sur le Goban pour chacun des joueurs respect
    int *s1, *s2, *c1, *c2;
    char r;
    //float komi = 7.5;
    float points1=0, points2 = 7.5;
    float *p1, *p2;
    p1 = &points1; p2 = &points2;
    int *atari_liste1, * atari_liste2;
    int *Tab, *pos_interdict1, *pos_interdict2, *liste_ko, *positoins_ko;
    int **chaines;
    chaines = (int*)calloc(82, sizeof(int));
    for (j=0; j<82; j++){
        chaines [j] = (int*) calloc(82, sizeof(int));
    }
    s1 = &stones1; s2 = &stones2; c1 = &capture1; c2 = &capture2;
    Tab = (int*) calloc(82, sizeof(int));
    pos_interdict1 = (int*) calloc(81, sizeof(int));
    pos_interdict2 = (int*) calloc(81, sizeof(int));
    atari_liste1 = (int*) calloc(82, sizeof(int));
    atari_liste2 = (int*) calloc(82, sizeof(int));
    liste_ko = (int*) calloc(81, sizeof(int));
    positoins_ko = (int*) calloc(81, sizeof(int));

    j = tirage_au_sort();
    afficher_resultat_tirage_au_sort( j );
    system("@cls||clear");
    grille_remplie(Tab, *s1, *s2, *c1, *c2);

    while ( (( stones1 + stones2 ) <= 81) && ( passer != 2 ) && (choix != 0)){ /// Tant que le goban n'est pas totalement remplie ou les deux joueurs discident de fini la partie.

        printf("\t\t\t         *****************  C'est la tour de joueur %d de jouer  **************** \n\n", 2-(1+j)%2);
        do { // TOUR DE Premier Joueur
                remplie_ko_positions(Tab, positoins_ko);
                remplie_atari( Tab, chaines, atari_liste1 , 2);
                look_for_interdicts(Tab, pos_interdict1, 1); /// Determiner interdits pour le premier joueur.
                printf("\t\t\t         Choisir une position ");
                printf(" >>> ");
                scanf("%d", &choix);
                if ( choix == 0 ){ /// Si l'un des joueurs de quitter le jeu avant qu'il finie la partie.

                    printf("\t\t\t         Vous voulez vraiment retourner? si oui tayez 'Y' si no tayez 'N' : ");
                    scanf("%s", &r);
                    if ( (r == 'Y' ) || (r == 'y') ){
                        passer = 2;
                        retour = 1;
                        system("@cls||clear");
                        //exit;
                        //system("@cls||clear");
                    }
                    if ( (r != 'Y' ) && (r != 'y') ){
                        printf("\t\t\t         Veuillez choisie une autre position: ");
                        printf(" >>> ");
                        scanf("%d", &choix);
                    }
                }
                if( ( choix != 88 ) &&( passer == 1 )){ /// si le joueur 2 a choisie de passer son tour au joueur 1 mais le J1 ne veut pas passer lui aussi pour finir la partie.
                    passer = 0 ;
                }
                if ( (est_dans(pos_interdict1, choix) == 1) && (est_dans(atari_liste1, choix) == 0 )  && ( choix >0 ) ){ /// si la pos choisie est ds la liste des position interdits pour le J1.
                    color(4,0);
                    printf("\t\t\t         C'est une position de suiscide !!\n");
                    color(7,0);
                }
                if( choix == 88 ){ /// si 1J a descide de passer le tour au 2J.
                    passer++;
                    Tab[0] = 0;
                    choix = 0;
                    break;
                }
                if( passer == 2 ){ /// Si le 1J pass son role apres que 1J le fait aussi la partie finira.
                    //resultat( Tab);
                    break;
                }
                if (choix > 81){ /// Si la valeur (pos) entree par 1J > a 81 il faut le lui dit et lui demande d'introduire un nouvelle valeur.
                    color(4,0);
                    printf("\t\t\t         Vous avez entrez une valeur erronee, assaie une autre fois !! \n");
                    color(7,0);
                    choix = 0;
                    Tab[0] = 1;
                }
                if ( (Tab[choix] != 0 ) && ( choix < 82) && ( choix > 0 ) ){ /// Si la valeur (pos) par le 1J est déja occupée par lui meme ou un autre joueur.
                    color(4,0);
                    printf("\t\t\t         Cette position est deja occuppee choisie une autre !! \n");
                    color(7,0);
                }
                if ( est_ko(Tab, choix) == 1){
                    remplie_ko_liste(Tab, choix, liste_ko);
                    ko = 1;
                }
                if ( est_dans(liste_ko, choix) == 1 ){
                    color(4,0);
                    printf("\t\t\t         C'est une position de ko !!  !! \n");
                    color(7,0);
                }
        } while ( ((Tab[choix] != 0 ) || ( est_dans(pos_interdict1, choix) == 1 )) && (est_dans(atari_liste1, choix) == 0 )  );
        Tab[choix] = 1;

        test(Tab, chaines, s1, s2, c1, c2); /// L'analyse de situation de goban eliminir ce qui demande l'élimination....
        system("@cls||clear");
        stones1 = pierres_restantes(Tab, 1);
        stones2 = pierres_restantes(Tab, 2);
        grille_remplie(Tab, *s1, *s2, *c1, *c2);
        if( passer == 2 ){ /// si les J finie la partie.
                ///resultat( Tab);
                break;
        }
        printf("\t\t\t         *****************  C'est la tour de joueur %d de jouer  **************** \n\n", 1+(1+j)%2);
        do { /// TOUR DE JOUEUR 2
                remplie_atari( Tab, chaines, atari_liste2 , 1);
                look_for_interdicts(Tab, pos_interdict2, 2); /// dertination des pos interdicts pour 2J.
                printf("\t\t\t         Choisir une position ");
                printf(" >>> ");
                scanf("%d", &choix);
                if ( choix == 0 ){ /// S'il vaut quitter le jeu
                    printf("\t\t\t         Vous voulez vraiment retourner? si oui tayez 'Y' si no tayez 'N' : ");
                    scanf("%s", &r);
                    if ( (r == 'Y' ) || (r == 'y') ){
                        retour = 1;
                        passer = 2;
                        system("@cls||clear");
                        //exit;
                    }
                    if ( (r != 'Y' ) && (r != 'y') ){
                        printf("\t\t\t         Veuillez choisie une autre position: ");
                        printf(" >>> ");
                        scanf("%d", &choix);
                    }
                }
                if ( (est_dans(pos_interdict2, choix) == 1 ) && (est_dans(atari_liste2, choix) == 0 ) && ( choix >0 ) ){ /// si la  pos choisie est interdit demande d'introduit une nouvelle valeur.
                    color(4,0);
                    printf("\t\t\t         C'est une position de suiscide !!\n");
                    color(7,0);
                }
                if( ( choix != 88 ) &&( passer == 1 )){ ///
                    passer = 0 ;
                }

                if( choix == 88 ){ /// lors de choix de pass
                    passer++;
                    Tab[0] = 0;
                    choix = 0;
                    break;
                }
                if( passer == 2 ){ /// Cas deux pass successives
                    ///resultat( Tab);
                    break;
                }
                if (choix > 81){ /// Lors de valeur > 81
                    color(4,0);
                    printf("\t\t\t         Vous avez entrez une valeur erronee, assaie une autre fois !! \n");
                    color(7,0);
                    choix = 0;
                    Tab[0] = 2; /// pour que la boucle do continue de fonctionner.
                }

                if ( (Tab[choix] != 0 ) && ( choix < 82) && ( choix > 0 ) ) {
                    color(4,0);
                    printf("\t\t\t         Cette position est deja occuppee choisie une autre !! \n");
                    color(7,0);
                }

        } while ( ((Tab[choix] != 0 ) || ( est_dans(pos_interdict2, choix) == 1 )) && (est_dans(atari_liste2, choix) == 0 ));
        Tab[choix] = 2;

        if ( passer == 1 ){ ///
            choix = 2;
        }
        test(Tab, chaines, s1, s2, c1, c2); /// L'analyse de situation de Goban.
        system("@cls||clear");
        stones1 = pierres_restantes(Tab, 1);
        stones2 = pierres_restantes(Tab, 2);
        grille_remplie(Tab, *s1, *s2, *c1, *c2); ///
    }

    if ( retour == 1 ){
        passer = 0;
        play();
    }
    if( passer == 2){
        system("@cls||clear");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t FIN de Partie");
        resultat(Tab , p1, p2);
        points1 = points1 + stones1 + capture1;
        points2 = points2 + stones2 + capture2;
        if ( points1 > points2 ){
            winner( points1, 2-(1+j)%2);
        }
        if ( points1 < points2 ){
            winner( points2, 1+(1+j)%2);
        }
    }
}


/// ######################################################## Player V/S Machine SECTION ################################################################

int position_aleatoire(){ /// le choix de la position choisie par la machine aleatoirement
    int x;
    srand(time(NULL)) ;
    x = rand();
    x =  1 + x%81;
    return x;
}

void joueur_machine_facile(){ /// Le cas de 2 : joueur contre la machine facile (pas de traitement tout est aleatoire).
    int choix, Retour = 0;
    int j;
    int capture1 = 0, capture2 = 0; // Le nbr des pierres capturées par chacun des joueurs respect
    int stones1 = 0 , stones2 = 0 ;// Le nbr des pierres restantes sur le Goban pour chacun des joueurs respect
    int *s1, *s2, *c1, *c2;
    s1 = &stones1; s2 = &stones2; c1 = &capture1; c2 = &capture2;
    float points1 = 0, points2 = 0;
    float *p1, *p2;
    p1 = &points1; p2 = &points2;
    char r;
    int *Tab, **chaines, *pos_interdict1, *pos_interdict2;
    Tab = (int*)calloc(82, sizeof(int));
    chaines = (int*)calloc(82, sizeof(int));
    for (j=0; j<82; j++){
        chaines [j] = (int*)calloc(82, sizeof(int));
    }
    pos_interdict1 = (int*) calloc(81, sizeof(int));
    pos_interdict2 = (int*) calloc(81, sizeof(int));
    //j = tirage_au_sort();
    //afficher_resultat_tirage_au_sort( j );
    system("@cls||clear");
    grille_remplie(Tab, *s1, *s2, *c1, *c2);

    while ( (( stones1 + stones2 ) < 81) && (Retour != 1) ) {
        printf("\t\t\t          ***********************  C'est ton tour de jouer  ******************** \n\n");
        do { // TOUR DE Premier Joueur
                look_for_interdicts(Tab, pos_interdict1, 1); /// chercher les positions interdits pour le joueur.
                printf("\t\t\t         Choisir une position ");
                printf(" >>> ");
                scanf("%d", &choix);
                if ( choix == 0 ){
                    printf("\t\t\t         Vous voulez vraiment retourner? si oui tayez 'Y' si no tayez 'N' : ");
                    scanf("%s", &r);
                    if ( (r == 'Y' ) || (r == 'y') ){
                        choix = 0;
                        //Tab[0] = 1;
                        Retour = 1;
                        break;
                        //system("@cls||clear");
                    }
                    if ( (r != 'Y' ) && (r != 'y') ){
                        printf("\t\t\t         Veuillez choisie une autre position: ");
                        printf(" >>> ");
                        scanf("%d", &choix);
                    }
                }

                if ( est_dans(pos_interdict1, choix) == 1 ){
                    color(4,0);
                    printf("\t\t\t         C'est une position de suiscide !!\n");
                    color(7,0);
                }

                if( choix == 88 ){
                    Tab[0] = 0;
                    choix = 0;
                    break;
                }

                if (choix > 81){
                    color(4,0);
                    printf("\t\t\t         Vous avez entrez une valeur erronee, assaie une autre fois !! \n");
                    color(7,0);
                    choix = 0;
                    Tab[0] = 1;
                }

                if ( (Tab[choix] != 0 ) && ( choix < 82) && ( choix >= 1 ) ) {
                    color(4,0);
                    printf("\t\t\t         Cette position est deja occuppee choisie une autre !! \n");
                    color(7,0);
                }
        } while ((Tab[choix] != 0 ) || ( est_dans(pos_interdict1, choix) == 1 )) ;
        if ( Retour == 1 ){
            break;
        }
        Tab[choix] = 1;
        stones1 = pierres_restantes(Tab, 1);
        stones2 = pierres_restantes(Tab, 2);
        test(Tab, chaines, s1, s2, c1, c2);
        system("@cls||clear");
        grille_remplie(Tab, *s1, *s2, *c1, *c2);
        printf("\t\t\t         *****************  C'est MON tour attends !!  **************** \n\n");
        printf("\n");

        do { // TOUR DE Machine
                look_for_interdicts(Tab, pos_interdict2, 2);
                choix = position_aleatoire();
        } while ((Tab[choix] != 0 ) || ( est_dans(pos_interdict2, choix) == 1 ));
        Tab[choix] = 2;
        stones1 = pierres_restantes(Tab, 1);
        stones2 = pierres_restantes(Tab, 2);
        test(Tab, chaines, s1, s2, c1, c2);
        system("@cls||clear");
        grille_remplie(Tab, *s1, *s2, *c1, *c2);
        sleep(2);
    }
    if (Retour == 1){
        system("@cls||clear");
        levels();
        exit;
    }
    system("@cls||clear");
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t FIN de Partie");
    resultat(Tab , p1, p2);
    points1 = points1 + stones1 + capture1;
    points2 = points2 + stones2 + capture2;
    if ( points1 > points2 ){
        winner_joueur(points1);
    }
    if ( points1 < points2 ){
        winner_machine( points2);
    }
}

void joueur_machine_moyen(){ /// C'est le cas de joueur contre l'intellegence.
    int choix, Retour = 0;
    int j ;
    int capture1 = 0, capture2 = 0; // Le nbr des pierres capturées par chacun des joueurs respect
    int stones1 = 0 , stones2 = 0 ;// Le nbr des pierres restantes sur le Goban pour chacun des joueurs respect
    char r;
    int *s1, *s2, *c1, *c2;
    s1 = &stones1; s2 = &stones2; c1 = &capture1; c2 = &capture2;
    float points1 = 0, points2 = 0;
    float *p1, *p2;
    p1 = &points1; p2 = &points2;
    int *Tab, **chaines, *pos_interdict1, *pos_interdict2;
    Tab = (int*)calloc(82, sizeof(int));
    pos_interdict1 = (int*) calloc(81, sizeof(int));
    pos_interdict2 = (int*) calloc(81, sizeof(int));

    chaines = (int*)calloc(82, sizeof(int));
    for (j=0; j<82; j++){
        chaines [j] = (int*)calloc(82, sizeof(int));
    }

    system("@cls||clear");
    grille_remplie(Tab, stones1, stones1, capture1, capture2);

    while ( ( ( stones1 + stones2 ) < 81) && ( Retour != 1 ) ) {
        printf("\t\t\t          ***********************  C'est ton tour de jouer  ******************** \n\n");
        do { // TOUR DE Premier Joueur
                look_for_interdicts(Tab, pos_interdict1, 1); /// chercher les positions interdits pour le joueur.
                printf("\t\t\t         Choisir une position ");
                printf(" >>> ");
                scanf("%d", &choix);
                if ( choix == 0 ){
                    printf("\t\t\t         Vous voulez vraiment retourner? si oui tayez 'Y' si no tayez 'N' : ");
                    scanf("%s", &r);
                    if ( (r == 'Y' ) || (r == 'y') ){
                        Retour = 1;
                        break;
                    }
                    if ( (r != 'Y' ) && (r != 'y') ){
                        printf("\t\t\t         Veuillez choisie une autre position: ");
                        printf(" >>> ");
                        scanf("%d", &choix);
                    }
                }

                if ( est_dans(pos_interdict1, choix) == 1 ){
                    color(4,0);
                    printf("\t\t\t         C'est une position de suiscide !!\n");
                    color(7,0);
                }

                if( choix == 88 ){
                    Tab[0] = 0;
                    choix = 0;
                    break;
                }
                if ( (Tab[choix] != 0 ) && (choix > 1) && (choix < 82) ) {
                    color(4,0);
                    printf("\t\t\t         Cette position est deja occuppee choisie une autre !! \n");
                    color(7,0);
                }
                if (choix > 81){ /// Si la valeur (pos) entree par 1J > a 81 il faut le lui dit et lui demande d'introduire un nouvelle valeur.
                    color(4,0);
                    printf("\t\t\t         Vous avez entrez une valeur erronee, assaie une autre fois !! \n");
                    color(7,0);
                    choix = 0;
                    Tab[0] = 1;
                }
        } while ( (Tab[choix] != 0 ) && (est_dans(pos_interdict1, choix) == 1 ) ) ;
        if( Retour == 1 ){
            break;
        }
        Tab[choix] = 1;
        stones1 = pierres_restantes(Tab, 1);
        stones2 = pierres_restantes(Tab, 2);
        test(Tab, chaines, s1, s2, c1, c2);
        system("@cls||clear");
        grille_remplie(Tab, stones1, stones2, capture1, capture2);
        printf("\t\t\t         *****************  C'est MON tour attends !!  **************** \n\n");
        printf("\n");
        do { // TOUR DE Machine
                look_for_interdicts(Tab, pos_interdict2, 2);
                choix = intillegence(Tab, chaines);
        } while ( Tab[choix] != 0 );
        Tab[choix] = 2;
        stones1 = pierres_restantes(Tab, 1);
        stones2 = pierres_restantes(Tab, 2);
        test(Tab, chaines, s1, s2, c1, c2);
        system("@cls||clear");
        grille_remplie(Tab, *s1, *s2, *c1, *c2);
        sleep(2);

    }

    if (Retour == 1){
        system("@cls||clear");
        levels();
        exit;
    }

    system("@cls||clear");
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t FIN de Partie");
    resultat(Tab , p1, p2);
    points1 = points1 + stones1 + capture1;
    points2 = points2 + stones2 + capture2;
    if ( points1 > points2 ){
        winner_joueur(points1);
    }
    if ( points1 < points2 ){
        winner_machine( points2);
    }
}

/// ######################################################## Calcule de résultat de partie #################################################

void calcule_terretoire(int *T, int **terretoires){ /// Permet determiner les terrestoires.
    int *liste_indice_traites;
    liste_indice_traites = (int*) calloc(81, sizeof(int));
    int k = 1;
    reinitiliser(terretoires);
    for( int i = 1; i<82; i++ ){                                    // cad n'est dans la liste des indicesdeja traites avant l'appel a cette fct
        if (( T[i] == 0 )&&(est_dans(liste_indice_traites, i) == 0)){
            remplie_terre_rec( T, terretoires[k], liste_indice_traites, i);
            k++;
        }
    }
}

void remplie_terre_rec( int *T, int *chaine, int *liste_indice_traites, int i){ /// chaine == terre /// rempir les terreoires
    if ( librete_terre(T, i) == 0){
        ajouter_au_liste(liste_indice_traites, i);
        ajouter_au_liste(chaine, i);
    }
    else{
        ajouter_au_liste(liste_indice_traites, i);
        ajouter_au_liste(chaine, i);
        int L1 [7] = {2, 3, 4, 5, 6, 7, 8};
        int L2 [7] = {74, 75, 76, 77, 78, 79, 80};
        int C1 [8] = {10, 19, 28, 37, 46, 55, 64};
        int C2 [8] = {18, 27, 36, 45, 54, 63, 72};
        int cotes[4] = {1, 9, 73, 81};
        if ( est_dans( cotes, i) == 1 ){
            if( i == 1 ){
                if((0==T[i+1])&&(est_dans(liste_indice_traites, i+1) == 0 )){
                    remplie_terre_rec(T, chaine, liste_indice_traites, i+1);
                }
                if((0==T[i+9])&&(est_dans(liste_indice_traites, i+9) == 0 )){
                    remplie_terre_rec(T, chaine, liste_indice_traites, i+9);
                }
            }
            if( i == 9 ){
                if((0==T[i-1])&&(est_dans(liste_indice_traites, i-1) == 0 )){
                    remplie_terre_rec(T, chaine, liste_indice_traites, i-1);
                }
                if((0==T[i+9])&&(est_dans(liste_indice_traites, i+9) == 0 )){
                    remplie_terre_rec(T, chaine, liste_indice_traites, i+9);
                }
            }
            if( i == 81 ){
                if((0==T[i-9])&&(est_dans(liste_indice_traites, i-9) == 0 )){
                    remplie_terre_rec(T, chaine, liste_indice_traites, i-1);
                }
                if((0==T[i-1])&&(est_dans(liste_indice_traites, i-1) == 0 )){
                    remplie_terre_rec(T, chaine, liste_indice_traites, i-1);
                }
            }
            if( i == 73 ){
                if((0==T[i+1])&&(est_dans(liste_indice_traites, i+1) == 0 )){
                    remplie_terre_rec(T, chaine, liste_indice_traites, i+1);
                }
                if((0==T[i-9])&&(est_dans(liste_indice_traites, i-9) == 0 )){
                    remplie_terre_rec(T, chaine, liste_indice_traites, i-9);
                }
            }
        }
        if ( est_dans( L1, i) == 1 ){
            if((0 == T[i-1])&&( est_dans(liste_indice_traites, i-1) == 0)){
                remplie_terre_rec(T, chaine, liste_indice_traites, i-1);
            }
            if((0==T[i+1])&&(est_dans(liste_indice_traites, i+1) == 0 )){
                remplie_terre_rec(T, chaine, liste_indice_traites, i+1);
            }
            if((0==T[i+9])&&(est_dans(liste_indice_traites, i+9) == 0 )){
                remplie_terre_rec(T, chaine, liste_indice_traites, i+9);
            }
        }
        if ( est_dans( L2, i) == 1 ){
            if((0 == T[i-9])&&( est_dans(liste_indice_traites, i-9) == 0)){
                remplie_terre_rec(T, chaine, liste_indice_traites, i-9);
            }
            if((0==T[i-1])&&(est_dans(liste_indice_traites, i-1) == 0 )){
                remplie_terre_rec(T, chaine, liste_indice_traites, i-1);
            }
            if((0==T[i+1])&&(est_dans(liste_indice_traites, i+1) == 0 )){
                remplie_terre_rec(T, chaine, liste_indice_traites, i+1);
            }
        }
        if ( est_dans( C2, i) == 1 ){
            if((0 == T[i-9])&&( est_dans(liste_indice_traites, i-9) == 0)){
                remplie_terre_rec(T, chaine, liste_indice_traites, i-9);
            }
            if((0==T[i-1])&&(est_dans(liste_indice_traites, i-1) == 0 )){
                remplie_terre_rec(T, chaine, liste_indice_traites, i-1);
            }
            if((0==T[i+9])&&(est_dans(liste_indice_traites, i+9) == 0 )){
                remplie_terre_rec(T, chaine, liste_indice_traites, i+9);
            }
        }
        if ( est_dans( C1, i) == 1 ){
            if((0 == T[i-9])&&( est_dans(liste_indice_traites, i-9) == 0)){
                remplie_terre_rec(T, chaine, liste_indice_traites, i-9);
            }
            if((0==T[i+1])&&(est_dans(liste_indice_traites, i+1) == 0 )){
                remplie_terre_rec(T, chaine, liste_indice_traites, i+1);
            }
            if((0==T[i+9])&&(est_dans(liste_indice_traites, i+9) == 0 )){
                remplie_terre_rec(T, chaine, liste_indice_traites, i+9);
            }
        }
        if ( ( est_dans( C1, i) == 0 ) && ( est_dans( C2, i) == 0 ) && ( est_dans( L2, i) == 0 ) && ( est_dans( L1, i) == 0 ) && ( est_dans( cotes, i) == 0 )) {
            if ((T[i-9]==0) && ( est_dans(liste_indice_traites, i-9)==0)){
                remplie_terre_rec( T, chaine, liste_indice_traites, i-9);
            }
            if ((T[i-1]==0) && ( est_dans(liste_indice_traites, i-1)==0)){
                remplie_terre_rec( T, chaine, liste_indice_traites, i-1);
            }
            if ((T[i+1]==0) && ( est_dans(liste_indice_traites, i+1)==0)){
                remplie_terre_rec(T, chaine, liste_indice_traites, i+1);
            }
            if ((T[i+9]==0) && ( est_dans(liste_indice_traites, i+9)==0)){
                remplie_terre_rec(T, chaine, liste_indice_traites, i+9);
            }
        }
    }
}

int librete_terre(int *T, int i){ /// La version de degré de liberté pour les terretoires.
    int L1 [7] = {2, 3, 4, 5, 6, 7, 8};
    int L2 [7] = {74, 75, 76, 77, 78, 79, 80};
    int C1 [8] = {10, 19, 28, 37, 46, 55, 64};
    int C2 [8] = {18, 27, 36, 45, 54, 63, 72};
    int cotes[4] = {1, 9, 73, 81};
    if ( est_dans( cotes, i) == 1 ){
        if( i == 1 ){
            if(T[i+9] == 0 ){
                return 1;
            }
            if (T[i+1] == 0){
                return 1;
            }
        }
        if( i == 9 ){
            if(T[i-1]==0){
                return 1;
            }
            if(T[i+9]==0){
                return 1;
            }
        }
        if( i == 81 ){
            if(T[i-1]==0){
                return 1;
            }
            if(T[i-9]==0){
                return 1;
            }
        }
        if( i == 73 ){
            if(T[i-9]==0){
                return 1;
            }
            if(T[i+1]==0){
                return 1;
            }
        }
    }
    if ( est_dans( L1, i) == 1 ){
        if(T[i+1] == 0 ){
            return 1;
        }
        if(T[i-1]== 0 ){
            return 1;
        }
        if(T[i+9]== 0){
            return 1;
        }
    }
    if ( est_dans( L2, i) == 1 ){
        if(T[i+1] == 0){
            return 1;
        }
        if(T[i-1] == 0){
            return 1;
        }
        if(T[i-9]==0){
            return 1;
        }
    }
    if ( est_dans( C2, i) == 1 ){
        if(T[i+9] == 0){
            return 1;
        }
        if(T[i-1]== 0){
            return 1;
        }
        if(T[i-9]==0){
            return 1;
        }
    }
    if ( est_dans( C1, i) == 1 ){
        if(T[i+9] == 0){
            return 1;
        }
        if(T[i+1]==0){
            return 1;
        }
        if(T[i-9]== 0 ){
            return 1;
        }
    }
    if ( ( est_dans( C1, i) == 0 ) && ( est_dans( C2, i) == 0 ) && ( est_dans( L2, i) == 0 ) && ( est_dans( L1, i) == 0 ) && ( est_dans( cotes, i) == 0 )) {
        if (T[i-9]==0){
            return 1;
        }
        if (T[i-1]==0){
            return 1;
        }
        if (T[i+1]==0){
            return 1;
        }
        if (T[i+9]==0){
            return 1;
        }
    }
    return 0;
}

int terretoire_propre(int *T, int *terre){ /// Verifie si le terretoire est propre à un joueur précise ou non.
    int *voisines;
    voisines = (int*)calloc(81, sizeof(int));
    remplie_voisines(T, terre, voisines);
    for( int x=0; x<81; x++){
        if ( voisines[x] == 0){
            break;
        }
        if ( T[voisines[x]] != T[voisines[0]]){
            free(voisines);
            return 0;
        }
    }
    return T[voisines[0]];
}

void remplie_voisines(int *T, int *Terre, int *voisines){ /// Determiner les voisines d'une positions.

    for( int y = 0; y<81; y++){
        if ( Terre[y] == 0 ){
            break;
        }
        ajouter_voisines(T, Terre[y], voisines);
    }
}

void ajouter_voisines(int *T, int i, int *voisines){ /// ajouter les voisines d'une position à dans une liste.
    int *liste_deja_traite;
    liste_deja_traite = (int*)calloc(81, sizeof(int));
    int L1 [7] = {2, 3, 4, 5, 6, 7, 8};
    int L2 [7] = {74, 75, 76, 77, 78, 79, 80};
    int C1 [7] = {10, 19, 28, 37, 46, 55, 64};
    int C2 [7] = {18, 27, 36, 45, 54, 63, 72};
    int cotes [4] = {1, 9, 73, 81};

    if ( est_dans( L1, i) == 1 ){
        if( ( T[i] != T[i-1] ) && (est_dans(liste_deja_traite, i-1)) == 0 ) {
            ajouter_au_liste(voisines, i-1);
            ajouter_au_liste(liste_deja_traite, i-1);
        }
        if ( ( T[i] != T[i+1] ) && (est_dans(liste_deja_traite, i+1) == 0) ) {
            ajouter_au_liste(voisines, i+1);
            ajouter_au_liste(liste_deja_traite, i+1);
        }
        if ( ( T[i] != T[i+9] ) && (est_dans(liste_deja_traite, i+9) == 0) ) {
            ajouter_au_liste(voisines, i+9);
            ajouter_au_liste(liste_deja_traite, i+9);
        }
    }

    if ( est_dans( L2, i) == 1 ){
        if ( ( T[i] != T[i-9] ) && (est_dans(liste_deja_traite, i-9) == 0) ) {
            ajouter_au_liste(voisines, i-9);
            ajouter_au_liste(liste_deja_traite, i-9);
        }
        if ( ( T[i] != T[i-1] ) && (est_dans(liste_deja_traite, i-1) == 0) ) {
            ajouter_au_liste(voisines, i-1);
            ajouter_au_liste(liste_deja_traite, i-1);
        }
        if ( ( T[i] != T[i+1] ) && (est_dans(liste_deja_traite, i+1) == 0) ) {
            ajouter_au_liste(voisines, i+1);
            ajouter_au_liste(liste_deja_traite, i+1);
        }
    }

    if ( est_dans( cotes, i) == 1 ){
        if (i == 1){
            if ( ( T[i] != T[i+1] )&& (est_dans(liste_deja_traite, i+1) == 0) ) {
                ajouter_au_liste(voisines, i+1);
                ajouter_au_liste(liste_deja_traite, i+1);
            }
            if ( ( T[i] != T[i+9] ) && (est_dans(liste_deja_traite, i+9) == 0) ) {
                ajouter_au_liste(voisines, i+9);
                ajouter_au_liste(liste_deja_traite, i+9);
            }
        }
        if (i == 81){
            if ( ( T[i] != T[i-1] ) && (est_dans(liste_deja_traite, i-1) == 0) ) {
                ajouter_au_liste(voisines, i-1);
                ajouter_au_liste(liste_deja_traite, i-1);
            }
            if ( ( T[i] != T[i-9] ) && (est_dans(liste_deja_traite, i-9)) ) {
                ajouter_au_liste(voisines, i-9);
                ajouter_au_liste(liste_deja_traite, i-9);
            }
        }
        if (i == 9){
            if ( ( T[i] != T[i-1] ) && (est_dans(liste_deja_traite, i-1) == 0) ) {
                ajouter_au_liste(voisines, i-1);
                ajouter_au_liste(liste_deja_traite, i-1);
            }
            if ( ( T[i] != T[i+9] ) && (est_dans(liste_deja_traite, i+9) == 0 ) ) {
                ajouter_au_liste(voisines, i+9);
                ajouter_au_liste(liste_deja_traite, i+9);
            }
        }
        if (i == 73){
            if ( ( T[i] != T[i+1] ) && (est_dans(liste_deja_traite, i+1) == 0) ) {
                ajouter_au_liste(voisines, i+1);
                ajouter_au_liste(liste_deja_traite, i+1);
            }
            if ( ( T[i] != T[i-9] ) && (est_dans(liste_deja_traite, i-9) == 0) ) {
                ajouter_au_liste(voisines, i-9);
                ajouter_au_liste(liste_deja_traite, i-9);
            }
        }
    }

    if ( est_dans( C2, i) == 1 ){
        if ( ( T[i] != T[i-9] ) && (est_dans(liste_deja_traite, i-9) == 0) ) {
            ajouter_au_liste(voisines, i-9);
            ajouter_au_liste(liste_deja_traite, i-9);
        }
        if ( ( T[i] != T[i-1] ) && (est_dans(liste_deja_traite, i-1) == 0) ) {
            ajouter_au_liste(voisines, i-1);
            ajouter_au_liste(liste_deja_traite, i-1);
        }
        if ( ( T[i] != T[i+9] ) && (est_dans(liste_deja_traite, i+9) == 0 ) ) {
            ajouter_au_liste(voisines, i+9);
            ajouter_au_liste(liste_deja_traite, i+9);
        }
    }

    if ( est_dans( C1, i) == 1 ){
        if( ( T[i] != T[i-9] ) && (est_dans(liste_deja_traite, i-9) == 0) ) {
            ajouter_au_liste(voisines, i-9);
            ajouter_au_liste(liste_deja_traite, i-9);
        }
        if ( ( T[i] != T[i+1] ) && (est_dans(liste_deja_traite, i+1) == 0 ) ) {
            ajouter_au_liste(voisines, i+1);
            ajouter_au_liste(liste_deja_traite, i+1);
        }
        if ( ( T[i] != T[i+9] ) && (est_dans(liste_deja_traite, i+9) == 0) ) {
            ajouter_au_liste(voisines, i+9);
            ajouter_au_liste(liste_deja_traite, i+9);
        }
    }

    if ( ( est_dans( C1, i) == 0 ) && ( est_dans( C2, i) == 0 ) && ( est_dans( L1, i) == 0 ) && ( est_dans( L2, i) == 0 ) && ( est_dans( cotes, i) == 0 )) {
        if ( (T[i-9] != T[i] ) && (est_dans(liste_deja_traite, i-9) == 0) ) {
            ajouter_au_liste(voisines, i-9);
            ajouter_au_liste(liste_deja_traite, i-9);
        }
        if ( ( T[i-1] != T[i] ) && (est_dans(liste_deja_traite, i-1) == 0) ) {
            ajouter_au_liste(voisines, i-1);
            ajouter_au_liste(liste_deja_traite, i-1);
        }
        if ( ( T[i+1] != T[i] ) && (est_dans(liste_deja_traite, i+1) == 0) ) {
            ajouter_au_liste(voisines, i+1);
            ajouter_au_liste(liste_deja_traite, i+1);
        }
        if ( ( T[i+9] != T[i] ) && (est_dans(liste_deja_traite, i+9) == 0) ) {
            ajouter_au_liste(voisines, i+9);
            ajouter_au_liste(liste_deja_traite, i+9);
        }
    }
    free(liste_deja_traite);
}

void resultat(int *T, float *points1, float *points2){ /// Permet de calcluer le résultat finale de donner à chaque joueur la valeur des terretoire qu'il détient.
    int **terretoires;
    float t = 0, m;
    terretoires = (int*)calloc(82, sizeof(int));
    for ( int f = 0; f<82; f++ ){
        terretoires [f] = (int*)calloc(82, sizeof(int));
    }
    calcule_terretoire(T, terretoires);
    for ( int f=1; f<82; f++ ){
        if ( terretoires[f][0] == 0 ){
            break;
        }
        m = terretoire_propre(T, terretoires[f]);
        if ( m != 0 ){
            if( m == 1 ){
                t = taille_chaine(terretoires[f]);
                *points1 = *points1 + t;
            }
            if( m == 2 ){
                t = taille_chaine(terretoires[f]);
                *points2 = *points2 + t;
            }
        }
    }
}


/// ############################################################ Le cas de l'intelegence. ###############################################################

int atari_chaine(int *T, int *chaine){ /// Permet de vérifier si une chaine est dans une situation de chaine atari "mono liberté", elle renvoie 1 si Oui et O si Non.
    if ( degree_liberte_chaine(T, chaine) == 1 ){
        return 1;
    }
    else{
        return 0;
    }
}

int indice_atari_chaine(int *T, int *chaine){ /// Elle retourne l'indice de la seule liberté d'une chaine atari;
    int C1 [7] = {10, 19, 28, 37, 46, 55, 64};
    int C2 [8] = {9, 18, 27, 36, 45, 54, 63, 72};
    for (int j=0; j<81; j++){
        if( chaine[j]==0){
            break;
        }
        else{
            int i;
            i = chaine[j];
            if ( est_dans( C2, i) == 1 ){
                if ( 0 == T[i-9] ){
                    return i-9;
                }
                if ( 0 == T[i-1] ){
                    return i-1;
                }
                if ( 0 == T[i+9] ){
                    return i+9;
                }
            }
            if ( est_dans( C1, i) == 1 ){
                if( 0 == T[i-9] ){
                    return i-9;
                }
                if ( 0 == T[i+1] ){
                    return i+1;
                }
                if ( 0 == T[i+9] ){
                    return i+9;
                }
            }
            if ( ( est_dans( C1, i) == 0 ) && ( est_dans( C2, i) == 0 )) {
                if ( T[i-9] == 0 ){
                    return i-9;
                }
                if ( T[i-1] == 0 ){
                    return i-1;
                }
                if ( T[i+1] == 0 ){
                    return i+1;
                }
                if ( T[i+9] == 0 ){
                    return i+9;
                }
            }
        }

    }
}

int indice_atari_pierre(int *T, int i){ /// Elle retourne l'indice de la seule liberté d'une pierre atari;
    int C1 [7] = {10, 19, 28, 37, 46, 55, 64};
    int C2 [7] = {18, 27, 36, 45, 54, 63, 72};
    if ( est_dans( C2, i) == 1 ){
        if ( 0 == T[i-9] ){
            return i-9;
        }
        if ( 0 == T[i-1] ){
            return i-1;
        }
        if ( 0 == T[i+9] ){
            return i+9;
        }
    }
    if ( est_dans( C1, i) == 1 ){
        if( 0 == T[i-9] ){
            return i-9;
        }
        if ( 0 == T[i+1] ){
            return i+1;
        }
        if ( 0 == T[i+9] ){
            return i+9;
        }
    }
    if ( ( est_dans( C1, i) == 0 ) && ( est_dans( C2, i) == 0 )) {
        if ( T[i-9] == 0 ){
            return i-9;
        }
        if ( T[i-1] == 0 ){
            return i-1;
        }
        if ( T[i+1] == 0 ){
            return i+1;
        }
        if ( T[i+9] == 0 ){
            return i+9;
        }
    }
}

int atari_pierre(int *T, int i){/// Permet de vérifier si une pierre est dans une situation de chaine atari "mono liberté", elle renvoie 1 si Oui et O si Non.
    if ( degree_liberte(T, i) == 1 ){
        return 1;
    }
    else {
        return 0;
    }
}

int intillegence(int *T, int **chaines){ /// Cette fonction returne l'indice de la meilleur
    remplie_chaines(T, chaines); /// position à mettre la prochaine pierre pour la machine.
    int c = 1;
    while ( ( chaines[c][0] != 0 ) ) { /// Strategies de défence.
        if (  ( T[chaines[c][0]] == 2 ) && (atari_chaine(T, chaines[c]) == 1 ) ){
            return indice_atari_chaine(T, chaines[c]);
        }
        c++;
    }

    for ( int j=1; j<82; j++ ){
        if ( ( atari_pierre(T, j) == 1) && ( T[j] == 2 ) ){
            return indice_atari_pierre(T, j);
        }
    }

    c = 1;
    while ( ( chaines[c][0] != 0 ) ) {/// Strategies d'attaque.
        if ( ( atari_chaine(T, chaines[c]) == 1 ) && ( T[chaines[c][0]] == 1 ) ){
            return indice_atari_chaine(T, chaines[c]);
        }
        c++;
    }

    for ( int j=1; j<82; j++ ){
        if ( ( atari_pierre(T, j) == 1) && ( T[j] == 1 ) ){
            return indice_atari_pierre(T, j);
        }
    }

    for( int i =1; i<82; i++ ){  /// Strategies de siége
        if( T[i] == 1 ){
            int L1 [7] = {2, 3, 4, 5, 6, 7, 8};
            int L2 [7] = {74, 75, 76, 77, 78, 79, 80};
            int C1 [7] = {10, 19, 28, 37, 46, 55, 64};
            int C2 [7] = {18, 27, 36, 45, 54, 63, 72};
            int cotes [4] = {1, 9, 73, 81};
            if ( est_dans( L2, i) == 1 ){
                if ( 0 == T[i-9] ){
                    return i-9;
                }
                if ( 0 == T[i-1] ){
                    return i-1;
                }
                if ( 0 == T[i+1] ){
                    return i+1;
                }
            }
            if ( est_dans( cotes, i) == 1 ){
                if (i == 1){
                    if ( 0 == T[i+1] ){
                        return i+1;
                    }
                    if ( 0 == T[i+9] ){
                        return i+9;
                    }
                }
                if (i == 81){
                    if ( 0 == T[i-1] ){
                        return i-1;
                    }
                    if ( 0 == T[i-9] ){
                        return i-9;
                    }
                }
                if (i == 9){
                    if ( 0 == T[i-1] ){
                        return i-1;
                    }
                    if ( 0 == T[i+9] ){
                        return i+9;
                    }
                }
                if (i == 73){
                    if ( 0 == T[i+1] ){
                        return i+1;
                    }
                    if ( 0 == T[i-9] ){
                        return i-9;
                    }
                }
            }
            if ( est_dans( L1, i) == 1 ){
                if( 0 == T[i-1] ){
                    return i-1;
                }
                if ( 0 == T[i+1] ){
                    return i+1;
                }
                if ( 0 == T[i+9] ){
                    return i+9;
                }
            }
            if ( est_dans( C2, i) == 1 ){
                if ( 0 == T[i-9] ){
                    return i-9;
                }
                if ( 0 == T[i-1] ){
                    return i-1;
                }
                if ( 0 == T[i+9] ){
                    return i+9;
                }
            }
            if ( est_dans( C1, i) == 1 ){
                if( 0 == T[i-9] ){
                    return i-9;
                }
                if ( 0 == T[i+1] ){
                    return i+1;
                }
                if ( 0 == T[i+9] ){
                    return i+9;
                }
            }
            if ( ( est_dans( C1, i) == 0 ) && ( est_dans( C2, i) == 0 ) && ( est_dans( L1, i) == 0 ) && ( est_dans( L2, i) == 0 ) && ( est_dans( cotes, i) == 0 )) {
                if ( T[i-9] == 0 ){
                    return i-9;
                }
                if ( T[i-1] == 0 ){
                    return i-1;
                }
                if ( T[i+1] == 0 ){
                    return i+1;
                }
                if ( T[i+9] == 0 ){
                    return i+9;
                }
            }
        }
    }

    return position_aleatoire();
}


/// ########################################################### Regles et Tsumego rules ################################################################

void look_for_interdicts(int *T, int *pos_interdict, int j){ /// Pour rechercher les positions interdits pour
    for ( int d = 1 ; d<82; d++ ){ /// chacunes des joueurs.Et elle les retourne dans la liste pos_interdict
        if( suiscide(T, d, j) == 1 ){
            ajouter_au_liste( pos_interdict, d );
        }
    }
}

int suiscide(int *T, int i, int j){ /// i : position en question.
    int L1 [7] = {2, 3, 4, 5, 6, 7, 8};///, j : numero de joueur (1 ou 2)
    int L2 [7] = {74, 75, 76, 77, 78, 79, 80};
    int C1 [7] = {10, 19, 28, 37, 46, 55, 64};
    int C2 [7] = {18, 27, 36, 45, 54, 63, 72};
    int cotes [4] = {1, 9, 73, 81};
    if ( est_dans( L2, i) == 1 ){
        if ( ( T[i-1] == T[i-9] ) && ( T[i+1] == T[i-9] ) && ( T[i+1] != 0 ) && ( T[i+1] != j ) ) {
            return 1;
        }
    }
    if ( est_dans( cotes, i) == 1 ){
        if (i == 1){
            if (( T[i+9] == T[i+1] ) && ( 0 != T[i+9] ) && ( j != T[i+9] ) ){
                return 1;
            }
        }
        if (i == 81){
            if (( T[i-9] == T[i-1] ) && ( 0 != T[i-9] ) && ( j != T[i-9] ) ){
                return 1;
            }
        }
        if (i == 9){
            if (( T[i+9] == T[i-1] ) && ( 0 != T[i+9] ) && ( j != T[i+9] ) ){
                return 1;
            }
        }
        if (i == 73){
            if (( T[i-9] == T[i+1] ) && ( 0 != T[i-9] ) && ( j != T[i-9] ) ){
                return 1;
            }
        }
    }
    if ( est_dans( L1, i) == 1 ){
        if ( ( T[i-1] == T[i+9] ) && ( T[i+1] == T[i+9] ) && ( T[i+1] != 0 ) && ( T[i+1] != j ) ) {
            return 1;
        }
    }
    if ( est_dans( C2, i) == 1 ){
        if ( ( T[i-1] == T[i-9] ) && ( T[i-1] == T[i+9] ) && ( T[i-1] != 0 ) && ( T[i-1] != j ) ) {
            return 1;
        }
    }
    if ( est_dans( C1, i) == 1 ){
        if ( ( T[i+1] == T[i-9] ) && ( T[i+1] == T[i+9] ) && ( T[i+1] != 0 ) && ( T[i+1] != j ) ) {
            return 1;
        }
    }
    if ( ( est_dans( C1, i) == 0 ) && ( est_dans( C2, i) == 0 ) && ( est_dans( L1, i) == 0 ) && ( est_dans( L2, i) == 0 ) && ( est_dans( cotes, i) == 0 )) {
        if ( ( T[i-1] == T[i-9] ) && ( T[i-1] == T[i+9] ) && ( T[i-1] == T[i+1] ) && ( T[i-1] != 0 ) && ( T[i-1] != j ) ) {
            return 1;
        }
    }
    return 0;
}

void remplie_ko_liste(int *T, int i, int *ko_liste){ /// Permet d'ajouter l'indice de la position interdite par le coup successive.
    int L1 [7] = {2, 3, 4, 5, 6, 7, 8};
    int L2 [7] = {74, 75, 76, 77, 78, 79, 80};
    int C1 [7] = {10, 19, 28, 37, 46, 55, 64};
    int C2 [7] = {18, 27, 36, 45, 54, 63, 72};

    if ( est_dans(L1, i)==1){
        if (((T[i-1] == T[i+1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i+2] == T[i+10]))&&(T[i-1] != T[i+2])&&(0 !=T[i+2])){
            ajouter_au_liste(ko_liste, i+1) ;
        }
        if (((T[i-1] == T[i+1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i-2] == T[i+8]))&&(T[i-1] != T[i-2])&&(0 !=T[i-2])){
            ajouter_au_liste(ko_liste, i-1) ;
        }
    }
    if ( est_dans(L2, i)==1){
        if (((T[i-1] == T[i+1])&&(T[i-1] == T[i-9])&&(T[i-1] != 0))&&((T[i+2] == T[i-8]))&&(T[i-1] != T[i+2])&&(0 !=T[i+2])){
            ajouter_au_liste(ko_liste, i+1) ;
        }
        if (((T[i-1] == T[i+1])&&(T[i-1] == T[i-9])&&(T[i-1] != 0))&&((T[i-2] == T[i-10]))&&(T[i-1] != T[i-2])&&(0 !=T[i-2])){
            ajouter_au_liste(ko_liste, i-1) ;
        }
    }
    if ( est_dans(C1, i)==1){
        if (((T[i-9] == T[i+1])&&(T[i+1] == T[i+9])&&(T[i+1] != 0))&&((T[i+18] == T[i+10]))&&(T[i+1] != T[i+10])&&(0 !=T[i+10])){
            ajouter_au_liste(ko_liste, i+9) ;
        }
        if (((T[i-9] == T[i+1])&&(T[i-9] == T[i+9])&&(T[i+1] != 0))&&((T[i-18] == T[i-8]))&&(T[i+1] != T[i-8])&&(0 !=T[i-8])){
            ajouter_au_liste(ko_liste, i-9) ;
        }
    }
    if ( est_dans(C2, i)==1){
        if (((T[i-9] == T[i-1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i+18] == T[i+8]))&&(T[i-1] != T[i+8])&&(0 !=T[i+8])){
            ajouter_au_liste(ko_liste, i+9) ;
        }
        if (((T[i-9] == T[i-1])&&(T[i-9] == T[i+9])&&(T[i-1] != 0))&&((T[i-18] == T[i-10]))&&(T[i-1] != T[i-10])&&(0 !=T[i-10])){
            ajouter_au_liste(ko_liste, i-9) ;
        }
    }

    if ( ( est_dans(L1, i)==0) && ( est_dans(L2, i)==0) && ( est_dans(C1, i)==0) && ( est_dans(C2, i)==0) ) {
        if (((T[i-1] == T[i+1])&&(T[i-9] == T[i-1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i-8]==T[i+2])&&(T[i+2] == T[i+10]))&&(T[i-1] != T[i+2])&&( 0 !=T[i+2])){
            ajouter_au_liste(ko_liste, i+1) ;
        }
        if (((T[i-1] == T[i+1])&&(T[i-9] == T[i-1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i-10]==T[i-2])&&(T[i-2] == T[i+8]))&&(T[i-2] != T[i-1])&&( 0 !=T[i+2])){
            ajouter_au_liste(ko_liste, i-1) ;
        }
        if (((T[i-1] == T[i+1])&&(T[i-9] == T[i-1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i+8]==T[i+10])&&(T[i+18] == T[i+10]))&&(T[i-1] != T[i+8])&&( 0 !=T[i+8])){
            ajouter_au_liste(ko_liste, i+9) ;
        }
        if (((T[i-1] == T[i+1])&&(T[i-9] == T[i-1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i-10]==T[i-8])&&(T[i-8] == T[i-18]))&&(T[i-8] != T[i-1])&&( 0 !=T[i-8])){
            ajouter_au_liste(ko_liste, i-1) ;
        }
    }
}

void remplie_ko_positions(int *T, int *positoins_ko){ /// Determine les positions où il ya le coup Ko est les retourne dans la liste positions_ko
    for(int i=1; i<81; i++ ){
        if ( est_ko(T, i) == 1 ){
            ajouter_au_liste(positoins_ko, i);
        }
    }
}

int est_ko(int *T, int i){ /// Cette fonction permet de connaitre si la position i est une position de ko, elle renvoie 1 si oui et 0 si non.
    int L1 [7] = {2, 3, 4, 5, 6, 7, 8};
    int L2 [7] = {74, 75, 76, 77, 78, 79, 80};
    int C1 [7] = {10, 19, 28, 37, 46, 55, 64};
    int C2 [7] = {18, 27, 36, 45, 54, 63, 72};

    if ( est_dans(L1, i)==1){
        if (((T[i-1] == T[i+1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i+2] == T[i+10]))&&(T[i-1] != T[i+2])&&(0 !=T[i+2])){
            return 1;
        }
        if (((T[i-1] == T[i+1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i-2] == T[i+8]))&&(T[i-1] != T[i-2])&&(0 !=T[i-2])){
            return 1;
        }
    }
    if ( est_dans(L2, i)==1){
        if (((T[i-1] == T[i+1])&&(T[i-1] == T[i-9])&&(T[i-1] != 0))&&((T[i+2] == T[i-8]))&&(T[i-1] != T[i+2])&&(0 !=T[i+2])){
            return 1;
        }
        if (((T[i-1] == T[i+1])&&(T[i-1] == T[i-9])&&(T[i-1] != 0))&&((T[i-2] == T[i-10]))&&(T[i-1] != T[i-2])&&(0 !=T[i-2])){
            return 1;
        }
    }
    if ( est_dans(C1, i)==1){
        if (((T[i-9] == T[i+1])&&(T[i+1] == T[i+9])&&(T[i+1] != 0))&&((T[i+18] == T[i+10]))&&(T[i+1] != T[i+10])&&(0 !=T[i+10])){
            return 1;
        }
        if (((T[i-9] == T[i+1])&&(T[i-9] == T[i+9])&&(T[i+1] != 0))&&((T[i-18] == T[i-8]))&&(T[i+1] != T[i-8])&&(0 !=T[i-8])){
            return 1;
        }
    }
    if ( est_dans(C2, i)==1){
        if (((T[i-9] == T[i-1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i+18] == T[i+8]))&&(T[i-1] != T[i+8])&&(0 !=T[i+8])){
            return 1;
        }
        if (((T[i-9] == T[i-1])&&(T[i-9] == T[i+9])&&(T[i-1] != 0))&&((T[i-18] == T[i-10]))&&(T[i-1] != T[i-10])&&(0 !=T[i-10])){
            return 1;
        }
    }

    if ( ( est_dans(L1, i)==0) && ( est_dans(L2, i)==0) && ( est_dans(C1, i)==0) && ( est_dans(C2, i)==0) ) {
        if (((T[i-1] == T[i+1])&&(T[i-9] == T[i-1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i-8]==T[i+2])&&(T[i+2] == T[i+10]))&&(T[i-1] != T[i+2])&&( 0 !=T[i+2])){
            return 1;
        }
        if (((T[i-1] == T[i+1])&&(T[i-9] == T[i-1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i-10]==T[i-2])&&(T[i-2] == T[i+8]))&&(T[i-2] != T[i-1])&&( 0 !=T[i+2])){
            return 1;
        }
        if (((T[i-1] == T[i+1])&&(T[i-9] == T[i-1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i+8]==T[i+10])&&(T[i+18] == T[i+10]))&&(T[i-1] != T[i+8])&&( 0 !=T[i+8])){
            return 1;
        }
        if (((T[i-1] == T[i+1])&&(T[i-9] == T[i-1])&&(T[i-1] == T[i+9])&&(T[i-1] != 0))&&((T[i-10]==T[i-8])&&(T[i-8] == T[i-18]))&&(T[i-8] != T[i-1])&&( 0 !=T[i-8])){
            return 1;
        }
    }
    return 0;
}

void reinitiliser(int **chaines){ /// Permet de reinitialiser la liste des chaines par des zéros
    for(int o=1; o<82; o++){
        for(int q=0; q<82; q++){
            if(chaines[o][q] == 0){
                break;
            }
            else{
                chaines[o][q] = 0;
            }
        }
    }
}

int est_dans(int *liste_indice_traites, int i){ /// permert de vérifier si une indice "pierre" exite dans tableau "chaine", et renvoie 1 si Oui 0 si Non
    for (int j=0; j<81; j++){
        if (liste_indice_traites[j] == i){
            return 1;
        }
        if (liste_indice_traites[j]==0){
            return 0;
        }
    }
}

void remplie_chaines(int *T, int **chaines){ /// il faut vérifier que l'indice i n'est pas dans l'une des chaines
    int *liste_indice_traites;
    liste_indice_traites = (int*) calloc(81, sizeof(int));
    int k = 1;
    reinitiliser(chaines);
    for( int i = 1; i<82; i++ ){                                    // cad n'est dans la liste des indicesdeja traites avant l'appel a cette fct
        if (( T[i] != 0 )&&(est_dans(liste_indice_traites, i) == 0)){
            remplie_rec( T, chaines[k], liste_indice_traites, i);
            k++;
        }
    }
}

int libre(int *T, int i){ /// Verifie si la pierre d'indice i est libre, elle renvie 1 si Oui 0 si Non.
    if (T[i+1] != 0){
        return 0;
    }
    if (T[i-1] != 0){
        return 0;
    }
    if (T[i+9] != 0 ){
        return 0;
    }
    if (T[i-9] != T[i] ){
        return 0;
    }
    else{
        return 1;
    }
}

void ajouter_au_liste(int *liste_indice_traites, int i ){ /// Permet d'ajouter l'element i dans la liste : a la fin de la liste.
    for (int j=0; j<81; j++){
        if (liste_indice_traites[j]==0){
            liste_indice_traites[j]= i;
            break;
        }
    }
}

void remplie_rec(int *T, int *chaine, int *liste_indice_traites, int i){ /// IL permet de remplir les indices d'une chaine de liste des chaines.
    if ( (libre(T,i)==1) || (nbr_voisines_meme(T, i)==0) || (voisines_non_traites( T, liste_indice_traites, i ) == 0)){
        ajouter_au_liste(liste_indice_traites, i);
        ajouter_au_liste(chaine, i);
    }
    else{
        ajouter_au_liste(liste_indice_traites, i);
        ajouter_au_liste(chaine, i);
        int L1 [7] = {2, 3, 4, 5, 6, 7, 8};
        int L2 [7] = {74, 75, 76, 77, 78, 79, 80};
        int C1 [8] = {10, 19, 28, 37, 46, 55, 64};
        int C2 [8] = {18, 27, 36, 45, 54, 63, 72};
        int cotes[4] = {1, 9, 73, 81};
        if ( est_dans( cotes, i) == 1 ){
            if( i == 1 ){
                if((T[i]==T[i+1])&&(est_dans(liste_indice_traites, i+1) == 0 )){
                    remplie_rec(T, chaine, liste_indice_traites, i+1);
                }
                if((T[i]==T[i+9])&&(est_dans(liste_indice_traites, i+9) == 0 )){
                    remplie_rec(T, chaine, liste_indice_traites, i+9);
                }
            }
            if( i == 9 ){
                if((T[i]==T[i-1])&&(est_dans(liste_indice_traites, i-1) == 0 )){
                    remplie_rec(T, chaine, liste_indice_traites, i-1);
                }
                if((T[i]==T[i+9])&&(est_dans(liste_indice_traites, i+9) == 0 )){
                    remplie_rec(T, chaine, liste_indice_traites, i+9);
                }
            }
            if( i == 81 ){
                if((T[i]==T[i-9])&&(est_dans(liste_indice_traites, i-9) == 0 )){
                    remplie_rec(T, chaine, liste_indice_traites, i-1);
                }
                if((T[i]==T[i-1])&&(est_dans(liste_indice_traites, i-1) == 0 )){
                    remplie_rec(T, chaine, liste_indice_traites, i-1);
                }
            }
            if( i == 73 ){
                if((T[i]==T[i+1])&&(est_dans(liste_indice_traites, i+1) == 0 )){
                    remplie_rec(T, chaine, liste_indice_traites, i+1);
                }
                if((T[i]==T[i-9])&&(est_dans(liste_indice_traites, i-9) == 0 )){
                    remplie_rec(T, chaine, liste_indice_traites, i-9);
                }
            }
        }
        if ( est_dans( L1, i) == 1 ){
            if((T[i] == T[i-1])&&( est_dans(liste_indice_traites, i-1) == 0)){
                remplie_rec(T, chaine, liste_indice_traites, i-1);
            }
            if((T[i]==T[i+1])&&(est_dans(liste_indice_traites, i+1) == 0 )){
                remplie_rec(T, chaine, liste_indice_traites, i+1);
            }
            if((T[i]==T[i+9])&&(est_dans(liste_indice_traites, i+9) == 0 )){
                remplie_rec(T, chaine, liste_indice_traites, i+9);
            }
        }
        if ( est_dans( L2, i) == 1 ){
            if((T[i] == T[i-9])&&( est_dans(liste_indice_traites, i-9) == 0)){
                remplie_rec(T, chaine, liste_indice_traites, i-9);
            }
            if((T[i]==T[i-1])&&(est_dans(liste_indice_traites, i-1) == 0 )){
                remplie_rec(T, chaine, liste_indice_traites, i-1);
            }
            if((T[i]==T[i+1])&&(est_dans(liste_indice_traites, i+1) == 0 )){
                remplie_rec(T, chaine, liste_indice_traites, i+1);
            }
        }
        if ( est_dans( C2, i) == 1 ){
            if((T[i] == T[i-9])&&( est_dans(liste_indice_traites, i-9) == 0)){
                remplie_rec(T, chaine, liste_indice_traites, i-9);
            }
            if((T[i]==T[i-1])&&(est_dans(liste_indice_traites, i-1) == 0 )){
                remplie_rec(T, chaine, liste_indice_traites, i-1);
            }
            if((T[i]==T[i+9])&&(est_dans(liste_indice_traites, i+9) == 0 )){
                remplie_rec(T, chaine, liste_indice_traites, i+9);
            }
        }
        if ( est_dans( C1, i) == 1 ){
            if((T[i] == T[i-9])&&( est_dans(liste_indice_traites, i-9) == 0)){
                remplie_rec(T, chaine, liste_indice_traites, i-9);
            }
            if((T[i]==T[i+1])&&(est_dans(liste_indice_traites, i+1) == 0 )){
                remplie_rec(T, chaine, liste_indice_traites, i+1);
            }
            if((T[i]==T[i+9])&&(est_dans(liste_indice_traites, i+9) == 0 )){
                remplie_rec(T, chaine, liste_indice_traites, i+9);
            }
        }
        if ( ( est_dans( C1, i) == 0 ) && ( est_dans( C2, i) == 0 ) && ( est_dans( L2, i) == 0 ) && ( est_dans( L1, i) == 0 ) && ( est_dans( cotes, i) == 0 )) {
            if ((T[i-9]==T[i]) && ( est_dans(liste_indice_traites, i-9)==0)){
                remplie_rec( T, chaine, liste_indice_traites, i-9);
            }
            if ((T[i-1]==T[i]) && ( est_dans(liste_indice_traites, i-1)==0)){
                remplie_rec( T, chaine, liste_indice_traites, i-1);
            }
            if ((T[i+1]==T[i]) && ( est_dans(liste_indice_traites, i+1)==0)){
                remplie_rec(T, chaine, liste_indice_traites, i+1);
            }
            if ((T[i+9]==T[i]) && ( est_dans(liste_indice_traites, i+9)==0)){
                remplie_rec(T, chaine, liste_indice_traites, i+9);
            }
        }
    }

}

void capture_chaines(int *T, int **chaines, int *stones1, int *stones2, int *capture1, int *capture2){ /// Permet de supprimer (Capturer) les chaines de pierre sans liberté.
    for (int m=1; m<82; m++){
        if ( degree_liberte_chaine(T, chaines[m]) ==0 ){
            calcul(T, chaines[m], stones1, stones2, capture1, capture2);
            supprimer_chaine(T, chaines[m]);
        }
    }
}

void calcul(int * T, int *chaine, int *stones1, int *stones2, int *capture1, int *capture2){ /// permet de faire le compte et le décompte des pierres restantes pour et capturées par chaque joueurs
    int t;
    t = taille_chaine(chaine);

    if( T[chaine[0]] == 1 ){
        *capture2 = *capture2 + t;
        *stones1 = *stones1 - t;
    }
    if( T[chaine[0]] == 2 ){
        *capture1 = *capture1 + t;
        *stones2 = *stones2 - t;
    }
}

int taille_chaine(int *chaine){ /// revoie la taille d'une chaine des pierres ( càd le nbr des pierres constituant cette chaine).
    int k= 0;
    while(chaine[k] != 0 ){
        k++;
    }
    return k;
}

int nbr_voisines_meme(int *T, int i){ /// Renvoie le nombre des voisines de meme couleur.
    int k = 0;
    if ( (T[i+1] == T[i]) && (T[i] != 0) ){
        k++;
    }
    if ((T[i-1] == T[i] ) && (T[i] != 0)){
        k++;
    }
    if (( T[i+9] == T[i] ) && (T[i] != 0)){
        k++;
    }
    if ((T[i-9] == T[i] ) && (T[i] != 0)){
        k++;
    }
    return k;
}

int voisines_non_traites(int *T, int *liste_indice_traites, int i){ // liste = (int*) calloc(5, sizeof(int)); liste[0] contient lee nombre des voisines.
    int k=0;
    if((T[i] == T[i-1])&&( est_dans(liste_indice_traites, i-1) == 0)){
        k++;
    }
    if((T[i]==T[i+1])&&(est_dans(liste_indice_traites, i+1) == 0 )){
        k++;
    }
    if((T[i]==T[i-9])&&(est_dans(liste_indice_traites, i-9) == 0 )){
        k++;
    }
    if((T[i]==T[i+9])&&(est_dans(liste_indice_traites, i+9) == 0 )){
        k++;
    }
    return k;
}

void supprimer_chaine(int *T, int *chaine){ /// permet de supeimmer une chaine capturé: en mettant des zéros dans ses indices.
    for (int h = 0; h<81; h++){
        if ( chaine[h] == 0 ){
            break;
        }
        else{
            T[chaine[h]] = 0;
        }
    }
}

int degree_liberte_chaine(int *T, int *chaine) { /// Renvoie le degré de liberté d'une chaine des pierres ( = la somme des degrés deq libertés de ses pierres).
    int degree = 0; /// Renvoie le degree de liberté d'une chaine des pierres.
    for( int c = 0; c<81; c++ ){
        if ( chaine[c] == 0 ){
            return degree;
        }
        else{
            degree += degree_liberte(T, chaine[c]);
        }
    }
    return degree;
}

int degree_liberte(int *T, int i){ /// renvoie
    int k=0;   /// retourne le degree de liberte d'une pierre.
    int L1 [7] = {2, 3, 4, 5, 6, 7, 8};
    int L2 [7] = {74, 75, 76, 77, 78, 79, 80};
    int C1 [7] = {10, 19, 28, 37, 46, 55, 64};
    int C2 [7] = {18, 27, 36, 45, 54, 63, 72};
    int cotes [4] = {1, 9, 73, 81};
    if ( est_dans( L2, i) == 1 ){
        if ( 0 == T[i-9] ){
            k++;
        }
        if ( 0 == T[i-1] ){
            k++;
        }
        if ( 0 == T[i+1] ){
            k++;
        }
    }
    if ( est_dans( cotes, i) == 1 ){
        if (i == 1){
            if ( 0 == T[i+1] ){
                k++;
            }
            if ( 0 == T[i+9] ){
                k++;
            }
        }
        if (i == 81){
            if ( 0 == T[i-1] ){
                k++;
            }
            if ( 0 == T[i-9] ){
                k++;
            }
        }
        if (i == 9){
            if ( 0 == T[i-1] ){
                k++;
            }
            if ( 0 == T[i+9] ){
                k++;
            }
        }
        if (i == 73){
            if ( 0 == T[i+1] ){
                k++;
            }
            if ( 0 == T[i-9] ){
                k++;
            }
        }
    }
    if ( est_dans( L1, i) == 1 ){
        if( 0 == T[i-1] ){
            k++;
        }
        if ( 0 == T[i+1] ){
            k++;
        }
        if ( 0 == T[i+9] ){
            k++;
        }
    }
    if ( est_dans( C2, i) == 1 ){
        if ( 0 == T[i-9] ){
            k++;
        }
        if ( 0 == T[i-1] ){
            k++;
        }
        if ( 0 == T[i+9] ){
            k++;
        }
    }
    if ( est_dans( C1, i) == 1 ){
        if( 0 == T[i-9] ){
            k++;
        }
        if ( 0 == T[i+1] ){
            k++;
        }
        if ( 0 == T[i+9] ){
            k++;
        }
    }
    if ( ( est_dans( C1, i) == 0 ) && ( est_dans( C2, i) == 0 ) && ( est_dans( L1, i) == 0 ) && ( est_dans( L2, i) == 0 ) && ( est_dans( cotes, i) == 0 )) {
        if ( T[i-9] == 0 ){
            k++;
        }
        if ( T[i-1] == 0 ){
            k++;
        }
        if ( T[i+1] == 0 ){
            k++;
        }
        if ( T[i+9] == 0 ){
            k++;
        }
    }
    return k;
}


/// ######################################################### PROGRAMME PRINCIPALE ####################################################################
int main(){
    system("@cls||clear");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    welcome();
    sleep(5);
    principale();
    return 0;
}

