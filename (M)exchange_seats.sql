SELECT 
    CASE 
        WHEN id = max_id AND id % 2 != 0 THEN id
        WHEN id % 2 = 0 THEN id - 1
        WHEN id % 2 != 0 THEN id + 1
    END AS id,
    student
FROM (
    SELECT 
        id, 
        student,
        MAX(id) OVER () AS max_id
    FROM Seat
) AS subquery
ORDER BY id;
