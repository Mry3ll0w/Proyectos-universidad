SELECT 
    prv_num
FROM
    proveedores
WHERE
    prv_num IN (SELECT 
            art_prv
        FROM
            articulos);