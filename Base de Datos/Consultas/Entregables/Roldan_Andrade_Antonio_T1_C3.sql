use BD20;
SELECT 
    emp_id AS 'ID',
    emp_nombre AS 'Nombre',
    emp_apellidos AS 'Apellidos',
    emp_poblacion AS 'Poblacion'
FROM
    empleados
WHERE
   YEAR (emp_nacimiento) NOT BETWEEN 1950 AND 1959
        AND emp_direccion1 LIKE 'The%'
        AND emp_nombre LIKE 'Parrot'
        OR emp_apellidos LIKE 'Fred'
;
/* OUTPUT
ID = 6, Nombre = Canary, Apellidos = Fred y Poblacion=Some Town
*/