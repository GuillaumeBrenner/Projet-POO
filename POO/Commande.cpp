#include "Commande.h"


Mappage::Commande::Commande()
{
    this->idCommande = -1;
    this->refCommande= "RIEN";
    this->dateLivraison = DateTime::Now;
    this->dateEmmission = DateTime::Now;
    this->datePaiement = DateTime::Now;
    this->moyenPaiment= "RIEN";
    this->totalArticles = -1;
    this->montantHT = -1;
    this->montantTVA = -1; 
    this->montantTTC = -1;
}

String^ Mappage::Commande::SELECT()
{
    return "SELECT TOP (1000) [idPersonnel], [idCmd], [refCmd], [dateEmission], [dateLivraison] , [datePaiement], [moyenPaiement] , [totalArticles] , [montantHT], [montantTVA] , [montantTTC], [numClient] FROM[poo].[dbo].[Commande]";
}

//seter

void Mappage::Commande::setIdCommande(int idCommande)
{
    if (idCommande > 0)
    {
        this->idCommande = idCommande;
    }
}

void Mappage::Commande::setRefCommande(String^ refCommande)
{
    if (!String::IsNullOrEmpty(refCommande))
    {
        this->refCommande =refCommande ;
    }
}

void Mappage::Commande::setDateLivreson(DateTime dateLivreson)
{
    
        this->dateLivraison = dateLivraison;
    
}

void Mappage::Commande::setDateEmmission(DateTime dateEmmission)
{
    
        this->dateEmmission = dateEmmission;
    
}
void Mappage::Commande::setDatePaiement(DateTime DatePaiement)
{
    
        this->datePaiement = DatePaiement;
    
}
void Mappage::Commande::setMoyenPaiment(String^ MoyenPaiment)
{
    
        this->moyenPaiment = MoyenPaiment;
    
}

void Mappage::Commande::setTotalArticls(int totalArticls)
{
    
        this->totalArticles = totalArticls;
    
}

void Mappage::Commande::setMontantHT(int montantHT)
{
    if (montantHT > 0)
    {
        this->montantHT = montantHT;
    }
}

void Mappage::Commande::setMontantTVA(int montantTVA)
{
    if (montantTVA > 0)
    {
        this->montantTVA = montantTVA;
    }
}
void Mappage::Commande::setMontantTTC(int MontantTTC)
{
    if (MontantTTC > 0)
    {
        this->montantTTC = MontantTTC;
    }
}


// GETTERS

int Mappage::Commande::getIdCommande()
{
    return this->idCommande;
}


String^ Mappage::Commande::getRefCommande()
{
    return this->refCommande;
}

DateTime Mappage::Commande::getDateLivraison()
{
    return this->dateLivraison;
}

DateTime Mappage::Commande::getDateEmmission()
{
    return this->dateEmmission;
}


DateTime Mappage::Commande::getDatePaiement()
{
    return this->datePaiement;
}

String^ Mappage::Commande::getMoyenPaiment()
{
    return this->moyenPaiment;
}

int Mappage::Commande::getTotalArticles()
{
    return this->totalArticles;
}


int Mappage::Commande::getMontantHT()
{
    return this->montantHT;
}


int Mappage::Commande::getMontantTVA()
{
    return this->montantTVA;
}

int Mappage::Commande::getMontantTTC()
{
    return this->montantTTC;
}
