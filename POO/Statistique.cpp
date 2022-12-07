#include "Statistique.h"


Mappage::Statistique::Statistique()
{

}

String^ Mappage::Statistique::ChiffreAff()
{
    return "SELECT ((sum(Composer.montantHT) + (sum(Composer.montanttva)) * sum(Composer.qteProduit))) AS 'LE CHIFFRE AFFAIRE' " +
        "from Composer, Commande WHERE Commande.idCommande = Composer.idCommande and Commande.dateEmission between '2022-12-01' and '2022-12-30'; ";
}