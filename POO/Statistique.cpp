#include "Statistique.h"

String^ Mappage::Statistique::PanierMoyen()
{
     return select AVG(totalArticles)  from Commande;

   
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

Mappage::Statistique::Statistique()
{
    return 0.0f;
}

float Mappage::Statistique::ValAchat()
{
    return 0.0f;
}

String^ Mappage::Statistique::ChiffreAff()
{
    return "SELECT ((sum(Composer.montantHT) + (sum(Composer.montanttva)) * sum(Composer.qteProduit))) AS 'LE CHIFFRE AFFAIRE' " +
        "from Composer, Commande WHERE Commande.idCommande = Composer.idCommande and Commande.dateEmission between '2022-12-01' and '2022-12-30'; ";
}