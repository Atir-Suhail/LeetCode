# Write your MySQL query statement below

SELECT e.name,b.bonus
from Employee e
LEFT JOIN bonus b
ON e.empId=b.empId
where b.bonus is null or b.bonus<1000;

