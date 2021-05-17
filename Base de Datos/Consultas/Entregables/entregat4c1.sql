/*Listado de artículos cuyo precio de venta esté comprendido entre 35 y 100 euros. 
El listado debe mostrar el código de artículo, el nombre del artículo y 
las unidades vendidas (por cantidad).
*/
SELECT 
    art_num 'Codigo',
    art_nom 'Nombre',
    vnt_cant 'Unidades Vendidas'
FROM
    articulos,
    ventas
WHERE
    art_num = vnt_art
        AND art_pv BETWEEN 35 AND 100
;