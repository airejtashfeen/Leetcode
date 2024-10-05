/* Write your T-SQL query statement below */
SELECT TOP 1 person_name
FROM
(
    SELECT person_name,
    turn,
    SUM(weight) OVER (ORDER BY turn) AS calc
    FROM Queue 
) q
WHERE calc<=1000
ORDER BY turn DESC
