SELECT 
    *
FROM
    articulos
WHERE
    art_pv > (2 * (ART_PC))
ORDER BY (art_pv) ASC
;