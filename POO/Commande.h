#pragma once
#include "Header.h"


namespace Mappage
{
    // Cette classe permet de transiter les informations contenues dans la bdd dans une classe de donnée
    ref class Commande
    {
    public:
        // Constructeur par defaut
        Commande();

        // retourne le commande pour selectionner une personne dans la bdd
        String^ SELECT();

        // retourne le commande pour ajouter une personne dans la bdd
        //String^ INSERT();

        // retourne le commande pour mettre à jour une personne dans la bdd
        //String^ UPDATE();

        // retourne le commande pour suppprimer une personne dans la bdd
        //String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setIdCommande(int IdCommande);
        void setRefCommande(String^ refCommande);
        void setDateEmmission(DateTime dateEmmission);
        void setDateLivreson(DateTime dateLivreson);
        void setDatePaiement(DateTime datePaiement);
        void setMoyenPaiment(String^ moyenPaiment);
        void setTotalArticls(int totalArticls);
        void setMontantHT(int montantHT);
        void setMontantTVA(int montantTVA);
        void setMontantTTC(int montantTTC);


        int getIdCommande();
        String^ getRefCommande();
        DateTime getDateEmmission();
        DateTime getDateLivraison();
        DateTime getDatePaiement();
        String^ getMoyenPaiment();
        int getTotalArticles();
        int getMontantHT();
        int getMontantTVA();
        int getMontantTTC();
        

    private:
        int idCommande;
        String^ refCommande;
        DateTime dateEmmission;
        DateTime dateLivraison;
        DateTime datePaiement;
        String^ moyenPaiment;
        float totalArticles;
        int montantHT;
        int montantTVA;
        int montantTTC;

    };
}
