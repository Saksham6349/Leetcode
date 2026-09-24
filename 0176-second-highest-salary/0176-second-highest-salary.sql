# Write your MySQL query statement below
Select MAX(salary) as SecondHighestSalary
FROM Employee
where salary<(select MAX(salary) From Employee);
