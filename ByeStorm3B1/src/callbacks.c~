#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <events.h>
#include "personnel.h"

void on_button1_clicked(GtkWidget *objet_graphique,gpointer user_data)
{float a,b; 
 int n=0;
 int trouve=0;
 char password[]="123";
 char userid[]="sindoucha";
 char id[30];
 char pass[30];
  GtkWidget *entry1;
  GtkWidget *entry2;
  GtkWidget *window2;
  GtkWidget *window3;
  GtkWidget *window4;
  GtkWidget *window1;

entry1=lookup_widget(objet_graphique,"entry1");
entry2=lookup_widget(objet_graphique,"entry2");
do
{   
    
         strcpy(id,gtk_entry_get_text(GTK_ENTRY(entry1)));
         strcpy(pass,gtk_entry_get_text(GTK_ENTRY(entry2)));


          a=strcmp(id,userid);
          b=strcmp(pass,password);


        if ((a==0) && (b==0))
        {
         window4=create_window4();
         gtk_widget_show(window4);
         window1=lookup_widget(objet_graphique,"window1");
         gtk_widget_hide(window1); 
         trouve=1; 
              
        
        }

     else 
       { window1=lookup_widget(objet_graphique,"window1");
         gtk_widget_hide(window1);
         window2=create_window2();
         gtk_widget_show(window2);
         n++;  
         break;
         
              
       } 
         
       
       

       
   



}while((trouve==0 )|| (n==4));

  
 if(n==4)
         { 
            window2=lookup_widget(objet_graphique,"window2");
            gtk_widget_hide(window2);
             window3=create_window3();
            gtk_widget_show(window3);
            
         }

        




}


void on_button2_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
   GtkWidget *window1;
   GtkWidget *window2;
   
   window1=create_window1();
   gtk_widget_show(window1);
   window2=lookup_widget(objet_graphique,"window2");
   gtk_widget_hide(window2);
}


void on_button3_clicked(GtkWidget *objet_graphique,gpointer user_data)                    
{
gtk_main_quit();
}


void on_button4_clicked(GtkWidget *objet_graphique,gpointer user_data)
{GtkWidget *window11;
  GtkWidget *window4;
  window4=lookup_widget(objet_graphique,"window4");
  gtk_widget_hide(window4);
    window11=create_window11();
    gtk_widget_show(window11);
}
void on_button5_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
GtkWidget *window4;
  GtkWidget *window25;
  window4=lookup_widget(objet_graphique,"window4");
    gtk_widget_hide(window4);
    window25=create_window25();
    gtk_widget_show(window25);


}
void on_button6_clicked(GtkWidget *objet_graphique,gpointer user_data)
{

  GtkWidget *window4;
  GtkWidget *window39;
  window4=lookup_widget(objet_graphique,"window4");
    gtk_widget_hide(window4);
    window39=create_window39();
    gtk_widget_show(window39);
}
void on_button7_clicked(GtkWidget *objet_graphique,gpointer user_data)
{   
    GtkWidget *window4;
    GtkWidget *window5;

    window4=lookup_widget(objet_graphique,"window4");
    gtk_widget_hide(window4);
    window5=create_window5();
    gtk_widget_show(window5);
}
void on_button8_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
  gtk_main_quit();
}
void on_button9_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
    GtkWidget *window4;
    GtkWidget *window1;
   

     window4=lookup_widget(objet_graphique,"window4");
     gtk_widget_hide(window4);
     window1=create_window1();
     gtk_widget_show(window1);

}






void on_button10_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
     GtkWidget *window5;
     GtkWidget *window6;

    window5=lookup_widget(objet_graphique,"window5");
    gtk_widget_hide(window5);
    window6=create_window6();
    gtk_widget_show(window6);
}



void on_button11_clicked(GtkWidget *objet_graphique,gpointer user_data)
{    
     GtkWidget *window5;
     GtkWidget *window7;

      window5=lookup_widget(objet_graphique,"window5");
      gtk_widget_hide(window5);
      window7=create_window7();
      gtk_widget_show(window7);
}



void on_button12_clicked(GtkWidget *objet_graphique,gpointer user_data)
{ 
     GtkWidget *window5;
     GtkWidget *window4;
  
     window5=lookup_widget(objet_graphique,"window5");
     gtk_widget_hide(window5);
     window4=create_window4();
     gtk_widget_show(window4);
}
     


