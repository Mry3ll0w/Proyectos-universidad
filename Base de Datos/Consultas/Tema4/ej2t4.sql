SELECT 
    *, count(*) 'total ventas'
FROM
    tiendas,
    ventas
WHERE
    TDA_NUM =vnt_tda
    and 
    vnt_fch like '2020-02-%'
ORDER BY tda_ger
;