select tda_num from tiendas
where tda_num in (select vnt_tda from ventas);