select * from tiendas 
where 
tda_num in 
( select vnt_tda from ventas where vnt_art in 
(select art_num from articulos where art_col like 'Azul') );