#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "events.h"

int nbligne(char fichierex[] )
{
    int nb_lignes;
    char ligne_lue[512];
    FILE *f;
   
 
  f = fopen(fichierex, "r"); 
   
              if (f == NULL)
   printf("impossible d'ouvrir le fichier");
              else
   
   nb_lignes = 0;
      while(fgets(ligne_lue, 512, f) != NULL)
     {
      
        
       nb_lignes++;
     
    
   }
  fclose(f) ;
  
return (nb_lignes) ;
}




void changer_fichier_str ( char fichierex[], Personne T[])
{    	 int   i =1;
   	 int   j ;
    	 int   n;
    	 int   N=nbligne(fichierex) ; 
   	 int   v ;
   	 char  matricule [30];	
   	 char  capteur[255] ;
  	 char  id[100] ;
  	 char  str [544] ;
   	 char  Time[20];
         
  	 
   	 FILE *f;


                                  f=fopen(fichierex, "r");
	                             for(i=0;i<N;i++)
	                      {	
		                       strcpy(T[i].ID,"");
	                      }
	                          
	
   
                                 while (fgets(str, 544, f) !=NULL) 
                              {
                      	sscanf (str, "%s %s %s" , Time ,matricule , capteur );

                             v=0; 
                             i=0;
	                              while( (i<N) && (v==0) )
	                        {
		if( strcmp(T[i].ID,matricule)==0 )
		{
			strcat(T[i].chemin,capteur);v=1;
		}
		if( strcmp(T[i].ID,"")==0 )
		{
			strcpy(T[i].ID,matricule);
			strcpy(T[i].chemin,capteur);
                        n++;
			v=1;
		}
                i++;

	}   
   }
	   
                                           
                                         

                               

 
fclose (f) ;

          
	


}

