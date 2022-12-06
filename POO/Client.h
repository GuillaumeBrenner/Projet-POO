#pragma once
#include "Header.h"


namespace Mappage
{
    ref class Client
    {
    public:
        // Constructeur par defaut
        Client();

        String^ SELECT();

        String^ SELECTBYID();

        String^ INSERT();

        String^ UPDATE();

        String^ DELETE();

        // Accesseurs et setters de donnees
        void setId(int numClient);
        void setNom(String^ nom);
        void setPrenom(String^ prenom);
        void setDateNaissance(DateTime dateNaissance);
        void setDatePreAchat(DateTime datePreAchat);
        void setAdresseFacturation(String^ adresseFacturation);
        void setAdresseLivraison(String^ adresseLivraison);

        int getId();
        String^ getNom();
        String^ getPrenom();
        DateTime getDateNaissance();
        DateTime getDatePreAchat();
        String^ getAdresseFacturation();
        String^ getAdresseLivraison();


    private:
        String^ sqlrequest;

        int numClient;
        String^ nom;
        String^ prenom;
        DateTime dateNaissance;
        DateTime datePreAchat;
        String^ adresseFacturation;
        String^ adresseLivraison;
    };
}
