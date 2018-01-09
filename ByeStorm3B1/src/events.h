#ifndef EVENT_H_
#define EVENET_H_


struct Personne {
       char ID[100]  ;
       char chemin[500] ;
};
typedef struct Personne Personne ;
Personne t[100];


int nbligne(char fichierex[] ) ;
void changer_fichier_str ( char fichierex[], Personne T[]) ;
 
#endif /* EVENT_H_ */ 
