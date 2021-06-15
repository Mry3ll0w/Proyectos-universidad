/*
Listado de proveedores que una aquellos que han vendido algún producto en enero
junto con aquellos de los que se ha vendido algún producto en febrero.
*/
select 
	*
from proveedores
where
	prv_num in
    (
		select art_prv
		from articulos
        where
			exists
		(
			select *
            from ventas
            where
				vnt_fch like "%01%"
                or
                exists
                (
					select *
					from ventas
					where
						vnt_fch like "%02%"
                )
        )
    )
group by prv_num;