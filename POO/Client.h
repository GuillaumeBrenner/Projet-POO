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

        String^ INSERT();

        String^ UPDATE();

        String^ DELETE();

        // Accesseurs et setters de donnees
        void setId(int id);
        void setNom(String^ nom);
        void setPrenom(String^ prenom);
        void setDateNaissance(DateTime dateNaissance);
        void setDatePreAchat(DateTime datePreAchat);

        int getId();
        String^ getNom();
        String^ getPrenom();
        DateTime getDateNaissance();
        DateTime getDatePreAchat();


    private:
        String^ sqlrequest;

        int idClient;
        String^ nom;
        String^ prenom;
        DateTime dateNaissance;
        DateTime datePreAchat;

    };
}
