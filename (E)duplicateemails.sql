SELECT p1.email AS Email 
FROM Person p1 
GROUP BY email
HAVING COUNT(*)>1