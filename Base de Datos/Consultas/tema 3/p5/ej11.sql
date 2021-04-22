select * from articulos 
where art_peso > any
(select art_peso from articulos
	where art_col like "morado"
);