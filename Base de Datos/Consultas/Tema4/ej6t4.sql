select 
	clt_num 'Numero',
    CLT_APELL 'Apellido',
    CLT_NOM 'Nombre',
    count(*) 'Cantidad de compras'
    
from clientes,ventas
where clt_num = vnt_clt
group by clt_num
having count(*)>2
;