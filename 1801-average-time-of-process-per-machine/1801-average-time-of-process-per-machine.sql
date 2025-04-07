# Write your MySQL query statement below
select a1.machine_id, Round(Avg(a2.timestamp-a1.timestamp),3) As processing_time


from Activity a1
inner join Activity a2
on a2.process_id=a1.process_id
and a1.machine_id=a2.machine_id
and a2.timestamp>a1.timestamp
group by a1.machine_id;