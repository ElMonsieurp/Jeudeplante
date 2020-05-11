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
    sleepcp(300);
     cout << "\n Vous etes au jour " << jour;
    while (choix==0 || choix > 10) {
    sleepcp(300);
    cout << "\n Que voulez vous faire? 1=Planter une plante 2=mettre de l'engrais 3=couper 4=?? 5=?? 10=Quitter \n";
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
        cout << "Vous avez planté une plante normale, celle-ci poussera en 4 tours, veuillez a ce qu'elle ne dépasse pas 4 de hauteurs !\n";
        plante=plante+1;
        
    } else if (plante>5 && choix==1) {
    cout << "Vous avez trop planté de plante normale\n";
    choix=0;
    }
    if (choix==2) {
    cout <<"Quelle plante voulez vous mettre de l'engrais?\n";
    cin >> choixplanteengrais;
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
    
}
    return 0;
}
