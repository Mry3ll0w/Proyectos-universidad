use BD20;
select * 
from articulos,ventas
where
	art_num = vnt_art
    and
    vnt_fch like '%-01-%'or vnt_fch like'%-02-%'
group by art_num;