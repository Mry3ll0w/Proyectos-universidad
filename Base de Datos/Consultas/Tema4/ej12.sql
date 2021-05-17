select tda_num
from tiendas where 
tda_num in
(select vnt_tda 
	from ventas
    where vnt_fch like '%-02%')
    and tda_num not in
    (select vnt_tda
    from ventas
    where vnt_fch like '%-01%')
group by tda_num;