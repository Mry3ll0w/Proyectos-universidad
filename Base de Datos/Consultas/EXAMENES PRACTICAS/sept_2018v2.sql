/*
1)
Listado de ciclistas que pertenecen a algún equipo cuyo 
nombre de equipo contenga la palabra “mobile”. 
El listado debe mostrar el nombre del ciclista, el dorsal y el
equipo al que pertenece. 
Debe estar ordenado alfabéticamente por equipo en primer
lugar, y dentro de cada equipo, deberán ordenarse 
alfabéticamente por nombre de ciclistas.
*/
select 
	c.nombre 'Nombre',
    c.dorsal 'Dorsal',
    c.equipo 'Equipo'
from ciclista c
	where 
		exists
        (
        select *
			from Equipo
            where c.equipo = nomequipo
            and
            nomequipo like '%mobile%'
        )
	group by c.dorsal
	order by c.equipo,c.nombre;
    
/*
2)
Listado de ciclistas que han llevado el maillot rojo. 
Para cada ciclista deberá aparecer:
el nombre del ciclista, dorsal, equipo al que pertenece 
y el número de veces que ha llevado dicho maillot. 
Deberá ordenarse de mayor a menor según el
número de veces que llevaron el maillot rojo.
*/
select 
	c.nombre 'Nombre',
    c.dorsal 'Dorsal',
    c.equipo 'Equipo',
    count(*) 'Numero de veces maillot'
from 
	ciclicista c, maillot m,lleva l
    where
		c.dorsal in
        (
        select ciclista
			from Lleva
				where
					m.codigo = maillot				
		)
        and
        m.color = 'rojo'
        group by l.ciclista
        order by 4 desc
;

/*
4)
Listado de etapas en la que se muestre el número de puertos 
cuya categoría es “Primera” o “Segunda”. 
*/
select 
	e.numetapa'Etapa',
    e.kms'Distancia',
	e.salida'Salida',
    e.llegada'Pto Llegada',
    count(*)'Puertos cat 1 y 2'
from 
	etapa e, puerto p
	where
		e.numetapa =p.etapa
		and 
		p.categoria in ('1','2')
	group by p.etapa
;

/*
5. Listado de directores de equipo con menos de 5 victorias. 
Este listado no tendrá en cuenta las victorias de etapa de 
los ciclistas de nombre “Juan Pérez Casillas” ni las
de “Manuel Sánchez Smith”, pues fueron descalificados en 
el control antidoping. 
El listado deberá mostrar el 
nombre del director, el nombre 
del equipo y el número de victorias de etapa. 
Además, deberá ordenarse de mayor a menor número de
victorias. 
Si dos directores tienen el mismo número de victorias 
deberá ordenarse alfabéticamente por sus nombres.
*/
select
	eq.director 'Director',
    eq.nomequipo 'Nombre',
    count(e.ganador)'Numero Victorias etapa'
from 
	equipo eq, etapa e
    where
		not exists
        (
        select 
			* 
		from ciclista
			where
				nombre not in ('Manuel Sánchez Smith',
                'Juan Pérez Casillas')
                and equipo = nomequipo
		)
        group by eq.nomequipo
        having count(e.ganador)<5
        order by 3 desc,eq.director asc
;
    
/*
Mostrar nombre, edad y equipo del ciclista más joven en 
haber ganado una etapa en la vuelta.
*/
SELECT 
    c.nombre 'Nombre', c.edad 'Edad', c.equipo 'Equipo'
FROM
    ciclista c,
    etapa e
WHERE
    c.dorsal = e.ganador
        AND c.edad < ALL (
        SELECT 
            edad
        FROM
            ciclista
		)
;





