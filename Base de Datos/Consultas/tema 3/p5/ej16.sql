SELECT 
    distinct(vnt_art)
FROM
    ventas
WHERE
    vnt_clt IN (SELECT 
            clt_num
        FROM
            clientes
        WHERE
            clt_pob NOT LIKE 'Madrid');