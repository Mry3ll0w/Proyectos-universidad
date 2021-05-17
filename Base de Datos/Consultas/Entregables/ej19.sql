select 
	articulos.*,
    VNT_CANT 'Cantidad',
    vnt_fch 'Fecha adquisicion'
from articulos, ventas
where 
	vnt_art=art_num
	and
	vnt_fch between '2019-12-6' and '2020-01-06'
    ;