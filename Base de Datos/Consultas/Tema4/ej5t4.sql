select 
	clt_nom 'Nombre',clt_apell 'Apellido',
    clt_pob 'Poblacion Cliente', tda_pob 'Poblacion Tiendas'
from clientes,tiendas
where
	tda_pob not like 'Barcelona'
    and 
    clt_pob like 'Barcelona'
;