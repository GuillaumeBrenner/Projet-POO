#include "Client.h"


Mappage::Client::Client()
{
    this->idClient = -1;
    this->nom = "RIEN";
    this->prenom = "RIEN";
    this->dateNaissance = DateTime::Now;
    this->datePreAchat = DateTime::Now;
}

String^ Mappage::Client::SELECT()
{
    return "SELECT [numClient] AS ID, [nom] AS NOM , [prenom] AS PRENOM, [dateNaissance] AS 'DATE DE NAISSANCE', [datePreAchat] AS 'DATE PREMIER ACHAT', [adresseFacturation] AS 'ADR FACTURATION', [adresseLivraison] AS 'ADR LIVRAISON' FROM [poo].[dbo].[Client]";
}

String^ Mappage::Client::SELECTBYID()
{
    return "SELECT [numClient], [nom], [prenom], [dateNaissance], [datePreAchat] FROM [poo].[dbo].[Client] WHERE numClient = " + this->getId() + ";";
}

String^ Mappage::Client::INSERT()
{
    return "INSERT INTO Client(nom, prenom, dateNaissance, datePreAchat, adresseFacturation, adresseLivraison) VALUES('" + this->nom + "','" + this->prenom + "', '" + this->dateNaissance + "', '" + this->datePreAchat + "', '" + this->adresseFacturation + "', '" + this->adresseLivraison + "');";
}

String^ Mappage::Client::UPDATE()
{
    return "UPDATE [poo].[dbo].[Client] " +
        "SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "', dateNaissance = '" + this->getDateNaissance() + "', datePreAchat = ' " + this->getDatePreAchat() +
        "WHERE numClient = " + this->getId() + ";";
}

String^ Mappage::Client::DELETE()
{
    return "DELETE FROM [poo].[dbo].[Client] WHERE numClient = " + this->getId() + ";";
}

// SETTERS

void Mappage::Client::setId(int id)
{
    if (id > 0)
    {
        this->idClient = id;
    }
}

void Mappage::Client::setNom(String^ nom)
{
    if (!String::IsNullOrEmpty(nom))
    {
        this->nom = nom;
    }
}

void Mappage::Client::setPrenom(String^ prenom)
{
    if (!String::IsNullOrEmpty(prenom))
    {
        this->prenom = prenom;
    }
}

void Mappage::Client::setDateNaissance(DateTime dateNaissance)
{
    this->dateNaissance = dateNaissance;
}

void Mappage::Client::setDatePreAchat(DateTime datePreAchat)
{
    this->datePreAchat = datePreAchat;
}

void Mappage::Client::setAdresseFacturation(String^ adresseFacturation)
{
    if (!String::IsNullOrEmpty(adresseFacturation))
    {
        this->adresseFacturation = adresseFacturation;
    }
}

void Mappage::Client::setAdresseLivraison(String^ adresseLivraison)
{
    if (!String::IsNullOrEmpty(adresseLivraison))
    {
        this->adresseLivraison = adresseLivraison;
    }
}

// GETTERS

int Mappage::Client::getId()
{
    return this->idClient;
}

String^ Mappage::Client::getNom()
{
    return this->nom;
}

String^ Mappage::Client::getPrenom()
{
    return this->prenom;
}

DateTime Mappage::Client::getDateNaissance()
{
    return this->dateNaissance;
}

DateTime Mappage::Client::getDatePreAchat()
{
    return this->dateNaissance;
}

String^ Mappage::Client::getAdresseFacturation()
{
    return this->adresseFacturation;
}

String^ Mappage::Client::getAdresseLivraison()
{
    return this->adresseFacturation;
}