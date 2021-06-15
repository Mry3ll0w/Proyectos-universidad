/*
11. Listado de artículos que se han vendido tanto en enero como en febrero
*/
use BD20;
SELECT 
    *
FROM
    articulos
WHERE
    art_num IN (SELECT 
            vnt_art
        FROM
            ventas
        WHERE
            vnt_fch LIKE '%-01%'
                OR vnt_fch LIKE '%-02%')
GROUP BY art_num;

