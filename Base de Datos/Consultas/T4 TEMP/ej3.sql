/*
Listado de clientes que son de la misma población que el cliente número 5. El listado
deberá mostrar todas las columnas de la tabla clientes y no deberá listar el registro para
el cliente número 5.
*/

select 
	clt_nom,clt_pob
    
from clientes
where
	clt_pob =
    (
		select clt_pob 
        from clientes
        where clt_num=5
    )
    and clt_num!=5
	
;