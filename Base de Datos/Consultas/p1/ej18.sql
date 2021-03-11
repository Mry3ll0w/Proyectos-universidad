select * from articulos 
where 
	art_nom in ("calendario","papel") AND
    art_pv > 2*art_pc
;