void on_button13_clicked(GtkWidget *objet_graphique,gpointer user_data)
{ 
   gtk_main_quit();

}

void on_button14_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
     GtkWidget *window6;
     GtkWidget *window5;

    window6=lookup_widget(objet_graphique,"window6");
    gtk_widget_hide(window6);
    window5=create_window5();
    gtk_widget_show(window5);
}
void on_button15_clicked(GtkWidget *objet_graphique,gpointer user_data)
{      
     
      GtkWidget *window7;
      GtkWidget *window9;
      GtkWidget *entry3;
      char id[30];
      
      
         
     
    entry3=lookup_widget(objet_graphique,"entry3");
    strcpy(id,gtk_entry_get_text(GTK_ENTRY(entry3)));
    
           window7=lookup_widget(objet_graphique,"window7");
                    gtk_widget_hide(window7);
                    window9=create_window9();
                    gtk_widget_show(window9);
             
              

            
     }
   


void on_button16_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
     GtkWidget *window7;
     GtkWidget *window5;


    window7=lookup_widget(objet_graphique,"window7");
    gtk_widget_hide(window7);
    window5=create_window5();
    gtk_widget_show(window5);
}

void on_button17_clicked(GtkWidget *objet_graphique,gpointer user_data)
{  
     GtkWidget *window7;
     GtkWidget *window8;

    window8=lookup_widget(objet_graphique,"window8");
    gtk_widget_hide(window8);
    window7=create_window7();
    gtk_widget_show(window7);
}
void on_button18_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
    
     GtkWidget *window7;
     GtkWidget *window9;
   
 window9=lookup_widget(objet_graphique,"window9");
    gtk_widget_hide(window9);
    window7=create_window7();
    gtk_widget_show(window7);


}


void on_button19_clicked(GtkWidget *objet_graphique,gpointer user_data)
{    GtkWidget *window5;
     GtkWidget *window53;
   
 window5=lookup_widget(objet_graphique,"window5");
    gtk_widget_hide(window5);
    window53=create_window53();
    gtk_widget_show(window53);
}
void on_button20_clicked(GtkWidget *objet_graphique,gpointer user_data)
{}
void on_button21_clicked(GtkWidget *objet_graphique,gpointer user_data)
{}


















void on_button27_clicked(GtkWidget *objet_graphique,gpointer user_data)


{
 GtkWidget *window11;
 GtkWidget *window4;
 window11=lookup_widget(objet_graphique,"window11");
 gtk_widget_hide(window11);
 window4=create_window4();
 gtk_widget_show(window4);
}


void on_button22_clicked(GtkWidget *objet_graphique,gpointer user_data)
{

     GtkWidget *window11;
     GtkWidget *window12;
 window11=lookup_widget(objet_graphique,"window11");
    gtk_widget_hide(window11);
    window12=create_window12();
    gtk_widget_show(window12);
}


void on_button23_clicked(GtkWidget *objet_graphique,gpointer user_data)
{ GtkWidget *window11;
  GtkWidget *window13;
 window11=lookup_widget(objet_graphique,"window11");
    gtk_widget_hide(window11);
    window13=create_window13();
    gtk_widget_show(window13);

}


void on_button24_clicked(GtkWidget *objet_graphique,gpointer user_data)
{GtkWidget *window11;
  GtkWidget *window14;
 window11=lookup_widget(objet_graphique,"window11");
    gtk_widget_hide(window11);
    window14=create_window14();
    gtk_widget_show(window14);
}


void on_button25_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
  GtkWidget *window11;
  GtkWidget *window23;
  window11=lookup_widget(objet_graphique,"window11");
    gtk_widget_hide(window11);
    window23=create_window23();
    gtk_widget_show(window23);
}


void on_button26_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
  GtkWidget *window11;
  GtkWidget *window24;
  window11=lookup_widget(objet_graphique,"window11");
    gtk_widget_hide(window11);
    window24=create_window24();
    gtk_widget_show(window24);
}


void on_button28_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
  FILE *f;
  f=fopen("medecin.txt","w");
  fprintf(f,"%s","");
  fclose(f);

}


void on_button29_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
  GtkWidget *window11;
  GtkWidget *window12;
  window12=lookup_widget(objet_graphique,"window12");
  gtk_widget_hide(window12);
    window11=create_window11();
    gtk_widget_show(window11); 
}


