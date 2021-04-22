use BD20;
select 
	art_col 'Color', /*Falta sustituir null*/ 
	count(*) 'Cantidad'
    
from articulos 
where art_num in
	(select vnt_art 
			from ventas 
            where vnt_fch  
            between "2021-1-1" and "2021-12-31"  
            order by vnt_cant asc
            )

group by art_col;