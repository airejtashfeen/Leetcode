SELECT customer_id, COUNT(*) AS count_no_trans 
from Visits 
WHERE visit_id NOT IN (SELECT visit_id FROM Transactions)
GROUP BY customer_id; 