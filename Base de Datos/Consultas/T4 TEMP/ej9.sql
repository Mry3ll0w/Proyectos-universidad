/*
Listado de artículos vendidos por cada proveedor. El listado mostrará dos columnas: el
nombre del proveedor y la cantidad de ventas de los artículos de cada proveedor.
*/
use BD20;
select 
	prv_nom 'NOMBRE',
    sum(vnt_cant) 'Cantidad de ventas'
from 
	proveedores,ventas, articulos
where
	prv_num = art_prv
    and 
    art_num =vnt_clt
group by prv_num;