void on_button30_clicked(GtkWidget *objet_graphique,gpointer user_data)
{

        Personnel p;
	char fichier[] = "medecin.txt";
        char Buf0[20];

	GtkWidget *entry4;
	GtkWidget *entry5;
	GtkWidget *entry6;
        GtkWidget *entry7;
	GtkWidget *entry8;
	GtkWidget *entry9;
        GtkWidget *entry10;
        GtkWidget *label27;
        
        entry4 = lookup_widget(objet_graphique, "entry4");
	entry5 = lookup_widget(objet_graphique, "entry5");
	entry6 = lookup_widget(objet_graphique, "entry6");
        entry7 = lookup_widget(objet_graphique, "entry7");
	entry8 = lookup_widget(objet_graphique, "entry8");
	entry9 = lookup_widget(objet_graphique, "entry9");
        entry10 = lookup_widget(objet_graphique, "entry10");


	
	strcpy(p.nom, gtk_entry_get_text(GTK_ENTRY(entry4)));
	strcpy(p.prenom, gtk_entry_get_text(GTK_ENTRY(entry5)));
	strcpy(p.age, gtk_entry_get_text(GTK_ENTRY(entry6)));
        strcpy(p.cin, gtk_entry_get_text(GTK_ENTRY(entry7)));
        strcpy(p.mail, gtk_entry_get_text(GTK_ENTRY(entry8)));
        strcpy(p.id, gtk_entry_get_text(GTK_ENTRY(entry9)));
        strcpy(p.number, gtk_entry_get_text(GTK_ENTRY(entry10)));

        if( (strlen(p.age)!=2) || (strlen(p.cin)!=8) || (strlen(p.id)!=5) || (strlen(p.number)!=8))
         {  label27= lookup_widget(objet_graphique, "label27");
            sprintf(Buf0,"%s","erreur !") ;
            gtk_label_set_text(GTK_LABEL(label27), Buf0);
         }
        else
        
      {
       label27= lookup_widget(objet_graphique, "label27");
            sprintf(Buf0,"%s","") ;
            gtk_label_set_text(GTK_LABEL(label27), Buf0);
          enregistre_Personnel(fichier,p) ;
}}


void on_button31_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
 /*
char Buf7[30] ; 
   
char cin[30] ;
char fichier[] = "medecin.txt";
 GtkWidget *label35;
 GtkWidget *entry11;
   
	j=rechercher_personnel(fichier,cin)
       if (j==1) 
        
   entry11= lookup_widget(objet_graphique, "entry11");
          strcpy(cin, gtk_entry_get_text(GTK_ENTRY(entry11)));
        
       label35= lookup_widget(objet_graphique, "label35");
       
sprintf(Buf7,"%s","C'est fait !") ;
      
        gtk_label_set_text(GTK_LABEL(label35), Buf7);*/

}


void
on_button39_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}



void
on_button40_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button42_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button43_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button44_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button32_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window11;
  GtkWidget *window13;
  window13=lookup_widget(button,"window13");
  gtk_widget_hide(window13);
    window11=create_window11();
    gtk_widget_show(window11); 
}


void
on_button33_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button34_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button35_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button36_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button37_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button38_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button41_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button45_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button46_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button48_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button47_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button49_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button50_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button51_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
char fichier[]= "medecin.txt" ;
int j ;
                     Personnel p ; 
                 GtkWidget *entry21;
              
                 GtkWidget *label58;
                 GtkWidget *label59;
                 char Buf7[300] ;
                 char Buf8[300] ;
	     

	            char cin[30] ;
           entry21 = lookup_widget(objet_graphique, "entry21");
           strcpy(cin, gtk_entry_get_text(GTK_ENTRY(entry21)));
           j=rechercher_personnel(fichier,cin) ;      
                 
       
         label59= lookup_widget(objet_graphique, "label59");
          label58= lookup_widget(objet_graphique, "label58");
               
                            if (j==1)
             {    sprintf(Buf7,"%s","Ce personnel existe") ;
                  gtk_label_set_text(GTK_LABEL(label59), Buf7);
                            }
                    else    {
                 sprintf(Buf8,"%s", "Ce personnel n'existe pas") ;
                  gtk_label_set_text(GTK_LABEL(label58), Buf8);
                            }
}


