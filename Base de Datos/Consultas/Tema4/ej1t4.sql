SELECT 
    art_nom 'Nombre Articulo',
    art_col 'Color',
    art_pc 'Precio Compra',
    prv_nom 'Nombre Proveedor'
FROM
    articulos,
    proveedores
WHERE
    art_num IN (SELECT 
            vnt_art
        FROM
            ventas)
        AND art_pc > 10
        AND prv_num = art_prv
ORDER BY art_nom;
;
