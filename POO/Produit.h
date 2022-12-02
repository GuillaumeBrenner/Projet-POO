#pragma once
#include "Header.h"


namespace Mappage
{
    // Cette classe permet de transiter les informations contenues dans la bdd dans une classe de donnée
    ref class Produit
    {
    public:
        // Constructeur par defaut
        Produit();

        // retourne le commande pour selectionner une personne dans la bdd
        String^ SELECT();

        // retourne le commande pour ajouter une personne dans la bdd
        //String^ INSERT();

        // retourne le commande pour mettre à jour une personne dans la bdd
        //String^ UPDATE();

        // retourne le commande pour suppprimer une personne dans la bdd
        //String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setId(int id);
        void setRef(String^ reference);
        void setDesignation(String^ designation);
        void setPrixHt(float prixHt);
        void setQuantite(int quantite);
        void setSeuil(int seuil);
        void setTaux(float tauxTva);
        void setCategorie(array<String^>^ categorie);

        int getId();
        String^ getRef();
        String^ getDesignation();
        float getPrixHt();
        int getQuantite();
        int getSeuil();
        float getTaux();
        array<String^>^ getCategorie();

    private:
        String^ sqlrequest;

        int idProduit;
        String^ reference;
        String^ designation;
        float prixHt;
        int quantite;
        int seuil;
        float tauxTva;
        array<String^>^ categorie;

    };
}
