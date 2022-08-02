# Write your MySQL query statement below
Select score ,DENSE_RANK() OVER (order by Score Desc) AS "RANK" FROM Scores;