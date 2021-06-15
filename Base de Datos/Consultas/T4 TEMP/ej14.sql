/*
Listado de que muestre la cantidad de artículos comprada por cada cliente. La cantidad
de artículos es la suma de los vnt_can de las ventas a cada cliente. Si un cliente no ha
comprado ningún artículo también deberá aparecer en el listado. En este caso, deberá
aparecer un 0 en la cantidad comprada.
*/
SELECT 
	concat(clt_nom," ",clt_apell) "Nombre Cliente",
    ifnull(SUM(vnt_cant),0) 'Cantidad de articulos'
FROM
    ventas
        LEFT OUTER JOIN
    clientes ON vnt_clt = clT_NuM
group by vNt_clt
order by 2;
    
