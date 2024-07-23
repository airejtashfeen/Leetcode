WITH cte AS(
    SELECT player_id, MIN(event_date) AS first_login_date
    FROM Activity
    GROUP BY player_id
)

SELECT ROUND(
    SUM(DATEDIFF(a.event_date, c.first_login_date)=1) / COUNT(DISTINCT a.player_id),2) AS fraction
    FROM Activity a
    JOIN CTE c
    ON c.player_id= a.player_id

