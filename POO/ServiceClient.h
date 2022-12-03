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

        //DataSet^ adressesClient(int idPersonne, String^ dataTableName);

        void addClient(String^ nom, String^ prenom, DateTime dateNaissance, DateTime datePreAchat);

        //void modifier(int idPersonne, String^ nom, String^ prenom, array<String^>^ adresses);

        //void supprimer(int idPersonne);

    private:
        Composants::Cad^ cad;
        Mappage::Client^ client;

        DataSet^ dataSet;
    };
}