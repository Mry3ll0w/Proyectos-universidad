select 
	count(clt_num) as "Clientes",
    clt_pob as "poblacion"

from clientes
group by (CLT_POB) ## Para poder contar todas las poblaciones por separado
having count(clt_num)>1 #Sirve para restricciones de grupo count...
;