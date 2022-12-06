#pragma once
#include "Header.h"


namespace Mappage
{
    ref class Produit
    {
    public:
        // Constructeur par defaut
        Produit();

        String^ SELECT();

        String^ SELECTBYID();

        String^ SELECTCAT();

        String^ INSERT();

        String^ UPDATE();

        String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setId(int id);
        void setRef(String^ reference);
        void setDesignation(String^ designation);
        void setPrixHt(float prixHt);
        void setQuantite(int quantite);
        void setSeuil(int seuil);
        void setTaux(float tauxTva);
        void setCategorie(String^ categorie);

        int getId();
        String^ getRef();
        String^ getDesignation();
        float getPrixHt();
        int getQuantite();
        int getSeuil();
        float getTaux();
        String^ getCategorie();

    private:
        String^ sqlrequest;

        int idProduit;
        String^ reference;
        String^ designation;
        float prixHt;
        int quantite;
        int seuil;
        float tauxTva;
        String^ categorie;

    };
}
