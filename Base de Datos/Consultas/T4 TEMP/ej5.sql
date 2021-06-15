/*
Listado que muestre las ventas que los clientes de Barcelona han hecho en las tiendas
que no son de Barcelona. El listado deberá mostrar el nombre, apellidos y población del
cliente, la población de la tienda y la fecha de las ventas.
*/
SELECT 
    clt_nom 'Nombre', clt_apell 'Apellidos', clt_pob 'Poblacion'
FROM
    ventas,
    tiendas,
    clientes
WHERE
    clt_pob = 'Barcelona'
        AND tda_pob != 'Barcelona'
        AND tda_num = vnt_tda
        AND vnt_clt = clt_num
GROUP BY clt_num;