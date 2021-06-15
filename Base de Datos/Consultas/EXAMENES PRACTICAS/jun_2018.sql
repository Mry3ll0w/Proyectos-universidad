/*
1
Listado que muestre los profesores que han dado clase 
al estudiante con DNI '31442155K'. 
Muestre todos los atributos de cada profesor.
*/
select 
	p.*
from 
	profesores p, asignaturas a, matriculas m, estudiantes e
	where
		p.pro_dni = a.asi_profesor
        and
        a.asi_id = m.mat_asignatura
        and
		m.mat_estudiantes =e.est_id
        and
        e.est_dni = '31442155K'
;

/*
2
Listado de estudiantes del curso actual que no están 
matriculados en la asignatura de Bases de Datos. 
El listado debe mostrar el dni, nombre y apellidos de los
estudiantes, y debe estar ordenados por apellidos, nombre y DNI. El curso actual se
almacena como ‘201718
*/
select 
	e.est_dni 'DNI',
    e.est_nombre 'Nombre',
    e.est_apellidos 'Apellidos'
from 
	estudiantes e, matriculas m,asignaturas a
    where
		m.mat_estudiante = e.est_id
        and
		m.mat_asignatura = a.asi_id
        and
        a.asi_nombre <> 'Base de la Buenisima data'
        and m.mat_curso like '201718'
;
    
/*
3
Se desean obtener un listado resumen de las asignaturas 
matriculadas por el estudiante con DNI 31442155K. 
El listado deberá mostrar tres columnas: 
nombre de asignatura, número de veces que se ha matriculado 
en esa asignatura y máxima nota en acta para dicha asignatura. 
El listado deberá ordenarse con respecto al número de 
matrículas por asignatura (de mayor a menor).
*/
 select 
	a.asi_nombre 'Nombre asignatura',
    count(*) 'N veces que te roban',
    max(m.mat_nota_acta) 'Maxima nota (MD MP AEED POO EDNLx4)'
    
from 
	profesores p, asignaturas a, matriculas m, estudiantes e
	where
		p.pro_dni = a.asi_profesor
        and
        a.asi_id = m.mat_asignatura
        and
		m.mat_estudiantes =e.est_id
        and
        e.est_dni = '31442155K'
        group by a.asi_id
        order by 2 desc
;   

/*
4
Listado de profesores que imparten clases 
en asignaturas de titulaciones de cualquier Ingeniería 
(por ejemplo, Grado en Ingeniería Informática, Grado en
Ingeniería Industrial, etc). 
En el listado deberá aparecer el nombre y apellidos del
profesor, la titulación en la que da clase y la asignatura. 
Un profesor deberá aparecer en listado tantas veces 
como asignaturas imparta.
*/
select 
	p.nombre 'Nombre',
    p.apellidos 'Apellidos',
    a.asi_titulacion 'Titulacion Impartida',
    a.asi_nombre 'Asignatura Impartida'
from 
    profesores p, asignaturas a
    where
		p.pro_id = a.asi_profesor
        and
        a.asi_titulacion like '%ingenieria%'
group by a.asi_id 
;

/*
5
Se desea obtener un listado que muestre las ciudades en las 
que hay menos matriculados en las titulaciones que ofrece 
la universidad. 
Para ello, se nos pide un listado que recoja para el último 
curso (‘201718’) el número de estudiantes que hay
para cada titulación en cada ciudad. 
Deben aparecer las ciudades con menos de 20 estudiantes y 
el listado se debe ordenar de menor a mayor número de 
estudiantes.
Un ejemplo de resultado que debe generar su consulta 
sería el siguiente:
*/
select 
	e.est_ciudad'Poblacion',
    a.asi_titulacion'Titulacion',
    count(e.est_id)'Estudiantes(numero)'
from 
	estudiantes e, asignatura a, matricula m
    where
		e.est_id = m.mat_estudiante
		AnD
        m.mat_asignatura = a.asi_id
        and
		m.mat_curso = '201718'
grOuP bY e.est_ciudad
havIng 3 < 20 
order by 3
;




