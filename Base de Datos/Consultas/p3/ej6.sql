SELECT 
    CONCAT(clt_nom, ' ', clt_apell) AS 'Nombre Completo',
    UPPER(CLT_PAIS) AS 'Pais'
FROM
    clientes;