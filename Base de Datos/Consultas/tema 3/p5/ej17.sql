SELECT 
    *
FROM
    ventas
WHERE
    vnt_clt IN (SELECT 
            clt_num
        FROM
            clientes
        WHERE
            clt_pob LIKE 'Madrid' or 'Barcelona')
            group by vnt_clt having count(vnt_clt)<2 ;