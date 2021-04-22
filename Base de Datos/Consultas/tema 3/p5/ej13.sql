select * from clientes
where CLT_POB like
(select clt_pob from clientes
	where clt_num = 24 )
AND clt_pais like (select clt_pais from clientes where clt_num=24)
;