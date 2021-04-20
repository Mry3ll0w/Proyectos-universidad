
SELECT 
    ART_NOM 'Nombre',
    MAX(ART_PESO) 'Peso Máximo',
    AVG(ART_PC) 'Precio de Compra Medio',
    AVG(ART_PC) 'Precio de Venta Medio'
FROM
    articulos
WHERE
    ART_PESO IS NOT NULL
GROUP BY ART_NOM
HAVING AVG(ART_PV) > 19
ORDER BY ART_PESO DESC;

