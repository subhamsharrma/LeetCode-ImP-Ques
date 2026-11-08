SELECT alle2.name as Employee
FROM employee e1
INNER JOIN employee alle2 ON e1.id = alle2.managerID
WHERE
e1.salary < alle2.salary