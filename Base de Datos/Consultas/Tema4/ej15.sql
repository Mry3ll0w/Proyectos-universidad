use BD20;
SeLeCt 
    art_num, art_nom, vnt_fch, clt_num, clt_nom, clt_apell
FRoM
    articulos
        LEFT OuTER JOIN
    ventas ON art_num = vnt_Art
        LEFT OUTER JOIN
    clientes ON vnt_clt = clt_num
GROUP BY art_num
;
        