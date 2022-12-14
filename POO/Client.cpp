#include "Client.h"


Mappage::Client::Client()
{
    this->numClient = -1;
    this->nom = "RIEN";
    this->prenom = "RIEN";
    this->dateNaissance = DateTime::Now;
    this->datePreAchat = DateTime::Now;
}

String^ Mappage::Client::SELECT()
{
    return "SELECT [numClient] AS ID, [nom] AS NOM , [prenom] AS PRENOM, [dateNaissance] AS 'DATE DE NAISSANCE', [datePreAchat] AS 'DATE PREMIER ACHAT', [adresseFacturation] AS 'ADR FACTURATION', [adresseLivraison] AS 'ADR LIVRAISON', [ville] AS VILLE FROM [poo].[dbo].[Client]";
}

String^ Mappage::Client::SELECTBYID()
{
    return "SELECT [numClient], [nom], [prenom], [dateNaissance], [datePreAchat] FROM [poo].[dbo].[Client] WHERE numClient = " + this->getId() + ";";
}

String^ Mappage::Client::INSERT()
{
    return "INSERT INTO Client(nom, prenom, dateNaissance, datePreAchat, adresseFacturation, adresseLivraison, ville) VALUES('" + this->nom + "','" + this->prenom + "', '" + this->dateNaissance + "', '" + this->datePreAchat + "', '" + this->adresseFacturation + "', '" + this->adresseLivraison + "', '" + this->ville + "');";
}

String^ Mappage::Client::UPDATE()
{
    return "UPDATE Client " +
        "SET nom = '" + this->nom + "', prenom = '" + this->prenom + "', dateNaissance = '" + this->dateNaissance + "', datePreAchat = '" + this->datePreAchat + "', adresseFacturation = '" + this->adresseFacturation + "', adresseLivraison = '" + this->adresseLivraison+ "', ville = '" + this->ville + "' " +
        "WHERE (numClient = " + this->getId() + ");";
}

String^ Mappage::Client::DELETE()
{
    return "DELETE FROM [poo].[dbo].[Client] WHERE numClient = " + this->getId() + ";";
}

// SETTERS

void Mappage::Client::setId(int numClient)
{
    if (numClient > 0)
    {
        this->numClient = numClient;
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

void Mappage::Client::setVille(String^ ville)
{
    if (!String::IsNullOrEmpty(ville))
    {
        this->ville = ville;
    }
}

// GETTERS

int Mappage::Client::getId()
{
    return this->numClient;
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

String^ Mappage::Client::getVille()
{
    return this->ville;
}