#include "ServiceCommande.h"

Services::ServiceCommande::ServiceCommande()
{
    this->cad = gcnew Composants::Cad();
    this->commande = gcnew Mappage::Commande();
}

DataSet^ Services::ServiceCommande::listeCommandes(String^ dataTableName)
{
    String^ sql;

    sql = this->commande->SELECT();
    return this->cad->getRows(sql, dataTableName);
}

void Services::ServiceCommande::addCommande(String^ refCmd, DateTime dateEmission, DateTime dateLivraison, DateTime datePaiement, String^ moyenPaiement, int totalArticles, int numClient)
{
    String^ sql;

    this->commande->setRef(refCmd);
    this->commande->setDateEmission(dateEmission);
    this->commande->setDateLivraison(dateLivraison);
    this->commande->setDatePaiement(datePaiement);
    this->commande->setMoyenPaiement(moyenPaiement);
    this->commande->setTotalArticles(totalArticles);
    this->commande->setNumClient(numClient);

    sql = this->commande->INSERT();
    this->cad->actionRows(sql);
}

void Services::ServiceCommande::updateCommande(int idCommande, String^ refCmd, DateTime dateEmission, DateTime dateLivraison, DateTime datePaiement, String^ moyenPaiement, int totalArticles, int numClient)
{
    String^ sql;

    this->commande->setId(idCommande);
    this->commande->setRef(refCmd);
    this->commande->setDateEmission(dateEmission);
    this->commande->setDateLivraison(dateLivraison);
    this->commande->setDatePaiement(datePaiement);
    this->commande->setMoyenPaiement(moyenPaiement);
    this->commande->setTotalArticles(totalArticles);
    this->commande->setNumClient(numClient);

    sql = this->commande->UPDATE();
    this->cad->actionRows(sql);
}

void Services::ServiceCommande::deleteCommande(int idCommande)
{
    this->commande->setId(idCommande);
    String^ sql;

    this->commande->getId();

    sql = this->commande->DELETE();
    this->cad->actionRows(sql);
}