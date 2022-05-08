# Write your MySQL query statement below
SELECT p.FirstName, p.LastName, a.City, a.State
From person p
LEFT JOIN ADDRESS a
on p.PersonId=a.PersonId;