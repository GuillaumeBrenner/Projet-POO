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
    return "SELECT [numClient] AS ID, [nomC] AS NOM , [prenomC] AS PRENOM, [dateNaissance] AS 'DATE DE NAISSANCE', [datePreAchat] AS 'DATE PREMIER ACHAT' FROM[poo].[dbo].[Client]";
}

String^ Mappage::Client::INSERT()
{
    return "INSERT INTO Client(nomC, prenomC, dateNaissance, datePreAchat) VALUES('" + this->nom + "','" + this->prenom + "', '" + this->dateNaissance + "', '" + this->dateNaissance + "');";
}

String^ Mappage::Client::UPDATE()
{
    return "UPDATE Client " +
        "SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "' " +
        "WHERE(id_personne = " + this->getId() + ");";
}

String^ Mappage::Client::DELETE()
{
    return "DELETE FROM Client WHERE(numClient = " + this->getId() + ");";
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