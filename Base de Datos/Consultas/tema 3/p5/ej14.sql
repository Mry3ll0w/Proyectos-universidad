SELECT 
    *
FROM
    ventas v1
WHERE
    vnt_fch >= ALL (SELECT 
            vnt_fch
        FROM
            ventas v2
        WHERE
            v1.vnt_art = v2.vnt_art)
ORDER BY vnt_art ASC;