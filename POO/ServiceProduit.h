#pragma once

#include "Cad.h" 
#include "Produit.h" 


namespace Services
{
    ref class ServiceProduit
    {
    public:
        ServiceProduit();

        DataSet^ listeProduits(String^ dataTableName);

        //DataSet^ adressesClient(int idPersonne, String^ dataTableName);

        //int ajouter(String^ nom, String^ prenom, array<String^>^ adresses);

        //void modifier(int idPersonne, String^ nom, String^ prenom, array<String^>^ adresses);

        //void supprimer(int idPersonne);

    private:
        Composants::Cad^ cad;
        Mappage::Produit^ produit;

        DataSet^ dataSet;
    };
}