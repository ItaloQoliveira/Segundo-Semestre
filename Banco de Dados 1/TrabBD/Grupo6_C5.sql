SELECT 
    ind_sigla, ind_nome, acao_codigo, list_porcentagem
FROM
    listagem
        NATURAL JOIN
    indice
where list_porcentagem in (select max(list_porcentagem) from listagem natural join indice group by ind_sigla)
ORDER BY list_porcentagem DESC;