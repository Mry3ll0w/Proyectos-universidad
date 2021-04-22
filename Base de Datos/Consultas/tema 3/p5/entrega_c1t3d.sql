SELECT 
	clt_num 'Codigo',
    clt_nom 'Nombre',
    clt_apell 'Apellido',
    count(*)'Compras'
FROM
    clientes
WHERE
    clt_num IN (SELECT 
            vnt_clt
        FROM
            ventas
        WHERE
            vnt_fch BETWEEN '2021-4-4' AND '2021-4-15'
		group by vnt_clt ## hay que agruparlo por cliente ya que es n ventas por cliente
        having count(*)>1
        )
group by clt_num
ORDER BY clt_num DESC
;