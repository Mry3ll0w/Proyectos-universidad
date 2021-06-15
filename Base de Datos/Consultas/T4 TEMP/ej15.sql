/*
Listado que muestre las ventas de los artículos junto con 
que clientes lo compraron. 
Si un artículo no ha sido comprado, también deberá aparecer 
en el listado.
*/
use BD20;
select 
	*
from 
	ventas 
    left outer join articulos on 
    art_num = vnt_art
;
    