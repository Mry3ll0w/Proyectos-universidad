select * from clientes
where 
	CLT_APELL like "Du%t" AND 
    character_length(CLT_APELL)=7;