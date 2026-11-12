# Write your MySQL query statement below
SELECT d.name AS Department, 
       er.name AS Employee, 
       er.salary AS Salary
FROM Employee er
JOIN Department d ON er.departmentId = d.id
WHERE er.salary = (
    SELECT MAX(salary)
    FROM Employee
    WHERE departmentId = er.departmentId
);
