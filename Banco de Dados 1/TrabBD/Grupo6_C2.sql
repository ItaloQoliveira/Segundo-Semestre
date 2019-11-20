SELECT 
    subset_nome 'nome do subsetor',
    seg_nome 'nome do segmento',
    emp_nome 'nome de pregão da empresa'
FROM
    empresa e
        NATURAL JOIN
    segmento seg
        NATURAL JOIN
    subsetor sub
        NATURAL JOIN
    setor s
WHERE
    e.gov_sigla IS NULL
        AND set_nome = 'Tecnologia da Informação';  
