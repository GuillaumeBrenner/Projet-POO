#pragma once

#include "Cad.h" 
#include "Statistique.h" 


namespace Services
{
    ref class ServiceStatistique
    {
    public:
        ServiceStatistique();

        DataSet^ ChiffreAff(String^ dataTableName);
        DataSet^ ValeurCommerciale(String^ dataTableName);
        DataSet^ ValeurAchat(String^ dataTableName);
        DataSet^ SousSeuil(String^ dataTableName);
        DataSet^ PlusVendus(String^ dataTableName);
        DataSet^ MoinsVendus(String^ dataTableName);

    private:
        Composants::Cad^ cad;
        Mappage::Statistique^ statistique;

        DataSet^ dataSet;
    };
}