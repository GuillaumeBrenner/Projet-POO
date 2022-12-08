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

        DataSet^ PanierMoyen(String^ dataTableName);

        DataSet^ SeuilApp(String^ dataTableName);

        DataSet^ MontantTotal(String^ dataTableName);

        DataSet^ PlusVendus(String^ dataTableName);

        DataSet^ MoinsVendus(String^ dataTableName);

        DataSet^ ValCom(String^ dataTableName);

        DataSet^ ValAchat(String^ dataTableName);

        DataSet^ Simulation(String^ dataTableName);

    private:
        Composants::Cad^ cad;
        Mappage::Statistique^ statistique;

        DataSet^ dataSet;
    };
}