select * 
from articulos
where art_pc > any
(select art_pv from articulos 
	where ART_COL like 'malva');
