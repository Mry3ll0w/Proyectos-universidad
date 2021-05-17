select 
	clientes.clt_num 'cliente', /*clt num de clientes*/
    ifnull(sum(vnt_cant),0) 'Cantidad' /*Si el clt es null cant =0*/
from clientes left outer join ventas on clt_num =vnt_clt
group by clt_num;