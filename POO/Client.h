#pragma once


namespace Mappage
{
    // Cette classe permet de transiter les informations contenues dans la bdd dans une classe de donnée
    ref class Client
    {
    public:
        // Constructeur par defaut
        Client();

        // retourne le commande pour selectionner une personne dans la bdd
        System::String^ SELECT(void);

        // retourne le commande pour ajouter une personne dans la bdd
        //String^ INSERT();

        // retourne le commande pour mettre à jour une personne dans la bdd
        //String^ UPDATE();

        // retourne le commande pour suppprimer une personne dans la bdd
        //String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setId(int id);
        void setNom(System::String^ nom);
        void setPrenom(System::String^ prenom);

        int getId();
        System::String^ getNom(void);
        System::String^ getPrenom(void);


    private:
        System::String^ sqlrequest;
        int idClient;
        System::String^ nom;
        System::String^ prenom;

    };
}
