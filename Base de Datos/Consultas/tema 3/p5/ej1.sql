SELECT 
    *
FROM
    articulos
WHERE
    art_peso < (SELECT 
            art_peso
        FROM
            articulos
        WHERE
            art_num = 2) order by art_peso asc;