/*
Listado que muestre aquellos clientes que han realizado más de 2 compras y esté
ordenado de mayor a menor ventas realizadas. El listado deberá mostrar el número,
apellido y nombre del cliente, así como la cantidad de compras realizada.
*/
use BD20;
select 
	clt_num 'Numero Cliente',
    clt_apell 'Apellido',
    clt_nom 'Nombre',
    count(*) 'Ventas'

from clientes, ventas
where
	clt_num = vnt_clt
group by clt_num
having count(*)>2
order by count(*) desc /*De mayor a menor*/
;
    