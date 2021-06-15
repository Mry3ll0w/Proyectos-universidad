/*
Listado de tiendas que han vendido en febrero menos las tiendas que han vendido en
enero. Ordenado por código de tienda

*/
select 
	t1.*
from tiendas t1
where
	t1.TDA_NUM=
    (
		select vnt_tda
        from ventas
        where
			vnt_fch like '%02%'
			and
            vnt_fch not like '%02%'
	)
group by tda_num; /*TAO MAL Y NO SE PORQUE*/
/*CORRECTA*/
select tda_num
from tiendas where 
tda_num in
(select vnt_tda 
	from ventas
    where vnt_fch like '%-02%')
    and tda_num not in
    (select vnt_tda
    from ventas
    where vnt_fch like '%-01%')
group by tda_num;