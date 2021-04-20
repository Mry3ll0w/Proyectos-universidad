select 
	sum(VNT_CANT) 'ventas',##Suma la cantidad de articulos vendido
    VNT_tda 'Tienda',## muestra codigo articulo
    count(vnt_Art) 'numero ventas por articulo' ## Cuenta el numero de ventas (1 entrada = 1 venta)
from ventas
where VNT_TDA between 10 and 20
group by VNT_TDA;