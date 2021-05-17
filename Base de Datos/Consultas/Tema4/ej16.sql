select 
	tda_pob,
    tda_ger,
    count(*) 'Total',/*Ya que cada tupla es una venta*/
    avg(VNT_CANT) 'Media ventas'
from ventas,tiendas
where vnt_tda = TDA_NUM
and TDA_POB not like 'Madrid%'
group by vnt_art
having count(*) > any /*Una vez cuento las ventas cuales son mas gradnes que madrid ??*/
(
	select count(*)
    from ventas,tiendas
    where tda_num=vnt_tda
    and tda_pob like 'Madrid%'
    group by tda_num /*Necesito agruparlos para contar cada una de las tiendas*/
) ;

/*
Funciones de grupo(sum,count) necesitan SIEMPRE de group by
Having ==> restricciones a las funciones de grupo (sum, count,...) 
*/