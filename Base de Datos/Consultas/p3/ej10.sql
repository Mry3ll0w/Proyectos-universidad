select 
	tda_num,
    tda_pob,
    substring(tda_ger,charindex(','),length(tda_ger))
from 
	tiendas;