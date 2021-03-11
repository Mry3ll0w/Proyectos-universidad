select * from articulos
where
	art_nom like 'b%' 
    or art_nom like 'i%'
    AND
	art_col is not null
    AND art_peso is not null
    order by (art_pc)desc;
	