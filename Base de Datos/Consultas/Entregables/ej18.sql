select 
	tiendas.*
from tiendas,clientes,ventas
where
	vnt_tda=tda_num
    and
    clt_pob not like 'Barcelona'
	and
    clt_pob not like 'Madrid'
    and 
    vnt_clt = CLT_NUM
group by tda_num
order by tda_num asc;