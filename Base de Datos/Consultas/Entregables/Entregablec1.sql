select 
    emp_id AS 'ID',
    emp_nombre AS 'Nombre',
    emp_apellidos AS 'Apellidos',
    emp_poblacion AS 'Poblacion'
FROM
    empleados
WHERE
    emp_nacimiento  BETWEEN 1970 AND 1995
	and
    emp_provincia not like null
    and 
    emp_apellidos like 'Z%'
;