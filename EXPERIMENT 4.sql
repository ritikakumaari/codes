use amitdb;
create TABLE EMP(EMPNO INTEGER,ENAME VARCHAR(20),JOB VARCHAR(30),MGR INTEGER, HIREDATE DATE,SAL INTEGER,COMM INTEGER,DEPTNO INTEGER,PRIMARY KEY(EMPNO));
INSERT INTO EMP VALUES
        (7369, 'SMITH',  'CLERK',     7902,
        '1980-12-17',  800, NULL, 20);
INSERT INTO EMP VALUES
        (7499, 'ALLEN',  'SALESMAN',  7698,
        '1981-02-20', 1600,  300, 30);
INSERT INTO EMP VALUES
        (7521, 'WARD',   'SALESMAN',  7698,
        '1981-02-22', 1250,  500, 30);
INSERT INTO EMP VALUES
        (7566, 'JONES',  'MANAGER',   7839,
        '1981-04-02',  2975, NULL, 20);
INSERT INTO EMP VALUES
        (7654, 'MARTIN', 'SALESMAN',  7698,
        '1981-09-28', 1250, 1400, 30);
INSERT INTO EMP VALUES
        (7698, 'BLAKE',  'MANAGER',   7839,
        '1981-05-01',  2850, NULL, 30);
INSERT INTO EMP VALUES
        (7782, 'CLARK',  'MANAGER',   7839,
        '1981-06-09',  2450, NULL, 10);
INSERT INTO EMP VALUES
        (7788, 'SCOTT',  'ANALYST',   7566,
        '1982-12-09', 3000, NULL, 20);
INSERT INTO EMP VALUES
        (7839, 'KING',   'PRESIDENT', NULL,
        '1981-11-17', 5000, NULL, 10);
INSERT INTO EMP VALUES
        (7844, 'TURNER', 'SALESMAN',  7698,
        '1981-09-08',  1500,    0, 30);
INSERT INTO EMP VALUES
        (7876, 'ADAMS',  'CLERK',     7788,
        '1983-01-12', 1100, NULL, 20);
INSERT INTO EMP VALUES
        (7900, 'JAMES',  'CLERK',     7698,
        '1981-12-03',   950, NULL, 30);
INSERT INTO EMP VALUES
        (7902, 'FORD',   'ANALYST',   7566,
        '1981-12-03',  3000, NULL, 20);
INSERT INTO EMP VALUES
        (7934, 'MILLER', 'CLERK',     7782,
        '1982-01-13', 1300, NULL, 10);
 

CREATE TABLE DEPT
(
DEPTNO INTEGER,
DNAME VARCHAR(30),
LOC VARCHAR(40),
PRIMARY KEY (DEPTNO)
);

INSERT INTO DEPT VALUES (10, 'ACCOUNTING', 'NEW YORK');
INSERT INTO DEPT VALUES (20, 'RESEARCH', 'DALLAS');
INSERT INTO DEPT VALUES (30, 'SALES', 'CHICAGO');
INSERT INTO DEPT VALUES (40, 'OPERATIONS', 'BOSTON');

SELECT * FROM EMP;
SELECT * FROM DEPT;

SELECT * FROM EMP WHERE SAL IN (SELECT SAL FROM EMP WHERE ENAME = 'FORD' OR ENAME = 'SMITH') ORDER BY ENAME DESC;

SELECT * FROM EMP WHERE JOB = (SELECT JOB FROM EMP WHERE ENAME = 'MILLER') OR SAL > (SELECT SAL FROM EMP WHERE ENAME = 'ALLEN');

SELECT ENAME FROM EMP WHERE SAL = (SELECT MAX(SAL) FROM EMP WHERE DEPTNO = (SELECT DEPTNO FROM DEPT WHERE DNAME = 'SALES'));

SELECT ENAME FROM EMP WHERE HIREDATE < (SELECT MAX(HIREDATE) FROM EMP WHERE MGR IN (SELECT EMPNO FROM EMP WHERE ENAME = 'KING'));

SELECT ENAME, DEPTNO FROM EMP WHERE SAL IN (SELECT MAX(SAL) FROM EMP GROUP BY DEPTNO);

SELECT ENAME FROM EMP WHERE SAL = (SELECT (MAX(SAL) + MIN(SAL))/2 FROM EMP);

SELECT ENAME FROM EMP E WHERE HIREDATE IN (SELECT HIREDATE FROM EMP WHERE E.EMPNO <> EMPNO);

SELECT ENAME FROM EMP E WHERE HIREDATE < (SELECT HIREDATE FROM EMP WHERE EMPNO = E.MGR);







