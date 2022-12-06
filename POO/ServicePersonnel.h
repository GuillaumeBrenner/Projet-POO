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

        DataSet^ PersonnelById(int idPersonnel, String^ dataTableName);

        void addPersonnel(String^ nom, String^ prenom, DateTime dateEmbauche, String^ adresse, String^ superieur);

        void updatePersonnel(int idPersonnel, String^ nom, String^ prenom, DateTime dateEmbauche, String^ adresse, String^ superieur);

        void deletePersonnel(int idPersonne);

    private:
        Composants::Cad^ cad;
        Mappage::Personnel^ personnel;

        DataSet^ dataSet;
    };
}