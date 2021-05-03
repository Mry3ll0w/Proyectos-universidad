SELECT DISTINCT t.tda_pob, COUNT(v.vnt_clt)
FROM tiendas t, ventas v 
WHERE t.tda_num=v.vnt_tda 
GROUP BY v.vnt_tda
ORDER BY 2 DESC;