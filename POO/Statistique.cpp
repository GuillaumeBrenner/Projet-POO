#include "Statistique.h"

int Mappage::Statistique::PanierMoyen()
{
    

    return 0;
}

String^ Mappage::Statistique::ChiffreAff()
{
    return "Select ((sum(composer.montantHT) + (sum(composer.montanttva)) * sum(composer.qteProduit)))" +
        "from composer, commande where commande.idCommande = composer.idCommande and Commande.dateEmission between '01/01/2022' and '30/01/2022'; ";
    
}



int Mappage::Statistique::SeuilApp()
{
    return select produit.idProduit  from Produit, Composer where produit.idProduit = composer.idProduit and Composer.qteProduit < produit.seuil.
    
}

int Mappage::Statistique::MontantTotal()
{
    return 0;
}

String^ Mappage::Statistique::PlusVendus()
{
   return select idproduit, count(*) as nombre  from produit group by idproduit order by nombre desc limit 10;
}

String^ Mappage::Statistique::MoinsVendus()
{
    select idproduit, count(*) as nombre from produit group by idproduit  order by nombre asc limit 10;
        
        
       
       
}

float Mappage::Statistique::ValCom()
{
    return 0.0f;
}

float Mappage::Statistique::ValAchat()
{
    return 0.0f;
}

float Mappage::Statistique::Simulation()
{
    return 0.0f;
}