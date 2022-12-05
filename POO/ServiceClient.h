#pragma once

#include "Cad.h" 
#include "Client.h" 


namespace Services
{
    ref class ServiceClient
    {
    public:
        ServiceClient();

        DataSet^ listeClients(String^ dataTableName);

        DataSet^ clientById(int numClient, String^ dataTableName);

        void addClient(String^ nom, String^ prenom, DateTime dateNaissance, DateTime datePreAchat);

        //void updateClient(String^ dataTableName);

        void deleteClient(int numClient);

    private:
        Composants::Cad^ cad;
        Mappage::Client^ client;

        DataSet^ dataSet;
    };
}