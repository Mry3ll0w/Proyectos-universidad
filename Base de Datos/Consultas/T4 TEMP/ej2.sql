/*
Listado de tiendas junto con las ventas que han hecho en febrero de 2020. El listado
debe mostrar todas columnas de la tabla tiendas con la fecha de cada venta. El listado
deberá ordenarse por fecha de venta de manera descendente y por nombre de gerente
de la tienda alfabéticamente cuando la fecha coincida.
*/
select
	t.tda_num,
	v.*
from ventas v,tiendas t
where
	v.vnt_tda = t.tda_num
    and
    v.vnt_fch like '2020-02%'
    order by v.vnt_fch,t.tda_ger
;