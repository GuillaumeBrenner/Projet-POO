#pragma once

#include "Cad.h" 
#include "Commande.h" 


namespace Services
{
    ref class ServiceCommande
    {
    public:
        ServiceCommande();

        DataSet^ listeCommande(String^ dataTableName);

        //DataSet^ adressesClient(int idPersonne, String^ dataTableName);

        //int ajouter(String^ nom, String^ prenom, array<String^>^ adresses);

        //void modifier(int idPersonne, String^ nom, String^ prenom, array<String^>^ adresses);

        //void supprimer(int idPersonne);

    private:
        Composants::Cad^ cad;
        Mappage::Commande^ Commande;

        DataSet^ dataSet;
    };
}

