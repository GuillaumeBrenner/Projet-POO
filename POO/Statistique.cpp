#include "Statistique.h"


Mappage::Statistique::Statistique()
{

}

String^ Mappage::Statistique::ChiffreAff()
{
    return "SELECT ((SUM(Composer.montantHT) + (SUM(Composer.montanttva)) * SUM(Composer.qteProduit))) AS 'LE CHIFFRE AFFAIRE' " +
        "FROM Composer, Commande WHERE Commande.idCommande = Composer.idCommande AND Commande.dateEmission BETWEEN '2022-12-01' and '2022-12-30'; ";
}

String^ Mappage::Statistique::ValeurCommerciale()
{
    return "SELECT SUM(prixTTC) AS 'VALEUR COMMERCIALE' " +
        "FROM (SELECT idProduit, (prixHt * quantite) AS [prixTTC] FROM Produit) AS prod; ";
}

String^ Mappage::Statistique::ValeurAchat()
{
    return "SELECT SUM(prixTTC) AS 'VALEUR ACHAT' " +
        "FROM (SELECT idProduit, ((prixHt + (tauxTva/100))*quantite) AS prixTTC FROM Produit) AS prod; ";
}

String^ Mappage::Statistique::SousSeuil()
{
    return "SELECT idProduit AS ID, reference AS REFERENCE, designation AS DESIGNATION, prixHt AS 'PRIX HT' " +
        "FROM Produit WHERE quantite < seuil; ";
}

String^ Mappage::Statistique::PlusVendus()
{
    return "SELECT TOP 10 designation AS 'LES 10 PRODUITS PLUS VENDUS' FROM (SELECT idProduit, sum(qteProduit) AS [qteTotal] FROM Composer GROUP BY idProduit) AS [desi] " +
        "INNER JOIN (SELECT idProduit, designation FROM Produit) AS [prod] " +
        "ON desi.idProduit = prod.idProduit ORDER BY [qteTotal]; ";
}

String^ Mappage::Statistique::MoinsVendus()
{
    return "SELECT TOP 10 designation AS 'LES 10 PRODUITS MOINS VENDUS' FROM (SELECT idProduit, sum(qteProduit) AS [qteTotal] FROM Composer GROUP BY idProduit) AS [desi] " +
        "INNER JOIN (SELECT idProduit, designation FROM Produit) AS [prod] " +
        "ON desi.idProduit = prod.idProduit ORDER BY [qteTotal] DESC; ";
}