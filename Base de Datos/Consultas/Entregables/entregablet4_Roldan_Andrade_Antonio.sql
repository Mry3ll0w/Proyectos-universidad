use BD20;
/*
	Listado de artículos, de los proveedores 3 y 5, que no se han comprado nunca 
	por clientes de Barcelona y Pamplona. 
	El listado debe mostrar el número de artículo, nombre y 
	precio de venta y los datos del proveedor.
*/
SELECT 
    art_num 'Numero Del Articulo',
    art_nom 'Nombre',
    art_pv 'Precio De venta',
    proveedores.*
FROM
    proveedores,
    articulos,
    clientes,
    ventas
WHERE
    art_num = vnt_art AND clt_num = vnt_clt
        AND prv_num = 3
        OR prv_num = 5
        AND clt_pob NOT LIKE 'Barcelona'
        AND clt_pob NOT LIKE 'Pamplona'
GROUP BY art_num
;