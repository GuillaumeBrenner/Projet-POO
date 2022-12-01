#include "Client.h"

using namespace Composants;

Client::Client()
{
    this->idClient = -1;
    this->nom = "RIEN";
    this->prenom = "RIEN";
}

String^ Client::SELECT()
{
    return "SELECT nomC, prenomC " +
        "FROM Client;";
}

/*  String^ Client::INSERT()
{
    return "INSERT INTO TB_PERSONNE " +
        "(nom, prenom) " +
        "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY;";
}

String^ Client::UPDATE()
{
    return "UPDATE TB_PERSONNE " +
        "SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "' " +
        "WHERE(id_personne = " + this->getId() + ");";
}

String^ Client::DELETE()
{
    return "DELETE FROM TB_PERSONNE " +
        "WHERE(id_personne = " + this->getId() + ");";
}
*/

void Client::setId(int id)
{
    if (id > 0)
    {
        this->idClient = id;
    }
}

void Client::setPrenom(String^ prenom)
{
    if (!String::IsNullOrEmpty(prenom))
    {
        this->prenom = prenom;
    }
}

void Client::setNom(String^ nom)
{
    if (!String::IsNullOrEmpty(nom))
    {
        this->nom = nom;
    }
}

int Client::getId()
{
    return this->idClient;
}

String^ Client::getNom()
{
    return this->nom;
}

String^ Client::getPrenom()
{
    return this->prenom;
}