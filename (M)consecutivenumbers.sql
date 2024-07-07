WITH cte AS (
    SELECT 
        num,
        LEAD(num, 1) OVER() AS num1,
        LEAD(num, 2) OVER() AS num2,
        id,
        LEAD(id,1) OVER() id1,
        LEAD(id,2) OVER() id2
    FROM 
        Logs
    ORDER BY id
)
SELECT DISTINCT 
    num AS ConsecutiveNums
FROM 
    cte
WHERE 
    num = num1
    AND num = num2
    AND id1=id+1 AND id2= id+2
