select * from clientes
where 
clt_nom like 'J%'
and clt_apell not like '%z'
or CLT_POB like 'Madrid'
or CLT_POB like 'Barcelona'
or clt_pob like 'Valencia' 
or clt_pob like 'Pamplona' 
or clt_num between 1 and 10;