select 
	tda_pob 'nombre',
	tda_num 'codigo'
from tiendas 
where TDA_NUM in 
	(select vnt_tda 
		from ventas
		where vnt_clt in (select clt_num from clientes 
							where CLT_POB like 'Madrid'));