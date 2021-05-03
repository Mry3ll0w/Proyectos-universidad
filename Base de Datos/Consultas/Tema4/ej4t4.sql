SELECT 
    art_num, art_nom, art_col, peso_nom
FROM
    pesos,
    articulos
WHERE
    art_peso BETWEEN Peso_min AND Peso_max
    and
    art_col like 'rosa' or 
    art_col like 'azul' or 
    art_col like 'verde' 
;