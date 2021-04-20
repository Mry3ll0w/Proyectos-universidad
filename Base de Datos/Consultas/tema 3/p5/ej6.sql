SELECT 
    *
FROM
    articulos
WHERE
    art_pv > ALL (SELECT 
            art_pv
        FROM
            articulos
        WHERE
            art_col LIKE 'blanco');