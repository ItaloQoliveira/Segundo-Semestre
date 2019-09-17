use caralho;
create table curso(
	cur_cod int primary key,
    cur_nome varchar (100) not null,
    dep_cod int not null,
    foreign key (dep_cod) references departamento(dep_cod));