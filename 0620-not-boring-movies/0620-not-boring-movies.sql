# Write your MySQL query statement below
SELECT * FROM cinema 
WHERE id % 2 = 1 AND description != 'BORING'
ORDER BY rating DESC;