#pragma once

#include "Cad.h" 
#include "Client.h" 

// On crée un namespace specifique pour la gestion de service, ça permet de regrouper les classes
// C'est purement cosmétique mais permet d'avoir un code plus elegant
namespace Services
{
    ref class ServiceClient
    {
    public:
        // constructeur par defaut
        ServiceClient();

        // Permet de recuperer la liste des personnes presentes dans la bdd (identifiant de la liste)
        DataSet^ listeClients(String^ dataTableName);

        // Permet de recuperer la liste des adresses en fonction de la personne (identifiant de la liste)
        //DataSet^ adressesClient(int idPersonne, String^ dataTableName);

        // Permet d'ajouter une personne (nom, prenom, adresses)
        //int ajouter(String^ nom, String^ prenom, array<String^>^ adresses);

        // Permet de modifier une personne (indentifiant de la personne à modifier, nouveau nom, nouveau prenom, nouvelles adresses)
        //void modifier(int idPersonne, String^ nom, String^ prenom, array<String^>^ adresses);

        // Permet de supprimer une personne (identifiant de la personne à supprimer)
        //void supprimer(int idPersonne);

    private:
        // Permet d'acceder à la donnee
        Composants::Cad^ cad;

        // Permet de mapper une donnee personne vers/depuis la bdd
        Composants::Client^ client;

        // Permet de mapper une donne adresse vers/depuis la bdd
       // Composants::MappingTBADRESSE^ adresse;

        // Cache de donnée en memoire de la bdd
        DataSet^ dataSet;
    };
}