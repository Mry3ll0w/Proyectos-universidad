SELECT 
    *
FROM
    tiendas
WHERE
    tda_num IN (SELECT 
            vnt_tda
        FROM
            ventas
        WHERE
            vnt_cant = (SELECT 
                    MAX(vnt_cant)
                FROM
                    ventas));