/*
1. Listado de artículos publicados por María Pérez Montes. 
Para que un artículo se considere publicado debe haber 
sido revisado por dos autores.
*/
SELECT 
    a.id, a.title, a.date 'fecha'
FROM
    Articles a
WHERE
    a.authors_id = (SELECT 
            au.id
        FROM
            authors au
        WHERE
            surname = 'Pérez Montes'
                AND au.name = 'Maria'
                AND a.id = (SELECT 
                    articles_id
                FROM revisions
                )
                group by articles_id
				HAVING COUNT(*) >= 2
				);
		

/*
2. Listado de artículos y autores por tema. El listado debe 
mostrar el nombre del tema, la cantidad de artículos de ese 
tema, estén publicados o no, y la cantidad de autores que
han escrito artículos de ese tema.
tema	||  count(*) 	||	autores	
*/
select 
	t.name 'Temas',
    count(ar.id) 'Articulos',
	count(distinct(ar.autores)) 'autores'
from 
	topics t, articles ar
    where
		ar.topics_id = t.id
	group by t.id
;

/*
 Listado de artículos que pertenecen a los temas “Videojuegos”, 
 “Móviles” o “Gamers”, y
 que están pendientes de ser publicados. 
 Un artículo está pendiente de ser publicado si aún no ha 
 sido revisado por 2 autores.
 
 titulo (ar) || Fecha || Tema || Autor (Nom +apell) 
*/
SELECT 
    ar.title 'Title',
    ar.date 'Fecha Publicacion',
    t.name 'Tema',
    CONCAT(au.name, ' ', au.surname) 'Autor'
FROM
    articles a,
    authors au,
    topic t
WHERE
    ar.topics_id = t.id
        AND t.name = 'videojuegos'
        OR t.name = 'moviles'
        OR t.name = 'gamers'
        AND EXISTS( 
        SELECT 
            *
        FROM
            revisions
        WHERE
            ar.id = articles_id
        GROUP BY articles_id
        HAVING COUNT(*) < 2
        )
;

/*
Listado de autores que pueden revisar un artículo sobre 
videojuegos. 
Para que un autor pueda revisar un artículo sobre videojuegos 
debe haber escrito antes al menos 3 artículos sobre el tema 
videojuegos. 
El listado deberá mostrar el número de artículos
escrito sobre videojuegos escritos por ese autor y 
deberá ordenarse descendentemente según el número de 
artículos escrito

*/

SELECT 
    au.surname 'Apellido',
    au.name 'Nombre',
    COUNT(a.id) 'Articulos'
FROM
    autores au,
    articulos a
WHERE
    EXISTS( SELECT 
            *
        FROM
            articulos,
            revisions r
        WHERE
            articulos.authors_id = au.id
                AND articulos.topics_id = (SELECT 
                    id
                FROM
                    topic
                WHERE
                    name = 'videojuegos')
                AND au.id = r.authors_id
        GROUP BY au.id
        HAVING COUNT(*) >= 3)
ORDER BY 3 DESC;
	
/*
5
Listado de autores que escriben artículos que traten sobre 
el machismo en los videojuegos. 
Un artículo trata sobre el machismo en los videojuegos si 
el artículo
pertenece al tema “Videojuegos” y en el título del artículo 
o en el texto se encuentran alguno de los siguientes términos: 
“machismo”, “sexismo” o “violencia de género”. El
listado deberá ordenarse por apellido y, en caso de mismo 
apellido, por nombre.

*/
select 
	au.id 'Id',
    au.surname 'surname',
    au.name 'name',
    au.email 'email'
from 
	authors au,articles ar
    where 
		ar.authors_id = au.id 
        and
        ar.topics_id =
        (
        select t.id from Topics t where t.name= 'Videojuegos'
        )
        and 
        ar.title like '%machismo%'
        or
        ar.text like '%machismo%'
        group by au.id 
        order by au.surname,au.name
        ;
        

