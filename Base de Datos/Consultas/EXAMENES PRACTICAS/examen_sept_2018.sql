/*
3)
Realice una consulta que devuelva la siguiente información: 
Número de etapas de la vuelta ciclista, distancia que deben 
recorrer todos los ciclistas que completen todas
las etapas y número diferentes de ganadores de etapa que ha habido en la vuelta
ciclista.
*/

select 
	num_etapa 'Numero Etapa',
	sum(kms)'Kilometros a recorrer',
    count(distinct(ganador)) 'número diferentes de ganadores'
from 
	Etapa 
    where
		ganador = 
        (
			select 
				dorsal
			from ciclistas
        )
;

/*
Listado de etapas en la que se muestre el número de puertos 
cuya categoría es
“Primera” o “Segunda”. 
Para cada registro deberá mostrarse la información tal y
como se muestra en el siguiente ejemplo:
*/
select
	e.numetapa 'Etapa',
    e.kms 'Distincia',
    e.salida 'Salida',
    e.llegada 'Llegada',
    count(*) 'Puertos de categoria 1 y 2'
    
from 
    Etapa e, puertos p
	where
		 e.numetapa = p.etapa
         and
         p.categoria = 'Primera' 
         or 
         p.categoria ='Segunda'
;

/*
Listado de directores de equipo con menos de 5 victorias. 
Este listado no tendrá en cuenta las victorias de etapa 
de los ciclistas de nombre “Juan Pérez Casillas” ni las
de “Manuel Sánchez Smith”, pues fueron descalificados en 
el control antidoping. 
El listado deberá mostrar el nombre del director, el nombre 
del equipo y el número de victorias de etapa. 
Además, deberá ordenarse de mayor a menor número de victorias. 
Si dos directores tienen el mismo número de victorias deberá 
ordenarse alfabéticamente por sus nombres.
*/
select 
	director 'Dire',
    nomequipo 'Rodaje de Campeones',
    count(*) 'Ere el mejor x veces'
from
	Equipo 
	where
		nomequipo = 
        (
			select 
				equipo
			from 
            Ciclista
				where 
					nombre <> 'Juan Pérez Casillas'
                    and
                    nombre <> 'Villano Fitness'
                    dorsal =
                    (
                    select 
						ganador
						from etapa
                    )
        )
group by nomequipo
order by 3 desc
;

/*
6)Mostrar nombre, edad y equipo del ciclista más joven en 
haber ganado una etapa en la vuelta.
*/
select 
	nombre,
    edad,
    equipo
    
from ciclistas
	where
		dorsal = 
        (
			select ganador from etapa
        )
        and
        edad < All(select edad from cicliistas)
;

		