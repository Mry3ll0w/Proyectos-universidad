select * from clientes
where clt_num in
(select vnt_clt from ventas
group by vnt_clt /*Para que sirve ?*/
having count(VNT_CLT)>3);