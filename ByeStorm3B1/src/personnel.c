#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "personnel.h"



         void enregistre_Personnel(char fichier[] ,Personnel p)
{         
	FILE *f;
	f = fopen(fichier, "a");
	if (f == NULL) 
		printf("erreur d'ouverture du fichier en mode a");
		
	else
	fprintf(f, "NOM :     %s                    PRENOM:     %s                    AGE:     %s                    CIN:     %s                  MAIL:     %s                       IDENTIFIANT:     %s                     NUMERO     %s \n", p.nom, p.prenom, p.age,p.cin,p.mail,p.id,p.number) ;
	fclose(f);
}

         void lire_personnel(char fichier[], Personnel *p)
{        
      char ligne_lue[200];
        FILE *f;

	f = fopen(fichier, "r");
	if (f == NULL) 
		printf("erreur d'ouverture du fichier en mode r");
	      else	
	
	
	while(fgets(ligne_lue, 200, f) != NULL) ;
                        
           fclose(f);
}

  int rechercher_personnel(char fichier[],char cin[])
    
    {
          int j=0 ;
         Personnel p ;
         FILE *f ;
         char ligne_lue[3000];
     f = fopen(fichier, "r");
     
while(fscanf(f, "NOM :     %s                    PRENOM:     %s                    AGE:     %s                    CIN:     %s                  MAIL:     %s                       IDENTIFIANT:     %s                     NUMERO     %s \n", p.nom, p.prenom, p.age,p.cin,p.mail,p.id,p.number)!=EOF  && j==0)
      {  if (strcmp(p.cin,cin)==0)
         
       
       
     
  

  j=1 ;

}
   fclose(f);
   return j ;
 }

void supprimer_personnel(char cin [])
{ 
FILE*f;
FILE*f1;
FILE*f2;
char str[3000];
Personnel p;
char fichier[] = "fichierpersonnel.txt";
char fichiersuppone[] = "fichierpersonnel1.txt";

int j=0 ;

f=fopen(fichier,"r");
f1=fopen(fichiersuppone,"a");
while (fscanf(f1, "%s %s %s %s %s %s %s ", p.nom, p.prenom,p.age,p.cin,p.mail,p.id,p.number) != EOF )
      {  if (strcmp(p.cin,cin)!=0)
         
    fprintf(f1, "NOM :     %s                    PRENOM:     %s                    AGE:     %s                    CIN:     %s                  MAIL:     %s                       IDENTIFIANT:     %s                     NUMERO     %s \n", p.nom, p.prenom, p.age,p.cin,p.mail,p.id,p.number) ; 
          
	 
        }  
	
	  
         
	
	  fclose(f1);
          fclose(f);
            remove("fichierpersonnel.txt");
	    rename("fichierpersonnel1.txt","fichierpersonnel.txt");
	
	}


void intialiser(char fichier[]) 
{

              FILE *f;
	f = fopen(fichier, "w");
        fprintf(f, "%s", "") ;
             fclose(f) ;
}

void modifier_personnel(char cin[] ,char fichier[] )
{
FILE*f;
FILE*f1;

char str[3000];
Personnel p;

char fichiersuppone[] = "fichierpersonnel1.txt";
int j=0 ;
f=fopen(fichier,"r");
f1=fopen(fichiersuppone,"a");
while (fscanf(f, "%s %s %s %s %s %s %s ", p.nom, p.prenom,p.age,p.cin,p.mail,p.id,p.number) != EOF )
      {  if (strcmp(p.cin,cin)!=0)
         
    fprintf(f1, "NOM :     %s                    PRENOM:     %s                    AGE:     %s                    CIN:     %s                  MAIL:     %s                       IDENTIFIANT:     %s                     NUMERO     %s \n", p.nom, p.prenom, p.age,p.cin,p.mail,p.id,p.number) ;
       }

	    fclose(f1);
            fclose(f);
            remove("fichierpersonnel.txt");
	    rename("fichierpersonnel1.txt","fichierpersonnel.txt");

}






	









































