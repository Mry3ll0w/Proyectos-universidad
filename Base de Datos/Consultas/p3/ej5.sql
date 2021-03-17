SELECT 
    emp_nombre
FROM
    empleados
WHERE
	(curdate()-date(emp_nacimiento))>40
    ;