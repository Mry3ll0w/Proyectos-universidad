/*
Listado de artículos de color azul, rosa o verde junto con su peso. El listado debe
mostrar el número, nombre, color, obtenidos de la tabla artículos y el peso, obtenido a
partir de la clasificación de la tabla pesos. Por ejemplo, si un artículo pesa 10, su peso
será leve ya que está comprendido entre el peso_min (1) y el peso_max(100).
*/
select 
	art_num 'Numero',
    art_nom 'Nombre',
    peso_nom 'Color'
    
from 
	articulos,pesos
where 
	art_col = 'azul' or art_col = 'rosa' or art_col ='verde'
    and
    art_peso BETWEEN Peso_min AND Peso_max
group by art_num;