# Write your MySQL query statement below
SELECT st.student_id, st.student_name ,sb.subject_name,
COUNT(e.subject_name) as attended_exams
FROM Students st
CROSS JOIN Subjects sb
LEFT JOIN Examinations e
ON st.student_id=e.student_id and sb.subject_name=e.subject_name
GROUP BY st.student_id,st.student_name ,sb.subject_name
order by st.student_id, sb.subject_name
