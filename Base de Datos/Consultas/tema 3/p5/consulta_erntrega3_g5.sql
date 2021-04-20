select 
	count(*) 'Numero clientes',
    clt_pob 'Poblacion'
from clientes
group by clt_pob
having count(clt_pob)>=3
order by clt_pob asc
;