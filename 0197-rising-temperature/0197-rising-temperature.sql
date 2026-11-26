SELECT todays.id
FROM Weather yesterday 
CROSS JOIN Weather todays

WHERE DATEDIFF(todays.recordDate,yesterday.recordDate) = 1
    AND todays.temperature > yesterday.temperature
;