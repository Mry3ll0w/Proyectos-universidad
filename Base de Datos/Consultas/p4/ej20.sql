select 
	art_prv 'Proveedor',
    art_col,
    count(ART_COL) 'Cantidad',
    round(avg(art_pc),2) 'Media'
from articulos
where 
	ART_COL not in ('morado','negro')
group by ART_pc,art_col 
order by art_pc desc; 