void
on_button52_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window23;
  GtkWidget *window11;
  window23=lookup_widget(button,"window23");
  gtk_widget_hide(window23);
    window11=create_window11();
    gtk_widget_show(window11); 
}


void
on_button53_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{

	
char str[3000];
FILE *f;
Personnel p;
char sdr[3000]="";
char fichier[] = "medecin.txt";
GtkWidget *label60;

f=fopen(fichier, "r");
	       
	while (fgets(str,3000,f) != NULL)

               {         
                          

                      
        strcat(sdr,str);
       label60= lookup_widget(objet_graphique, "label60");
	gtk_label_set_text(GTK_LABEL(label60),sdr);} 


            
       
              

	
                         
fclose(f) ;


}


void
on_button54_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
 GtkWidget *window11;
  GtkWidget *window24;
  window24=lookup_widget(button,"window24");
    gtk_widget_hide(window24);
    window11=create_window11();
    gtk_widget_show(window11);

}


void
on_button56_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window25;
  GtkWidget *window27;
  window25=lookup_widget(button,"window25");
    gtk_widget_hide(window25);
    window27=create_window27();
    gtk_widget_show(window27);


}


void
on_button57_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button58_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window25;
  GtkWidget *window37;
  window25=lookup_widget(button,"window25");
    gtk_widget_hide(window25);
    window37=create_window37();
    gtk_widget_show(window37);
}


void
on_button59_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window25;
  GtkWidget *window38;
  window25=lookup_widget(button,"window25");
    gtk_widget_hide(window25);
    window38=create_window38();
    gtk_widget_show(window38);

}


void
on_button60_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
   FILE *f;
  f=fopen("infermier.txt","w");
  fprintf(f,"%s","");
  fclose(f);
}


void
on_button61_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *window25;
  GtkWidget *window4;
  window25=lookup_widget(button,"window25");
    gtk_widget_hide(window25);
    window4=create_window4();
    gtk_widget_show(window4);


}


void
on_button55_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window25;
  GtkWidget *window26;
  window25=lookup_widget(button,"window26");
    gtk_widget_hide(window25);
    window26=create_window26();
    gtk_widget_show(window26);
}


void
on_button63_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
 Personnel p;
	char fichier[] = "infermier.txt";
        char Buf0[20];

	GtkWidget *entry22;
	GtkWidget *entry23;
	GtkWidget *entry24;
        GtkWidget *entry25;
	GtkWidget *entry26;
	GtkWidget *entry27;
        GtkWidget *entry28;
        GtkWidget *label70;
        
        entry22 = lookup_widget(objet_graphique, "entry22");
	entry23 = lookup_widget(objet_graphique, "entry23");
	entry24= lookup_widget(objet_graphique, "entry24");
        entry25 = lookup_widget(objet_graphique, "entry25");
	entry26= lookup_widget(objet_graphique, "entry26");
	entry27= lookup_widget(objet_graphique, "entry27");
        entry28 = lookup_widget(objet_graphique, "entry28");


	
	strcpy(p.nom, gtk_entry_get_text(GTK_ENTRY(entry22)));
	strcpy(p.prenom, gtk_entry_get_text(GTK_ENTRY(entry23)));
	strcpy(p.age, gtk_entry_get_text(GTK_ENTRY(entry24)));
        strcpy(p.cin, gtk_entry_get_text(GTK_ENTRY(entry25)));
        strcpy(p.mail, gtk_entry_get_text(GTK_ENTRY(entry26)));
        strcpy(p.id, gtk_entry_get_text(GTK_ENTRY(entry27)));
        strcpy(p.number, gtk_entry_get_text(GTK_ENTRY(entry28)));

        if( (strlen(p.age)!=2) || (strlen(p.cin)!=8) || (strlen(p.id)!=5) || (strlen(p.number)!=8))
         {  label70= lookup_widget(objet_graphique, "label70");
            sprintf(Buf0,"%s","erreur !") ;
            gtk_label_set_text(GTK_LABEL(label70), Buf0);
         }
        else
        
      {
       label70= lookup_widget(objet_graphique, "label70");
            sprintf(Buf0,"%s","") ;
            gtk_label_set_text(GTK_LABEL(label70), Buf0);
          enregistre_Personnel(fichier,p) ;
}




}


