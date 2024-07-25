SELECT s.id, 
s.visit_date, 
s.people

FROM Stadium s, Stadium t, Stadium p

WHERE (
    (s.id+1= t.id AND s.id+2 = p.id)
 OR (s.id-1= t.id AND s.id-2= p.id)
 OR (s.id-1= t.id AND s.id+1= p.id))

 AND s.people>=100 AND t.people>=100 AND p.people>=100

GROUP BY s.id
ORDER BY id