#pragma once

#include "Cad.h" 
#include "Client.h" 

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;


namespace Services
{
    ref class ServiceClient
    {
    public:
        ServiceClient();

        DataSet^ listeClients(String^ dataTableName);

        //DataSet^ adressesClient(int idPersonne, String^ dataTableName);

        //int ajouter(String^ nom, String^ prenom, array<String^>^ adresses);

        //void modifier(int idPersonne, String^ nom, String^ prenom, array<String^>^ adresses);

        //void supprimer(int idPersonne);

    private:
        Composants::Cad^ cad;

        Mappage::Client^ client;


        DataSet^ dataSet;
    };
}