SELECT 
    *
FROM
    clientes
WHERE
    clt_pob IN (SELECT 
            clt_pob
        FROM
            clientes
        WHERE
            clt_nom LIKE 'Pablo')
		AND clt_nom not like 'Pablo'
        And clt_pais = 'e'
        order by clt_num
;  