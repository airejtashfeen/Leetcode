SELECT u.unique_id, e.name
FROM EmployeeUni u
RIGHT JOIN Employees e ON u.id = e.id;
