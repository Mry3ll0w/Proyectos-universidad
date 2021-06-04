/*
1)
Mostrar un listado de todos los usuarios que pertenecen a un grupo
 y que tienen un correo electrónico de Gmail. 
De cada usuario del listado se deberá mostrar su nombre, 
apellidos, correo electrónico y el nombre del grupo al que pertenece. Un usuario 
aparecerá tantas veces como a grupos esté inscrito. El listado deberá ordenarse de 
manera ascendente por grupos.
*/

select 
	u.firstname 'Nombre',
    u.last_name 'Apellidos',
    tg.name 'Nombre Grupo'
    
from 
	user u , user_group ug, therapy_group tg
where 
	u.username like ug.username
    and 
    ug.group_name like tg.name
    and
    u.email like '%gmail%'
group by u.username
order by tg.name
;
	