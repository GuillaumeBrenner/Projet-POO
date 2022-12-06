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

        DataSet^ ProduitById(int idProduit, String^ dataTableName);

        void addProduit(String^ reference, String^ designation, float prixHt, int quantite, int seuil, float tauxTva, String^ categorie);

        //void updateProduit(int idPersonne, String^ nom, String^ prenom, array<String^>^ adresses);

        void deleteProduit(int idProduit);

        DataSet^ listeCategorie(String^ dataTableName);

    private:
        Composants::Cad^ cad;
        Mappage::Produit^ produit;

        DataSet^ dataSet;
    };
}