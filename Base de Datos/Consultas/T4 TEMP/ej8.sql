/*
Listado de ventas que muestre para cada color la cantidad de artículos vendidos de ese
color y la cantidad de artículos diferentes. Ordene la consulta por la segunda y tercera
columna de manera descendente.
*/
select 
	
	art_col 'Color',
    count(distinct(art_num)) 'Articulos diferentes'
    
from 
	articulos, ventas
where
	vnt_art = art_num
    and 
    art_col is not null
group by art_col
;