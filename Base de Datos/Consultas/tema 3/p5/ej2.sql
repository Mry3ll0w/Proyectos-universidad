select 
	prv_nom 'nombre',
	prv_num 'codigo'
from proveedores
where prv_num in (select ART_PRV from articulos);