void
on_button62_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkWidget *window25;
  GtkWidget *window26;
  window26=lookup_widget(button,"window26");
    gtk_widget_hide(window26);
    window25=create_window25();
    gtk_widget_show(window25);
}


void
on_button64_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button65_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{ GtkWidget *window25;
  GtkWidget *window27;
  window27=lookup_widget(button,"window27");
    gtk_widget_hide(window27);
    window25=create_window25();
    gtk_widget_show(window25);
}


void
on_button67_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button66_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button68_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button69_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button71_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button70_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button72_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button73_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button74_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button75_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button76_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button77_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button79_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button78_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button81_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button80_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button82_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button83_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button85_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window25;
  GtkWidget *window37;
  window37=lookup_widget(button,"window37");
    gtk_widget_hide(window37);
    window25=create_window25();
    gtk_widget_show(window25);
}


void
on_button84_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
char fichier[]= "infermier.txt" ;
int j ;
                     Personnel p ; 
                 GtkWidget *entry39;
              
                 GtkWidget *label102;
                 GtkWidget *label103;
                 char Buf7[300] ;
                 char Buf8[300] ;
	     

	            char cin[30] ;
           entry39 = lookup_widget(objet_graphique, "entry39");
           strcpy(cin, gtk_entry_get_text(GTK_ENTRY(entry39)));
           j=rechercher_personnel(fichier,cin) ;      
                 
       
         label102= lookup_widget(objet_graphique, "label102");
          label103= lookup_widget(objet_graphique, "label103");
               
                            if (j==1)
             {    sprintf(Buf7,"%s","Ce personnel existe") ;
                  gtk_label_set_text(GTK_LABEL(label102), Buf7);
                            }
                    else    {
                 sprintf(Buf8,"%s", "Ce personnel n'existe pas") ;
                  gtk_label_set_text(GTK_LABEL(label103), Buf8);
                            }
}


void
on_button87_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *window38;
  GtkWidget *window25;
  window38=lookup_widget(button,"window38");
    gtk_widget_hide(window38);
    window25=create_window25();
    gtk_widget_show(window25);


}


void
on_button86_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
char str[3000];
FILE *f;
Personnel p;
char sdr[3000]="";
char fichier[] = "infermier.txt";
GtkWidget *label104;

f=fopen(fichier, "r");
	       
	while (fgets(str,3000,f) != NULL)

               {         
                          

                      
        strcat(sdr,str);
       label104= lookup_widget(objet_graphique, "label104");
	gtk_label_set_text(GTK_LABEL(label104),sdr);} 


}


void
on_button89_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window39;
  GtkWidget *window41;
  window39=lookup_widget(button,"window39");
    gtk_widget_hide(window39);
    window41=create_window41();
    gtk_widget_show(window41);
}


void
on_button90_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button91_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window39;
  GtkWidget *window51;
  window39=lookup_widget(button,"window39");
    gtk_widget_hide(window39);
    window51=create_window51();
    gtk_widget_show(window51);
}


void
on_button92_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window39;
  GtkWidget *window52;
  window39=lookup_widget(button,"window39");
    gtk_widget_hide(window39);
    window52=create_window52();
    gtk_widget_show(window52);
}


void
on_button93_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
FILE *f;
  f=fopen("patient.txt","w");
  fprintf(f,"%s","");
  fclose(f);
}


void
on_button94_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window39;
  GtkWidget *window4;
  window39=lookup_widget(button,"window39");
    gtk_widget_hide(window39);
    window4=create_window4();
    gtk_widget_show(window4);
}


void
on_button88_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window39;
  GtkWidget *window40;
  window39=lookup_widget(button,"window39");
    gtk_widget_hide(window39);
    window40=create_window40();
    gtk_widget_show(window40);
}


