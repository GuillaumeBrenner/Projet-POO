#pragma once
#include "Header.h"


namespace Mappage
{
    ref class Commande
    {
    public:
        // Constructeur par defaut
        Commande();

        String^ SELECT();

        String^ INSERT();

        String^ UPDATE();

        String^ DELETE();

        // Accesseurs et setters de donnees
        void setId(int idCommande);
        void setRef(String^ refCmd);
        void setDateEmission(DateTime dateEmission);
        void setDateLivraison(DateTime dateLivraison);
        void setDatePaiement(DateTime datePaiement);
        void setMoyenPaiement(String^ moyenPaiement);
        void setTotalArticles(int totalArticles);
        void setNumClient(int numClient);

        int getId();
        String^ getRef();
        DateTime getDateEmission();
        DateTime getDateLivraison();
        DateTime getDatePaiement();
        String^ getMoyenPaiement();
        int getTotalArticles();
        int getNumClient();


    private:
        String^ sqlrequest;

        int idCommande;
        String^ refCmd;
        DateTime dateEmission;
        DateTime dateLivraison;
        DateTime datePaiement;
        String^ moyenPaiement;
        int totalArticles;
        int numClient;
    };
}
