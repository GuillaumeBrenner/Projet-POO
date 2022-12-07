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

    private:
        Composants::Cad^ cad;
        Mappage::Statistique^ statistique;

        DataSet^ dataSet;
    };
}