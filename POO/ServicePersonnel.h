#pragma once

#include "Cad.h" 
#include "Personnel.h" 


namespace Services
{
    ref class ServicePersonnel
    {
    public:
        ServicePersonnel();

        DataSet^ listePersonnels(String^ dataTableName);

        //DataSet^ adressesClient(int idPersonne, String^ dataTableName);

        void addPersonnel(String^ nom, String^ prenom, DateTime dateEmbauche, String^ adresse, String^ superieur);

        //void modifier(int idPersonne, String^ nom, String^ prenom, array<String^>^ adresses);

        //void supprimer(int idPersonne);

    private:
        Composants::Cad^ cad;
        Mappage::Personnel^ personnel;

        DataSet^ dataSet;
    };
}