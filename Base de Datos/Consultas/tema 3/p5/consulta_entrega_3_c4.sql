select 
	count(*) 'N clientes',
    concat(clt_pob ,"(",upper(clt_pais),")") as ORIGEN 

from clientes
group by clt_pob
order by clt_pais;
