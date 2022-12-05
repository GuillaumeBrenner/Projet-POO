#include "ServiceClient.h"


Services::ServiceClient::ServiceClient()
{
    this->cad = gcnew Composants::Cad();
    this->client = gcnew Mappage::Client();
}

DataSet^ Services::ServiceClient::listeClients(String^ dataTableName)
{
    String^ sql;

    sql = this->client->SELECT();
    return this->cad->getRows(sql, dataTableName);
}

void Services::ServiceClient::addClient(String^ nom, String^ prenom, DateTime dateNaissance, DateTime datePreAchat)
{
    String^ sql;

    this->client->setNom(nom);
    this->client->setPrenom(prenom);
    this->client->setDateNaissance(dateNaissance);
    this->client->setDatePreAchat(datePreAchat);

    sql = this->client->INSERT();
    this->cad->actionRows(sql);
}

void Services::ServiceClient::updateClient(String^ nom, String^ prenom, DateTime dateNaissance, DateTime datePreAchat)
{
    String^ sql;

    this->client->setNom(nom);
    this->client->setPrenom(prenom);
    this->client->setDateNaissance(dateNaissance);
    this->client->setDatePreAchat(datePreAchat);

    sql = this->client->UPDATE();
    this->cad->actionRows(sql);
}

void Services::ServiceClient::deleteClient(int numClient)
{
    this->client->setId(numClient);
    String^ sql;

    this->client->getId();

    sql = this->client->DELETE();
    this->cad->actionRows(sql);
}

