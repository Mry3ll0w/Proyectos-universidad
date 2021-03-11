SELECT 
    vnt_tda AS 'Tienda',
    vnt_art AS 'Articulo',
    vnt_cant AS 'Cantidad',
    vnt_fch AS 'FECHA'
FROM
    ventas
WHERE
    VNT_ART BETWEEN 12 AND 20
;