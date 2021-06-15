/*
Listado de artículos cuyo precio sea superior a 10 euros junto con el proveedor que lo
proporciona. El listado debe mostrar: nombre del artículo, color del artículo, precio de
compra y nombre del proveedor. El listado se debe ordenar alfabéticamente por nombre
del artículo.
*/
use BD20;
select 
	a.art_nom 'Nombre De articulos',
    a.art_col 'Color del articulo',
    a.art_pc  'Precio de compra',
    p.prv_nom 'Nombre de Proveedores'
from proveedores p, articulos a
where 
	a.art_pv >10 
    and 
    a.art_prv = p.prv_num
group by a.art_nom
;