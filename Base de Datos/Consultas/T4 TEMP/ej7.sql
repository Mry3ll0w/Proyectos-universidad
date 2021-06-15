/*
Listado de tiendas junto con la cantidad de clientes distintos que han comprado en
dichas tiendas. El listado deberá mostrar dos columnas: población de la tienda
(tda_pob) y cantidad de clientes distintos (el código de los clientes en las ventas se
indica en la columna vnt_clt). El listado deberá ordenarse por la segunda columna de
manera descendente.
*/
select
	tda_pob 'Poblacion',
    count(distinct(vnt_clt)) 'Clientes Distintos'
from ventas,tiendas
where 
	vnt_tda = tda_num
group by 1 /*tda_pob*/
order by 2 desc
;
    