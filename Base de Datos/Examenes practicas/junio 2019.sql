/*
1)Listado de artículos publicados por María Pérez Montes. 

Para que un artículo se considere publicado debe 
haber sido revisado por dos autores.
*/
SELECT 
    *
FROM
    articulos
where
	authors_id =
    (
		select 
			a.id
		from authors a
        where 
			a.surname like 'Pérez Montes'
            and 
            a.name like 'María'
    )
    and 
	EXISTS
    (select 
		r.articles_id 
		from Revisions r
		group by r.articulos_id
		having count(*)>=2
	)
    
;


/*
Listado de artículos y autores por tema. 
El listado debe mostrar el nombre del tema, la
cantidad de artículos de ese tema, estén publicados o no, 
y la cantidad de autores que
han escrito artículos de ese tema.
*/

select 
	t.name,
    count(*)
    from
		articles a,Topics t
	left join Revisions
    on a.id = Revisions.articles_id
    ;
		
    




