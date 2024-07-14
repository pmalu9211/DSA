CREATE DATABASE student;

CREATE DATABASE IF NOT EXISTS hello;

DROP DATABASE hello;

USE student;

CREATE TABLE IF NOT EXISTS info(
    name VARCHAR(20) NOT NULL,
    rollno INT PRIMARY KEY
);

INSERT INTO
    info(name, rollno)
VALUES
    ("Pratham", 111);

INSERT INTO
    info(name, rollno)
VALUES
    ("Aryan", 22),
    ("ass", 2),
    ("nigga", 33);

SELECT
    *
FROM
    info;

#constrains
CREATE TABLE dumb(
    class varchar(30) default "pratham",
    division INT,
    PRIMARY KEY(class, division)
);

create table bank(name varchar (30), age int check (age >= 18));

insert into
    bank
values
    ("malu", 14);

create table anotherTable(
    name varchar(20),
    age int,
    constraint check_name check (
        age >= 18
        and name = "pratham"
    )
);

INSERT INTO
    dumb
VALUES
    ("pratham", 11);

CREATE TABLE test(
    id INT,
    FOREIGN KEY (id) REFERENCES info(rollno)
);

#SELECT statement 
SELECT
    name
from
    info;

#where clause 
SELECT
    *
FROM
    info
WHERE
    rollno <= 33
    AND name = "GOOGLE";

SELECT
    *
FROM
    info
WHERE
    rollno BETWEEN 11
    AND 33;

SELECT
    *
FROM
    info
WHERE
    name in ("pratham", "Aryan");

SELECT
    *
FROM
    info
WHERE
    name not in ("pratham", "Aryan")
LIMIT
    2;

#makes a limit to the no of results
SELECT
    *
FROM
    info
ORDER BY
    name ASC;

#aggregate function takes many values and send back one  func(coloumn_name)
SELECT
    MAX(rollno)
from
    info;

select
    avg(rollno)
from
    info;

select
    sum(rollno)
from
    info;

select
    count(name)
from
    info
where
    rollno > 22;

#GROUP BY selected_coloumn
select
    name,
    count(rollno)
from
    info
group by
    name;

#having clause 
select
    name,
    avg(rollno)
from
    info
group by
    name
having
    count(name) = 2;

set
    SQL_SAFE_UPDATES = 0;

#DML queries 
#update 
UPDATE
    info
set
    name = "anjali"
where
    name = "pratham";

#delete
DELETE FROM
    info
where
    name = "anjali";

#cascade in FK
create table department(
    id int primary key,
    name varchar(20) default "it"
);

create table teacher(
    id int primary key,
    dep_id INT,
    name varchar(20),
    foreign key (dep_id) references department(id) on update cascade on delete cascade
);

insert into
    department
values
    (101, "it"),
    (102, "comp");

insert into
    teacher
values
    (1001, 102, "pratham");

insert into
    teacher
values
    (1002, 103, "pratham");

#can't add 103 as it dosn't exists
select
    *
from
    teacher;

update
    department #this updates the value in the techer as well
set
    id = 109
where
    id = 102;

select
    *
from
    teacher;

###table relateed queries
##alter
#add column 
alter table
    department
add
    column location varchar(20);

alter table
    department drop column location;

#rename
alter table
    tasty rename to test;

#modify
alter table
    department
modify
    column location varchar(40);

#change
alter table
    department change location current_location varchar(200);

#renames the column and changes the datatype
###################################################
#truncate 
truncate table test;

#delete all the data inside the table
###################################################
##JOIN 
-- Create Students table
CREATE TABLE Students (
    Student_ID INT AUTO_INCREMENT PRIMARY KEY,
    Student_Name VARCHAR(50),
    Department VARCHAR(50)
);

-- Insert data into Students table
INSERT INTO
    Students (Student_Name, Department)
VALUES
    ('Alice', 'Science'),
    ('Bob', 'Arts'),
    ('Charlie', 'Science'),
    ('David', 'Science'),
    ('Emily', 'Arts');

truncate table Students;

-- Create Courses table
CREATE TABLE Courses (
    Course_ID INT AUTO_INCREMENT PRIMARY KEY,
    Course_Name VARCHAR(50),
    Department VARCHAR(50)
);

-- Insert data into Courses table
INSERT INTO
    Courses (Course_Name, Department)
VALUES
    ('Math', 'Science'),
    -- ('Physics', 'Science'),
    -- ('History', 'Arts'),
    -- ('Literature', 'Arts'),
    -- ('Chemistry', 'Science'),
    ('Computer Science', 'Engineering'),
    ('Electronics', "bxe");

truncate table Courses;

##JOIN 
#Inner join 
select
    *
from
    Students as s
    inner join Courses as c on s.Department = c.Department;

#left join
select
    *
from
    Students as s
    left join Courses as c on s.Department = c.Department;

#right join
select
    *
from
    Students as s
    right join Courses as c on s.Department = c.Department;

