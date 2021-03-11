select distinct vnt_fch from ventas
where VNT_ART = 9
order by(date(vnt_fch));