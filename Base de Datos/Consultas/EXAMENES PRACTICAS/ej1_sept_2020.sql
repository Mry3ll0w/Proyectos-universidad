/*
Listado que muestre los nombres de los clientes que no se repiten
(es decir, que no haya dos clientes con el mismo nombre contacto)
No deberan mostrarse los nombres que empiezan por A ni los que 
empiezan por B.
El listado debera ordenarse alfabeticamente por el nombre
*/
use BD20;
SELECT DISTINCT
    clt_nom
FROM
    clientes
WHERE
    clt_nom NOT LIKE 'A%'
        AND clt_nom NOT LIKE 'B%'
ORDER BY clt_nom ASC
;


