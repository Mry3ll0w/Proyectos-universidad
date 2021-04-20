use BD20;
SELECT DISTINCT
    UPPER(art_nom) 'Articulo',
    COUNT(art_nom) 'Articulos mismo nombre',
    MAX(ART_PV) 'P venta Max',
    ROUND(AVG(art_pv), 2) 'P venta medio',
    MIN(art_pv) 'P venta minimo'
FROM
    articulos
WHERE
    art_peso BETWEEN 150 AND 200
GROUP BY art_nom
ORDER BY art_num ASC;