void
on_button95_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
Personnel p;
	char fichier[] = "patient.txt";
        char Buf0[20];

	GtkWidget *entry40;
	GtkWidget *entry41;
	GtkWidget *entry42;
        GtkWidget *entry43;
	GtkWidget *entry44;
	GtkWidget *entry45;
        GtkWidget *entry46;
        GtkWidget *label116;
        
        entry40 = lookup_widget(objet_graphique, "entry40");
	entry41 = lookup_widget(objet_graphique, "entry41");
	entry42= lookup_widget(objet_graphique, "entry42");
        entry43 = lookup_widget(objet_graphique, "entry43");
	entry44= lookup_widget(objet_graphique, "entry44");
	entry45= lookup_widget(objet_graphique, "entry45");
        entry46 = lookup_widget(objet_graphique, "entry46");


	
	strcpy(p.nom, gtk_entry_get_text(GTK_ENTRY(entry40)));
	strcpy(p.prenom, gtk_entry_get_text(GTK_ENTRY(entry41)));
	strcpy(p.age, gtk_entry_get_text(GTK_ENTRY(entry42)));
        strcpy(p.cin, gtk_entry_get_text(GTK_ENTRY(entry43)));
        strcpy(p.mail, gtk_entry_get_text(GTK_ENTRY(entry44)));
        strcpy(p.id, gtk_entry_get_text(GTK_ENTRY(entry45)));
        strcpy(p.number, gtk_entry_get_text(GTK_ENTRY(entry46)));

        if( (strlen(p.age)!=2) || (strlen(p.cin)!=8) || (strlen(p.id)!=5) || (strlen(p.number)!=8))
         {  label116= lookup_widget(objet_graphique, "label116");
            sprintf(Buf0,"%s","erreur !") ;
            gtk_label_set_text(GTK_LABEL(label116), Buf0);
         }
        else
        
      {
       label116= lookup_widget(objet_graphique, "label116");
            sprintf(Buf0,"%s","") ;
            gtk_label_set_text(GTK_LABEL(label116), Buf0);
          enregistre_Personnel(fichier,p) ;
}

}


void
on_button96_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window40;
  GtkWidget *window39;
  window40=lookup_widget(button,"window40");
    gtk_widget_hide(window40);
    window39=create_window39();
    gtk_widget_show(window39);

}


void
on_button97_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button98_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window39;
  GtkWidget *window41;
  window41=lookup_widget(button,"window41");
    gtk_widget_hide(window41);
    window39=create_window39();
    gtk_widget_show(window39);
}


void
on_button100_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button99_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button101_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button102_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button103_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button104_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button105_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button106_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button107_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button108_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button109_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button110_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button112_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button111_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button113_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button114_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button115_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button116_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button118_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkWidget *window51;
  GtkWidget *window39;
  window51=lookup_widget(button,"window51");
    gtk_widget_hide(window51);
    window39=create_window39();
    gtk_widget_show(window39);
}


void
on_button120_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window39;
  GtkWidget *window52;
  window52=lookup_widget(button,"window52");
    gtk_widget_hide(window52);
    window39=create_window39();
    gtk_widget_show(window39);
}


void
on_button119_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
char str[3000];
FILE *f;
Personnel p;
char sdr[3000]="";
char fichier[] = "patient.txt";
GtkWidget *label149;

f=fopen(fichier, "r");
	       
	while (fgets(str,3000,f) != NULL)

               {         
                          

                      
        strcat(sdr,str);
       label149= lookup_widget(objet_graphique, "label149");
	gtk_label_set_text(GTK_LABEL(label149),sdr);} 

}


void
on_button122_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window53;
     GtkWidget *window5;
   
 window53=lookup_widget(objet_graphique,"window53");
    gtk_widget_hide(window53);
    window5=create_window5();
    gtk_widget_show(window5);

}


void
on_button121_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{

      
}


void
on_button123_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button124_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button117_clicked                   (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
char fichier[]= "patient.txt" ;
int j ;
                     Personnel p ; 
                 GtkWidget *entry57;
              
                 GtkWidget *label146;
                 GtkWidget *label147;
                 char Buf7[300] ;
                 char Buf8[300] ;
	     

	            char cin[30] ;
           entry57 = lookup_widget(objet_graphique, "entry57");
           strcpy(cin, gtk_entry_get_text(GTK_ENTRY(entry57)));
           j=rechercher_personnel(fichier,cin) ;      
                 
       
         label146= lookup_widget(objet_graphique, "label146");
          label147= lookup_widget(objet_graphique, "label147");
               
                            if (j==1)
             {    sprintf(Buf7,"%s","Ce personnel existe") ;
                  gtk_label_set_text(GTK_LABEL(label146), Buf7);
                            }
                    else    {
                 sprintf(Buf8,"%s", "Ce personnel n'existe pas") ;
                  gtk_label_set_text(GTK_LABEL(label147), Buf8);
                            }
}

