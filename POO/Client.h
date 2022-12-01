#pragma once

using namespace System;

// On cr�e un namespace specifique pour les composants, �a permet de regrouper les classes
// C'est purement cosm�tique mais permet d'avoir un code plus elegant
namespace Composants
{
    // Cette classe permet de transiter les informations contenues dans la bdd dans une classe de donn�e
    ref class Client
    {
    public:
        // Constructeur par defaut
        Client();

        // retourne le commande pour selectionner une personne dans la bdd
        String^ SELECT();

        // retourne le commande pour ajouter une personne dans la bdd
        //String^ INSERT();

        // retourne le commande pour mettre � jour une personne dans la bdd
        //String^ UPDATE();

        // retourne le commande pour suppprimer une personne dans la bdd
        //String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setId(int id);
        void setNom(String^ nom);
        void setPrenom(String^ prenom);

        int getId();
        String^ getNom();
        String^ getPrenom();


    private:
        int idClient;
        String^ nom;
        String^ prenom;

    };
}
