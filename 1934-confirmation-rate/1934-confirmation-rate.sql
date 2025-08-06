# Write your MySQL query statement below
Select Signups.user_id, Round(
     ifnull

(Sum( Case  WHEN confirmations.action='confirmed' THEN 1 else 0 END) / Count(confirmations.user_id),0),2) As confirmation_rate
from signups 

left join  confirmations
on signups.user_id=confirmations.user_id
GROUP BY Signups.user_id;