#complete join
select
    *
from
    Students as s
    right join Courses as c on s.Department = c.Department
union
select
    *
from
    Students as s
    left join Courses as c on s.Department = c.Department;

#only values of pure students
select
    *
from
    Students as s
    left join Courses as c on s.Department = c.Department
where
    c.Course_ID is null;

#only values of pure courses
select
    *
from
    students
    right join courses on students.department = courses.department
where
    students.Student_ID is null;

#values of both both individuals nothing common
select
    *
from
    students s
    left join courses c on s.department = c.department
where
    c.Course_ID is null
union
select
    *
from
    students s
    right join courses c on s.department = c.department
where
    s.Student_ID is null;

#self join
create table employee(id int, name varchar(20), manager_id int);

insert into
    employee
values
    (101, "pratham", NULL),
    (102, "atharva", 103),
    (103, "aryan", 101),
    (104, "pranav", 101);

select
    a.name as employee_name,
    b.name as Manager_name
from
    employee as a
    join employee as b on a.manager_id = b.id;

########################################################
#SUB QUERIES
CREATE TABLE Authors (
    Author_ID INT PRIMARY KEY,
    Author_Name VARCHAR(255)
);

INSERT INTO
    Authors (Author_ID, Author_Name)
VALUES
    (1, 'Scott Urman'),
    (2, 'Jane Austen'),
    (3, 'George Orwell'),
    (4, 'J.K. Rowling');

CREATE TABLE Books (
    Book_ID INT PRIMARY KEY,
    Book_Title VARCHAR(255),
    Author_ID INT,
    Cost INT,
    Category VARCHAR(255),
    FOREIGN KEY (Author_ID) REFERENCES Authors(Author_ID)
);

INSERT INTO
    Books (Book_ID, Book_Title, Author_ID, Cost, Category)
VALUES
    (101, 'Java Programming', 1, 400, 'Programming'),
    (102, 'Pride and Prejudice', 2, 250, 'Fiction'),
    (103, '1984', 3, 350, 'Fiction'),
    (104, 'Harry Potter', 4, 500, 'Fantasy'),
    (105, 'SQL Fundamentals', 1, 300, 'Programming');

CREATE TABLE Members (
    Member_ID INT PRIMARY KEY,
    Member_Name VARCHAR(255),
    Membership_Type VARCHAR(50),
    Fees_Paid INT,
    Max_Books_Allowed INT,
    Penalty_Amount INT
);

INSERT INTO
    Members (
        Member_ID,
        Member_Name,
        Membership_Type,
        Fees_Paid,
        Max_Books_Allowed,
        Penalty_Amount
    )
VALUES
    (1, 'Alice', 'Annual', 500, 5, 0),
    (2, 'Bob', 'Monthly', 200, 3, 0),
    (3, 'Charlie', 'Annual', 700, 5, 0),
    (4, 'David', 'Monthly', 150, 3, 0),
    (5, 'Emily', 'Annual', 600, 5, 0);

CREATE TABLE BookIssues (
    Issue_ID INT PRIMARY KEY,
    Book_ID INT,
    Member_ID INT,
    Issue_Date DATE,
    Return_Date DATE,
    FOREIGN KEY (Book_ID) REFERENCES Books(Book_ID),
    FOREIGN KEY (Member_ID) REFERENCES Members(Member_ID)
);

INSERT INTO
    BookIssues (
        Issue_ID,
        Book_ID,
        Member_ID,
        Issue_Date,
        Return_Date
    )
VALUES
    (1, 101, 1, '2024-04-01', '2024-04-15'),
    (2, 103, 2, '2024-04-03', '2024-04-17'),
    (3, 104, 3, '2024-04-05', '2024-04-20'),
    (4, 102, 4, '2024-04-08', '2024-04-22'),
    (5, 105, 1, '2024-04-10', '2024-04-25');

SELECT
    DISTINCT Member_Name
FROM
    Members
WHERE
    Member_ID IN (
        SELECT
            Member_ID
        FROM
            BookIssues
        WHERE
            Book_ID IN (
                SELECT
                    Book_ID
                FROM
                    Books
                WHERE
                    Cost > 300
                    AND Author_ID = (
                        SELECT
                            Author_ID
                        FROM
                            Authors
                        WHERE
                            Author_Name = 'Scott Urman'
                    )
            )
    );

#procedure
Delimiter / / create procedure get_bank_info(in age int) begin
select
    *
from
    bank
where
    bank.age = age;

end / / Delimiter;

drop procedure get_bank_info;

call get_bank_info(19);

#calling the procedure 
drop procedure if exists get_bank_info;

#trigger
create table backup(name varchar(20), age int);

DELIMITER / / CREATE trigger backup_database before delete on bank for each row BEGIN
insert into
    backup
values
    (old.name, old.age);

END / / DELIMITER;

drop trigger backup_database;

delete from
    bank
where
    age = 19;

select
    *
from
    backup;