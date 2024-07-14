SELECT 
    u.name,
    SUM(t.amount) AS balance
FROM 
    Users u
JOIN 
    Transactions t ON t.account = u.account 
GROUP BY 
    u.name
HAVING 
    balance > 10000;
