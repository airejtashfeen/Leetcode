SELECT p.product_name,
SUM(o.unit) AS unit

FROM Products p

JOIN 
Orders o

ON o.product_id= p.product_id

WHERE order_date BETWEEN '2020-02-01' AND '2020-02-29' 

GROUP BY product_name
HAVING
unit>=100 