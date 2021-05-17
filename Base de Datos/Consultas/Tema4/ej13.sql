select prv_num
from proveedores
where prv_num in
(
select art_prv from 
	ventas, articulos
    where art_num = VNT_ART
    and
    vnt_fch like '%-02%'
)
and prv_num in
(
	select art_prv
    from ventas, articulos
    where art_num = VNT_ART
    and
    vnt_fch like '%-01%'
)
group by prv_num;