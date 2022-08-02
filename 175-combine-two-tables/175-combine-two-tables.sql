# Write your MySQL query statement below

Select p.FirstName ,p.LastName, a.City,a.State from person p left join Address a on p.personId=a.personId
