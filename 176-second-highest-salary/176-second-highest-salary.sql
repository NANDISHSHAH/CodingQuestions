# Write your MySQL query statement below
Select Max(Salary) SecondHighestSalary from Employee where Salary<(Select Max(Salary) from employee)