/*
Listado de clientes o VNT_CLT que han comprado en más de 
dos ocasiones. El listado debe mostrar, al menos en tres 
columnas, la siguiente información en columnas diferentes: 
identificador del cliente (Id. Cliente) y 
total de artículos comprados (Total de Artículos Comprados) 
en cada tienda (Id. Tienda). 
Las columnas deben tener el nombre indicado entre paréntesis. 
El listado debe mostrarse ordenado ascendentemente por
 Id. Cliente.
*/ 

SELECT 
    vnt_clt 'id cliente',
    vnt_tda 'id tienda',
    SUM(vnt_cant) 'Total Compras'
FROM
    ventas
GROUP BY vnt_clt
HAVING COUNT(vnt_clt) > 2
ORDER BY vnt_clt ASC
;