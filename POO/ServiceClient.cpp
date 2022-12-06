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

void Services::ServiceClient::addClient(String^ nom, String^ prenom, DateTime dateNaissance, DateTime datePreAchat, String^ adresseFacturation, String^ adresseLivraison)
{
    String^ sql;

    this->client->setNom(nom);
    this->client->setPrenom(prenom);
    this->client->setDateNaissance(dateNaissance);
    this->client->setDatePreAchat(datePreAchat);
    this->client->setAdresseFacturation(adresseFacturation);
    this->client->setAdresseLivraison(adresseLivraison);

    sql = this->client->INSERT();
    this->cad->actionRows(sql);
}

void Services::ServiceClient::updateClient(int numClient, String^ nom, String^ prenom, DateTime dateNaissance, DateTime datePreAchat, String^ adresseFacturation, String^ adresseLivraison)
{
    String^ sql;

    this->client->setId(numClient);
    this->client->setNom(nom);
    this->client->setPrenom(prenom);
    this->client->setDateNaissance(dateNaissance);
    this->client->setDatePreAchat(datePreAchat);
    this->client->setAdresseFacturation(adresseFacturation);
    this->client->setAdresseLivraison(adresseLivraison);

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

DataSet^ Services::ServiceClient::clientById(int numClient, String^ dataTableName)
{

    String^ sql;
    sql = this->client->SELECTBYID();

    //this->client->setId(numClient);
    //this->dataSet = this->cad->getRows(sql, dataTableName);
   // return this->dataSet;

    //this->cad->actionRowsId(sql);
    return this->cad->getRows(sql, dataTableName);
}

