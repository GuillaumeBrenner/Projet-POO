#include "Commande.h"

Mappage::Commande::Commande()
{
    this->idCommande = -1;
    this->refCmd = "RIEN";
    this->dateEmission = DateTime::Now;
    this->dateLivraison = DateTime::Now;
    this->datePaiement = DateTime::Now;
    this->moyenPaiement = "RIEN";
    this->totalArticles = -1;
    this->numClient = -1;
}

String^ Mappage::Commande::SELECT()
{
    return "SELECT [idCommande] AS ID, [refCmd] AS REFERENCE , [dateEmission] AS 'DATE EMISSION', [dateLivraison] AS 'DATE LIVRAISON', [datePaiement] AS 'DATE PAIEMENT', [moyenPaiement] AS 'MOYEN PAIEMENT', [totalArticles] AS 'TOTAL ARTICLE', [numClient] AS 'CLIENT' " +
        "FROM[poo].[dbo].[Commande]" +
        "WHERE(numClient = " + this->numClient + ");";
}

String^ Mappage::Commande::INSERT()
{
    return "INSERT INTO Commande (refCmd, dateEmission, dateLivraison, datePaiement, moyenPaiement, totalArticles, numClient)" +
        "VALUES('" + this->refCmd + "', '" + this->dateEmission + "', '" + this->dateLivraison + "', '" + this->datePaiement + "', '" + this->moyenPaiement + "', '" + this->totalArticles + "', '" + this->numClient + "');";
}

String^ Mappage::Commande::UPDATE()
{
    return "UPDATE Commande " +
        "SET refCmd = '" + this->refCmd + "', dateEmission = '" + this->dateEmission + "', dateLivraison = '" + this->dateLivraison + "', datePaiement = '" + this->datePaiement + "', moyenPaiement = '" + this->moyenPaiement + "', totalArticles = '" + this->totalArticles + "', numClient = '" + this->numClient + "' " +
        "WHERE (idCommande = " + this->getId() + ");";
}

String^ Mappage::Commande::DELETE()
{
    return "DELETE FROM [poo].[dbo].[Commande] WHERE idCommande = " + this->getId() + ";";
}

// SETTERS

void Mappage::Commande::setId(int idCommande)
{
    if (idCommande > 0)
    {
        this->idCommande = idCommande;
    }
}

void Mappage::Commande::setRef(String^ refCmd)
{
    if (!String::IsNullOrEmpty(refCmd))
    {
        this->refCmd = refCmd;
    }
}

void Mappage::Commande::setDateEmission(DateTime dateEmission)
{
    
    this->dateEmission = dateEmission;
    
}

void Mappage::Commande::setDateLivraison(DateTime dateLivraison)
{
    this->dateLivraison = dateLivraison;
}

void Mappage::Commande::setDatePaiement(DateTime datePaiement)
{
    this->datePaiement = datePaiement;
}

void Mappage::Commande::setMoyenPaiement(String^ moyenPaiement)
{
    this->moyenPaiement = moyenPaiement;
}

void Mappage::Commande::setTotalArticles(int totalArticles)
{
    this->totalArticles = totalArticles;
}

void Mappage::Commande::setNumClient(int numClient)
{
    this->numClient = numClient;
}

// GETTERS

int Mappage::Commande::getId()
{
    return this->idCommande;
}

String^ Mappage::Commande::getRef()
{
    return this->refCmd;
}

DateTime Mappage::Commande::getDateEmission()
{
    return this->dateEmission;
}

DateTime Mappage::Commande::getDateLivraison()
{
    return this->dateLivraison;
}

DateTime Mappage::Commande::getDatePaiement()
{
    return this->datePaiement;
}

String^ Mappage::Commande::getMoyenPaiement()
{
    return this->moyenPaiement;
}
int Mappage::Commande::getTotalArticles()
{
    return this->totalArticles;
}

int Mappage::Commande::getNumClient()
{
    return this->numClient;
}

