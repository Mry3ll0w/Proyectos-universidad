select 
	clientes.*
from clientes,ventas,articulos,proveedores
where
	clt_num=vnt_clt
    and
    clt_pob like 'Madrid%'
	and
    art_num = VNT_ART
    and
    art_prv =PRV_NUM
    and 
    prv_nom like 'electrolamp'
;