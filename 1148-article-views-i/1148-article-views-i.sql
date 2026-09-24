# Write your MySQL query statement below
Select DISTINCT author_id AS id
From Views
where author_id=viewer_id
ORDER BY id ASC;
