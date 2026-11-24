DELETE pi FROM Person pi
JOIN Person p2 
ON pi.Email = p2.Email AND pi.Id > p2.Id;