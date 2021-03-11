select 
	tda_ger as "Gerente",
    TDA_POB as "Poblacion"
from tiendas
where 
tda_pob not like 'Paris' and
tda_pob not like 'Madrid-%' and 
tda_pob not like 'Lyon'
order by tda_ger;