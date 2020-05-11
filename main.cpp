/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;

int jour=0;
int jeufini=0;
int choix=0;
int plante=0;
int plante1=0;
int plante2=0;
int plante3=0;
int plante4=0;
int plante6=0;
int choixplantecouper=0;
int choixplanteengrais=0;
int gold=0;
int engrais=10;
int choixpourve=0;
int plantecarnivore=0;
int plantecarnivore1=0;
int plantecarnivore2=0;
int plantecarnivoree=0;
int plantecarnivore1manger=0;
int plantecarnivore2manger=0;
int mouche=0;
int plantenourir=0;
int plante1timer=0;
int plante2timer=0;
void sleepcp(int milliseconds);

void sleepcp(int milliseconds) // Cross-platform sleep function
{
    clock_t time_end;
    time_end = clock() + milliseconds * CLOCKS_PER_SEC/1000;
    while (clock() < time_end)
    {
    }
}

int main()
{
    cout<<"Jeu botaniste \n";
    while (jeufini==0) {
    jour=jour+1;
    
    sleepcp(300);
     cout << "\n Vous etes au jour " << jour;
      cout << "\n Vous avez " << gold;
     cout << " d'argent";
       cout << "\n Vous avez " << plantecarnivore;
     cout << " de carnivore";
       cout << "\n Vous avez " << mouche;
     cout << " de mouche";
    while (choix==0 || choix > 10) {
    sleepcp(300);
    cout << "\n Que voulez vous faire? 1=Planter une plante 2=mettre de l'engrais 3=couper 4=vendre une plante 5=Acheter des plantes carnivores(1000golds) 6=Planter une plante carnivore 7=Acheter des mouches 8=Nourir les plantes carnivores 10=Quitter \n";
    cin >> choix;
    if (choix==10) {
    jeufini=1;
    sleepcp(300);
    cout << "A bientôt !";
    }
    if (choix>10) {
        sleepcp(300);
        cout << "Veuillez choisir une autre option \n";
    }
    if (choix==1 && plante<6) {
        cout << "Vous avez planté une plante normale, celle-ci poussera en 4 tours, veuillez a ce qu'elle ne dépasse pas 4 tours !\n";
        plante=plante+1;
        
    } else if (plante>5 && choix==1) {
    cout << "Vous avez trop planté de plante normale\n";
    choix=0;
    }
    if (choix==2 && engrais>0) {
    cout <<"Quelle plante voulez vous mettre de l'engrais?\n";
    cin >> choixplanteengrais;
    engrais=engrais-1;
    if (choixplanteengrais==1) {
    plante1=plante1+1;    
    }
     if (choixplanteengrais==2) {
    plante2=plante2+1;    
    }
     if (choixplanteengrais==3) {
    plante3=plante3+1;    
    }
     if (choixplanteengrais==4) {
    plante4=plante4+1;    
    }
     if (choixplanteengrais==5) {
    plante6=plante6+1;    
    }
    }
    
    
      if (choix==3) {
    cout <<"Quelle plante voulez vous couper?\n";
    cin >> choixplantecouper;
    if (choixplantecouper==1) {
    plante1=plante1-3;    
    }
     if (choixplantecouper==2) {
    plante2=plante2-3;    
    }
     if (choixplantecouper==3) {
    plante3=plante3-3;    
    }
     if (choixplantecouper==4) {
    plante4=plante4-3;    
    }
     if (choixplantecouper==5) {
    plante6=plante6-3;    
    }
    }
     
     if (choix==4) {
     cout << "Quelle plante voulez vous vendre? \n";
     cin >> choixpourve;
      if (choixpourve==1) {
          
          if (plante1==1) {
        cout << "Vous avez vendu une pousse de plante ça ne vaut pas beaucoup !!\n" ;
        gold=gold+10;
        plante1=1;
      }
         if (plante1==2) {
        cout << "Vous avez vendu une demi plante ça ne vaut pas beaucoup !!\n"; 
        gold=gold+20;
        plante1=1;
      }
       if (plante1==3) {
        cout << "Vous avez vendu une plante presque mure mais ça ne vaut pas beaucoup !!\n" ;
        gold=gold+30;
        plante1=1;
        
      }
       if (plante1==4) {
        cout << "Vous avez vendu une  plante parfaite ça vaut beaucoup !!\n" ;
        gold=gold+200;
        plante1=1;
      }
       if (plante1==5) {
        cout << "Vous avez vendu une plante !! \n" ;
        gold=gold+50;
        plante1=1;
      }
       if (plante1==6) {
        cout << "Vous avez vendu une plante fané dommage... \n" ;
        gold=gold+5;
        plante1=1;
      }
     }  
     
     
     if (choixpourve==2) {
          
          if (plante2==1) {
        cout << "Vous avez vendu une pousse de plante ça ne vaut pas beaucoup !!\n" ;
        gold=gold+10;
        plante2=1;
      }
         if (plante2==2) {
        cout << "Vous avez vendu une demi plante ça ne vaut pas beaucoup !!\n"; 
        gold=gold+20;
        plante2=1;
      }
       if (plante2==3) {
        cout << "Vous avez vendu une plante presque mure mais ça ne vaut pas beaucoup !!\n" ;
        gold=gold+30;
        plante2=1;
        
      }
       if (plante2==4) {
        cout << "Vous avez vendu une  plante parfaite ça vaut beaucoup !!\n" ;
        gold=gold+200;
        plante2=1;
      }
       if (plante2==5) {
        cout << "Vous avez vendu une plante !! \n" ;
        gold=gold+50;
        plante2=1;
      }
       if (plante2==6) {
        cout << "Vous avez vendu une plante fané dommage... \n" ;
        gold=gold+5;
        plante2=1;
      }
     }  
     
     
     if (choixpourve==3) {
          
          if (plante3==1) {
        cout << "Vous avez vendu une pousse de plante ça ne vaut pas beaucoup !!\n" ;
        gold=gold+10;
        plante3=1;
      }
         if (plante3==2) {
        cout << "Vous avez vendu une demi plante ça ne vaut pas beaucoup !!\n"; 
        gold=gold+20;
        plante3=1;
      }
       if (plante3==3) {
        cout << "Vous avez vendu une plante presque mure mais ça ne vaut pas beaucoup !!\n" ;
        gold=gold+30;
        plante3=1;
        
      }
       if (plante3==4) {
        cout << "Vous avez vendu une  plante parfaite ça vaut beaucoup !!\n" ;
        gold=gold+200;
        plante3=1;
      }
       if (plante3==5) {
        cout << "Vous avez vendu une plante !! \n" ;
        gold=gold+50;
        plante3=1;
      }
       if (plante3==6) {
        cout << "Vous avez vendu une plante fané dommage... \n" ;
        gold=gold+5;
        plante3=1;
      }
     }  
     
     
     if (choixpourve==4) {
          
          if (plante4==1) {
        cout << "Vous avez vendu une pousse de plante ça ne vaut pas beaucoup !!\n" ;
        gold=gold+10;
        plante4=1;
      }
         if (plante4==2) {
        cout << "Vous avez vendu une demi plante ça ne vaut pas beaucoup !!\n"; 
        gold=gold+20;
        plante4=1;
      }
       if (plante4==3) {
        cout << "Vous avez vendu une plante presque mure mais ça ne vaut pas beaucoup !!\n" ;
        gold=gold+30;
        plante4=1;
        
      }
       if (plante4==4) {
        cout << "Vous avez vendu une  plante parfaite ça vaut beaucoup !!\n" ;
        gold=gold+200;
        plante4=1;
      }
       if (plante4==5) {
        cout << "Vous avez vendu une plante !! \n" ;
        gold=gold+50;
        plante4=1;
      }
       if (plante4==6) {
        cout << "Vous avez vendu une plante fané dommage... \n" ;
        gold=gold+5;
        plante4=1;
      }
     }  
     
     
     if (choixpourve==5) {
          
          if (plante6==1) {
        cout << "Vous avez vendu une pousse de plante ça ne vaut pas beaucoup !!\n" ;
        gold=gold+10;
        plante6=1;
      }
         if (plante6==2) {
        cout << "Vous avez vendu une demi plante ça ne vaut pas beaucoup !!\n"; 
        gold=gold+20;
        plante6=1;
      }
       if (plante6==3) {
        cout << "Vous avez vendu une plante presque mure mais ça ne vaut pas beaucoup !!\n" ;
        gold=gold+30;
        plante6=1;
        
      }
       if (plante6==4) {
        cout << "Vous avez vendu une  plante parfaite ça vaut beaucoup !!\n" ;
        gold=gold+200;
        plante6=1;
      }
       if (plante6==5) {
        cout << "Vous avez vendu une plante !! \n" ;
        gold=gold+50;
        plante6=1;
      }
       if (plante6==6) {
        cout << "Vous avez vendu une plante fané dommage... \n" ;
        gold=gold+5;
        plante6=1;
      }
     } 
     
        
    }
     
     
    
    
    if (choix==5 && gold>=1000 && plantecarnivore<3) {
        plantecarnivore=plantecarnivore+1;
        gold=gold-1000;
        choix=0;
    } else if (choix==5 && gold<1000) {
        
        cout << "Vous n'avez pas assez de golds";
        choix=0;
    }
    if (choix==6 && plantecarnivore>0 && plantecarnivoree<2) {
    plantecarnivoree=plantecarnivoree+1;    
    plantecarnivore=plantecarnivore-1;
    }
    
     if (plantecarnivoree==1 && plantecarnivore1<1) {
        plantecarnivore1=1; 
     }
     if (plantecarnivoree==2 && plantecarnivore2<1) {
        plantecarnivore2=1; 
     }
     
     if (choix==7 && gold>=500) {
        mouche=mouche+1;
        gold=gold-500;
        choix=0;
     }
     
     if (choix==8 && mouche>0) {
    cout << "Quelle plante voulez vous nourrir?";
    cin >> plantenourir;
    if (plantenourir==1) {
    plantecarnivore1manger=1;
    mouche=mouche-1;
    choix=0;
    }
    if (plantenourir==2) {
    plantecarnivore2manger=1;
    mouche=mouche-1;
    choix=0;
    }
     }
  }
    if (plantecarnivore1manger==1) {
    plante1timer=plante1timer+1;
    if (plante1timer==3){
    plantecarnivore1manger=0;    
    }
    }
    if (plantecarnivore2manger==1) {
    plante2timer=plante2timer+1;
    if (plante2timer==3){
    plantecarnivore2manger=0;    
    }
    }
    
    if (plantecarnivore1>0 && plantecarnivore1manger==1){
     plantecarnivore1=plantecarnivore1+1;
     cout << "Votre plante carnivore 1 a bien mange\n";
    }
    if (plantecarnivore2>0 && plantecarnivore2manger==1){
     plantecarnivore2=plantecarnivore2+1;
      cout << "Votre plante carnivore 2 a bien mange\n";
    }
    
     if (plantecarnivore1>1 && plantecarnivore1manger==0){
     plantecarnivore1=plantecarnivore1-1;
     cout << "Votre plante carnivore 1 a faim attention\n";
    }
    if (plantecarnivore2>1 && plantecarnivore2manger==0){
     plantecarnivore2=plantecarnivore2-1;
      cout << "Votre plante carnivore 2 a faim attention\n";
    }
    
    
    
    if (plante1>0) {
        plante1=plante1+1;
    }
    if (plante2>0) {
        plante2=plante2+1;
    }
    if (plante3>0) {
        plante3=plante3+1;
    }
    if (plante4>0) {
        plante4=plante4+1;
    }
    if (plante6>0) {
        plante6=plante6+1;
    }
    
    if (plante>0 && plante1<1) {
    plante1=plante1+1;
    }
     if (plante>1 && plante2<1) {
    plante2=plante2+1;
    }
     if (plante>2 && plante3<1) {
    plante3=plante3+1;
    }
     if (plante>3 && plante4<1) {
    plante4=plante4+1;
    }
     if (plante==5 && plante6<1) {
    plante6=plante6+1;
    }
    
    if (plante1==1) {
        
    
    
    cout << ". ";
    choix=0;
    }
     if (plante1==2) {
        
    
    
    cout << ".. ";
    choix=0;
    }
     if (plante1==3) {
        
    
    
    cout << "... ";
    choix=0;
    }
    if (plante1==4) {
        
    
    
    cout << ".î. ";
    choix=0;
    }
    
    if (plante1==5) {
    cout << ",î, ";
    choix=0;
    }
    
    if (plante1==6){
    cout << ",f, ";
    choix=0;
    }
    if (plante1==7) {
    plante1=1;
    choix=0;
    }
    if (plante2==1) {
        
    
    
    cout << ". ";
    choix=0;
    }
     if (plante2==2) {
        
    
    
    cout << ".. ";
    choix=0;
    }
     if (plante2==3) {
        
    
    
    cout << "... ";
    choix=0;
    }
    if (plante2==4) {
        
    
    
    cout << ".î. ";
    choix=0;
    }
 
 
 if (plante2==5) {
    cout << ",î, ";
    choix=0;
    }
    
    if (plante2==6){
    cout << ",f, ";
    choix=0;
    }
    if (plante2==7) {
    plante2=1;
    choix=0;
    }
   
    if (plante3==1) {
        
    
    
    cout << ". ";
    choix=0;
    }
     if (plante3==2) {
        
    
    
    cout << ".. ";
    choix=0;
    }
     if (plante3==3) {
        
    
    
    cout << "... ";
    choix=0;
    }
    if (plante3==4) {
        
    
    
    cout << ".î. ";
    choix=0;
    }
    
    if (plante3==5) {
    cout << ",î, ";
    choix=0;
    }
    
    if (plante3==6){
    cout << ",f, ";
    choix=0;
    }
    if (plante3==7) {
    plante3=1;
    choix=0;
    }
       
    if (plante4==1) {
        
    
    
    cout << ". ";
    choix=0;
    }
     if (plante4==2) {
        
    
    
    cout << ".. ";
    choix=0;
    }
     if (plante4==3) {
        
    
    
    cout << "... ";
    choix=0;
    }
    if (plante4==4) {
        
        
    
    
    cout << ".î. ";
    choix=0;
    }
    
    
    
    if (plante4==5) {
    cout << ",î, ";
    choix=0;
    }
    
    if (plante4==6){
    cout << ",f, ";
    choix=0;
    }
    if (plante4==7) {
    plante4=1;
    choix=0;
    }
       
    if (plante6==1) {
        
    
    
    cout << ". ";
    choix=0;
    }
     if (plante6==2) {
        
    
    
    cout << ".. ";
    choix=0;
    }
     if (plante6==3) {
        
    
    
    cout << "... ";
    choix=0;
    }
    if (plante6==4) {
        
    
    
    cout << ".î. ";
    choix=0;
    }
    
    if (plante6==5) {
    cout << ",î, ";
    choix=0;
    }
    
    if (plante6==6){
    cout << ",f, ";
    choix=0;
    }
    if (plante6==7) {
    plante6=1;
    choix=0;
    }
    
    if (plantecarnivore1==1) {
    cout << "()";
    choix=0;
    }
    if (plantecarnivore1==2) {
    cout << "(.)";
    choix=0;
    }
    if (plantecarnivore1==3) {
    cout << "(..)";
    choix=0;
    }
    if (plantecarnivore1==4) {
    cout << "(!!)";
    choix=0;
    }
    if (plantecarnivore1>4) {plantecarnivore1=4;
    }
    
    if (plantecarnivore2==1) {
    cout << "()";
    choix=0;
    }
    if (plantecarnivore2==2) {
    cout << "(.)";
    choix=0;
    }
    if (plantecarnivore2==3) {
    cout << "(..)";
    choix=0;
    }
    if (plantecarnivore2==4) {
    cout << "(!!)";
    choix=0;
    }
    if (plantecarnivore2>4) {
        plantecarnivore2=4;
        
    }
}
    return 0;
}
