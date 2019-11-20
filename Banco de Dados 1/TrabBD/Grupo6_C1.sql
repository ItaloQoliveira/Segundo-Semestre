SELECT 
    COUNT(emp_codigo), g.gov_sigla, gov_nome
FROM
    empresa e
        JOIN
    governanca g USING (gov_sigla)
GROUP BY (gov_sigla)
HAVING COUNT(emp_codigo) > 20;