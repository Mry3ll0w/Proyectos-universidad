select 
	count(CLT_NOM) as 'n clientes',
	clt_pais,
    clt_pob
from clientes
group by CLT_PAIS,CLT_POB;
