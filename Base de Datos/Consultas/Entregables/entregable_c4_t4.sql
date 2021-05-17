/*
Listado de clientes que han comprado en las tiendas de 
Madrid-centro, Barcelona y Pamplona. 
El listado mostrará la siguiente información: 
nombre, apellidos y población del cliente, número de tienda 
en la que ha comprado y población, cantidad de productos 
comprados en cada tienda.
*/
select 
	clt_nom 'Nombre',
    clt_apell 'Apellido',
    clt_pob 'Poblacion',
    tda_num 'Num tienda',
    vnt_cant 'Cantidad'
from 
	clientes,articulos,tiendas,ventas
    where 
		clt_num = vnt_clt
        and 
        vnt_tda = tda_num
        and 
        tda_pob like 'Madrid-centro' 
        or 
        tda_pob like 'Barcelona'
        or 
        tda_pob like 'Pamplona'
group by vnt_tda;