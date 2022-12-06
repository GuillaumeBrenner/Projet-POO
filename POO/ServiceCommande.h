#pragma once

#include "Cad.h" 
#include "Commande.h" 


namespace Services
{
    ref class ServiceCommande
    {
    public:
        ServiceCommande();

        DataSet^ listeCommandes(String^ dataTableName);

        void addCommande(String^ refCmd, DateTime dateEmission, DateTime dateLivraison, DateTime datePaiement, String^ moyenPaiement, int totalArticles, int numClient);

        void updateCommande(int idCommande, String^ refCmd, DateTime dateEmission, DateTime dateLivraison, DateTime datePaiement, String^ moyenPaiement, int totalArticles, int numClient);

        void deleteCommande(int idCommande);

    private:
        Composants::Cad^ cad;
        Mappage::Commande^ commande;

        DataSet^ dataSet;
    };
}