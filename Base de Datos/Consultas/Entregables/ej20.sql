select 
	clt_num 'Number',
    clt_nom 'Name',
    clt_apell 'Apellido',
    count(*) 'Number of times',
    round(ifnull(art_pv*vnt_cant,0),2)'total gastado'
from clientes
left outer join ventas on clt_num = vnt_clt
left outer join articulos on art_num=vnt_clt
group by vnt_clt,art_nom;
/*
Si se hace un outer join se debe hacer el resto para
verificar el prod natural etc
*/