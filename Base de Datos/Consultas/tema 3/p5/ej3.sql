select vnt_fch 'Fecha'
from ventas 
where VNT_ART  
in (select art_num from articulos where ART_NOM like 'impresora')
or
VNT_CLT in (select clt_num from clientes where CLT_POB like 'Madrid')
;