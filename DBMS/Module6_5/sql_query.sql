use dummydb;
select *from employees where salary> (select salary from employees where employee_id=101);
select salary from employees where employee_id=101;
select start_date as Shoro from job_history;

select distinct *from employees order by salary desc limit 1 offset 3;

with third_max as (select distinct salary as sa from employees where salary = (select max(salary) from employees where salary <(select max(salary) from employees where salary <(select max(salary) from employees))))
select *from employees where salary = (select sa from third_max);
select distinct *from employees where salary = (select min(salary) from employees where salary > (select min(salary) from employees where salary>(select min(salary) from employees)));

select distinct*from employees order by salary asc limit 1 offset 3;
select hire_date from employees where first_name='Steven' limit 1;
select *from employees where hire_date > (select hire_date from employees where first_name='Steven' limit 1 offset 1);


with em as (select * from employees where employee_id=101)
select *from employees where salary < (select salary from em);
select salary from em;
select salary from em;