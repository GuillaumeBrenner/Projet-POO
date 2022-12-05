#pragma once
#include "Header.h"


namespace Mappage
{
    ref class Personnel
    {
    public:
        // Constructeur par defaut
        Personnel();

        String^ SELECT();

        String^ SELECTBYID();

        String^ INSERT();

        String^ UPDATE();

        String^ DELETE();

        // Accesseurs et setters de donnees
        void setId(int id);
        void setNom(String^ nom);
        void setPrenom(String^ prenom);
        void setDateEmbauche(DateTime dateEmbauche);
        void setAdresse(String^ adresse);
        void setSuperieur(String^ superieur);

        int getId();
        String^ getNom();
        String^ getPrenom();
        DateTime getDateEmbauche();
        String^ getAdresse();
        String^ getSuperieur();


    private:
        String^ sqlrequest;

        int idPersonnel;
        String^ nom;
        String^ prenom;
        DateTime dateEmbauche;
        String^ adresse;
        String^ superieur;

    };
}
