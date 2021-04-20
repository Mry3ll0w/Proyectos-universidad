select 
	count(VNT_cant) as "Ventas",
    VNT_FCH as "Fecha"
from ventas group by (vnt_fch);