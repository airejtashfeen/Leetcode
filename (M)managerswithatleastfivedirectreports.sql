# Write your MySQL query statement below
-- SELECT e1.name
-- FROM Employee e1
-- INNER JOIN Employee AS e2
-- ON e1.id=e2.managerId
-- GROUP BY e2.managerID
-- HAVING COUNT(e2.managerID)>=5

--This one's faster
# Write your MySQL query statement below
SELECT a.name
FROM Employee a
JOIN Employee b
ON a.id=b.managerId
GROUP BY b.managerID
HAVING COUNT(*)>=5
