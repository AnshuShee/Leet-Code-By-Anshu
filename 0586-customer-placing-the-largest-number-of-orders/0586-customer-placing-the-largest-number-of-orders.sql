Select customer_number from Orders group by  customer_number order by COUNT(*) DESC
LIMIT 1;