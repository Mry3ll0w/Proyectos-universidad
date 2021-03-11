SELECT 
    ART_NOM AS 'Nombre', ART_COL AS 'Color', ART_PV AS 'Precio'
FROM
    articulos
WHERE
    art_prv = 2
ORDER BY ART_PV DESC , art_nom
;