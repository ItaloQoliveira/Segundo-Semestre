CREATE DATABASE  IF NOT EXISTS `reservas` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `reservas`;
-- MySQL dump 10.13  Distrib 5.7.17, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: reservas
-- ------------------------------------------------------
-- Server version	5.7.21-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `curso`
--

DROP TABLE IF EXISTS `curso`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `curso` (
  `cur_codigo` tinyint(4) NOT NULL,
  `cur_nome` varchar(60) NOT NULL,
  `dep_codigo` tinyint(4) NOT NULL,
  PRIMARY KEY (`cur_codigo`),
  KEY `fk_CURSO_DEPARTAMENTO_idx` (`dep_codigo`),
  CONSTRAINT `fk_CURSO_DEPARTAMENTO` FOREIGN KEY (`dep_codigo`) REFERENCES `departamento` (`dep_codigo`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `curso`
--

LOCK TABLES `curso` WRITE;
/*!40000 ALTER TABLE `curso` DISABLE KEYS */;
INSERT INTO `curso` VALUES (1,'Engenharia de Computação',1),(2,'Engenharia Elétrica',2),(3,'Engenharia Mecânica',6),(4,'Engenharia de Software',1),(5,'Tecnologia em Análise e Desenvolvimento de Sistemas',1);
/*!40000 ALTER TABLE `curso` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `departamento`
--

DROP TABLE IF EXISTS `departamento`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `departamento` (
  `dep_codigo` tinyint(4) NOT NULL,
  `dep_nome` varchar(45) NOT NULL,
  `dep_sigla` varchar(10) NOT NULL,
  PRIMARY KEY (`dep_codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `departamento`
--

LOCK TABLES `departamento` WRITE;
/*!40000 ALTER TABLE `departamento` DISABLE KEYS */;
INSERT INTO `departamento` VALUES (1,'Departamento Acadêmico de Computação','DACOM'),(2,'Departamento Acadêmico de Elétrica','DAELE'),(3,'Departamento Acadêmico de Matemática','DAMAT'),(4,'Departamento Acadêmico de Eletrônica','DAELN'),(5,'Departamento Acadêmico de Eletrotécnica','DAELT'),(6,'Departamento Acadêmico de Mecânica','DAMEC'),(7,'Departamento Acadêmico de Física','DAFIS'),(8,'Departamento Acadêmico de Gestão e Economia','DAGEE');
/*!40000 ALTER TABLE `departamento` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `disciplina`
--

DROP TABLE IF EXISTS `disciplina`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `disciplina` (
  `dis_codigo` varchar(5) NOT NULL,
  `dis_nome` varchar(45) NOT NULL,
  `cur_codigo` tinyint(4) NOT NULL,
  PRIMARY KEY (`dis_codigo`),
  KEY `fk_DISCIPLINA_CURSO_idx` (`cur_codigo`),
  CONSTRAINT `fk_DISCIPLINA_CURSO` FOREIGN KEY (`cur_codigo`) REFERENCES `curso` (`cur_codigo`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `disciplina`
--

LOCK TABLES `disciplina` WRITE;
/*!40000 ALTER TABLE `disciplina` DISABLE KEYS */;
INSERT INTO `disciplina` VALUES ('AN32C','Banco De Dados 1',5),('EC34D','Banco De Dados 1',1),('EC35B','Banco de Dados 2',1),('EM33H','Física Experimental',3),('ES31A','Introdução A Engenharia De Software',4),('ES31B','Matemática Discreta',4),('ES31C','Laboratorio De Informática',4),('ES31D','Algoritmos',4),('ES61G','Lógica para Computação',4),('ES63H','Redes de Computadores',4),('ES65B','Banco De Dados 2',4),('IF51A','Laboratorio De Informática',5),('IF51C','Organização De Computadores',5),('IF53C','Banco De Dados 2',5),('IF61A','Introdução A Engenharia De Computação',1),('IF62A','Tecnicas De Programação',1),('IF62C','Tecnicas De Programação',4),('IF62D','Processo De Produção De Software',4),('IF62H','Banco De Dados 1',4),('IF63C','Requisitos de Software',4),('IF64G','Qualidade de Software',4),('IF67K','Arquitetura de Software',4),('IF68F','Programação Distribuída',4),('MA35B','Probabilidade Estatística',2),('MA62G','Probabilidade Estatística',4),('SO32A','Organização De Computadores',4),('SO36B','Gerência de Configuração',4);
/*!40000 ALTER TABLE `disciplina` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ensalamento`
--

DROP TABLE IF EXISTS `ensalamento`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `ensalamento` (
  `tur_codigo` varchar(5) NOT NULL,
  `dis_codigo` varchar(5) NOT NULL,
  `tudi_ano` year(4) NOT NULL,
  `tudi_semestre` tinyint(1) NOT NULL,
  `ens_dia` tinyint(1) NOT NULL,
  `hor_horario` varchar(2) NOT NULL,
  `sal_codigo` varchar(5) NOT NULL,
  PRIMARY KEY (`tudi_ano`,`tudi_semestre`,`hor_horario`,`sal_codigo`,`ens_dia`,`tur_codigo`,`dis_codigo`),
  KEY `fk_ensalamento_turma_disciplina1_idx` (`tur_codigo`,`dis_codigo`,`tudi_ano`,`tudi_semestre`),
  KEY `fk_ensalamento_sala1_idx` (`sal_codigo`),
  KEY `fk_ensalamento_horario1` (`hor_horario`),
  CONSTRAINT `fk_ensalamento_horario1` FOREIGN KEY (`hor_horario`) REFERENCES `horario` (`hor_horario`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_ensalamento_sala1` FOREIGN KEY (`sal_codigo`) REFERENCES `sala` (`sal_codigo`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_ensalamento_turma_disciplina1` FOREIGN KEY (`tur_codigo`, `dis_codigo`, `tudi_ano`, `tudi_semestre`) REFERENCES `turma_disciplina` (`tur_codigo`, `dis_codigo`, `tudi_ano`, `tudi_semestre`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ensalamento`
--

LOCK TABLES `ensalamento` WRITE;
/*!40000 ALTER TABLE `ensalamento` DISABLE KEYS */;
INSERT INTO `ensalamento` VALUES ('M31','EM33H',2017,2,5,'M4','P105'),('M31','EM33H',2017,2,5,'M5','P105'),('ES21','IF62H',2017,2,2,'N1','I205'),('N12A','AN32C',2017,2,4,'N2','I205'),('N12A','AN32C',2017,2,4,'N3','I205'),('N12A','AN32C',2017,2,2,'N4','I205'),('N12A','AN32C',2017,2,2,'N5','I205'),('E21','MA35B',2017,2,6,'T2','K009'),('E21','MA35B',2017,2,6,'T3','K009'),('ES21','IF62H',2017,1,3,'T4','A040'),('C41','EC34D',2017,2,3,'T4','A040'),('C41','EC34D',2017,2,3,'T5','A040');
/*!40000 ALTER TABLE `ensalamento` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `horario`
--

DROP TABLE IF EXISTS `horario`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `horario` (
  `hor_horario` varchar(2) NOT NULL,
  `hor_inicio` time NOT NULL,
  `hor_termino` time NOT NULL,
  PRIMARY KEY (`hor_horario`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `horario`
--

LOCK TABLES `horario` WRITE;
/*!40000 ALTER TABLE `horario` DISABLE KEYS */;
INSERT INTO `horario` VALUES ('M1','07:30:00','08:20:00'),('M2','08:20:00','09:10:00'),('M3','09:10:00','10:00:00'),('M4','10:20:00','11:10:00'),('M5','11:10:00','12:00:00'),('M6','12:00:00','12:50:00'),('N1','18:40:00','19:30:00'),('N2','19:30:00','20:20:00'),('N3','20:20:00','21:10:00'),('N4','21:20:00','22:10:00'),('N5','22:10:00','23:00:00'),('T1','13:00:00','13:50:00'),('T2','13:50:00','14:40:00'),('T3','14:40:00','15:30:00'),('T4','15:50:00','16:40:00'),('T5','16:40:00','17:30:00'),('T6','17:50:00','18:40:00');
/*!40000 ALTER TABLE `horario` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `predio`
--

DROP TABLE IF EXISTS `predio`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `predio` (
  `pre_codigo` tinyint(4) NOT NULL,
  `pre_nome` varchar(45) NOT NULL,
  PRIMARY KEY (`pre_codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `predio`
--

LOCK TABLES `predio` WRITE;
/*!40000 ALTER TABLE `predio` DISABLE KEYS */;
INSERT INTO `predio` VALUES (1,'Bloco I'),(2,'Bloco K'),(3,'Bloco P'),(4,'Bloco G'),(5,'Bloco A');
/*!40000 ALTER TABLE `predio` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `professor`
--

DROP TABLE IF EXISTS `professor`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `professor` (
  `pro_siape` tinyint(4) NOT NULL,
  `pro_pnome` varchar(20) NOT NULL,
  `pro_unome` varchar(25) NOT NULL,
  `pro_salario` decimal(8,2) NOT NULL,
  `pro_fone_ddd` tinyint(2) DEFAULT NULL,
  `pro_fone_nro` int(9) DEFAULT NULL,
  `dep_codigo` tinyint(4) DEFAULT NULL,
  PRIMARY KEY (`pro_siape`),
  KEY `fk_PROFESSOR_DEPARTAMENTO_idx` (`dep_codigo`),
  CONSTRAINT `fk_PROFESSOR_DEPARTAMENTO` FOREIGN KEY (`dep_codigo`) REFERENCES `departamento` (`dep_codigo`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `professor`
--

LOCK TABLES `professor` WRITE;
/*!40000 ALTER TABLE `professor` DISABLE KEYS */;
INSERT INTO `professor` VALUES (1,'Hanka','Ruebbert',60000.00,43,35239000,6),(2,'Tilo','Gerhold',65000.00,NULL,NULL,2),(3,'Ekkehart','Schubbert',55000.00,11,754210000,3),(4,'Gerhard','Huettig',85000.00,14,33448888,2),(5,'Angela','Lehmann',75000.00,43,35237777,2),(6,'Lisa','Reimann',95000.00,NULL,NULL,1),(7,'Corinna','Engellmann',130000.00,55,995554500,1),(8,'Manfred','Schubbert',79000.00,43,998456587,2),(9,'Lena','Reimann',145000.00,14,997465544,3),(10,'Giovani','Meinerz',84000.00,55,999838457,1),(11,'Luiz','Marenco',67000.00,55,996814596,NULL),(12,'Mano','Lima',81000.00,55,975824684,NULL),(13,'Cenair','Maicá',89000.00,55,997896341,NULL);
/*!40000 ALTER TABLE `professor` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `sala`
--

DROP TABLE IF EXISTS `sala`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `sala` (
  `sal_codigo` varchar(5) NOT NULL,
  `sal_posicoes` tinyint(4) NOT NULL,
  `sal_computadores` tinyint(4) NOT NULL,
  `tisa_codigo` tinyint(4) NOT NULL,
  `pre_codigo` tinyint(4) NOT NULL,
  PRIMARY KEY (`sal_codigo`),
  KEY `fk_LABORATORIO_PREDIO_idx` (`pre_codigo`),
  KEY `fk_laboratorio_tipo_sala1_idx` (`tisa_codigo`),
  CONSTRAINT `fk_LABORATORIO_PREDIO` FOREIGN KEY (`pre_codigo`) REFERENCES `predio` (`pre_codigo`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_laboratorio_tipo_sala1` FOREIGN KEY (`tisa_codigo`) REFERENCES `tipo_sala` (`tisa_codigo`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sala`
--

LOCK TABLES `sala` WRITE;
/*!40000 ALTER TABLE `sala` DISABLE KEYS */;
INSERT INTO `sala` VALUES ('A040',45,44,3,5),('A137',20,0,6,5),('A140',44,1,2,5),('A146',44,1,2,5),('I201',42,24,3,1),('I202',42,24,3,1),('I205',45,30,3,1),('K005',15,15,5,2),('K008',24,23,3,2),('K009',24,24,3,2),('P003',27,21,3,3),('P005',45,44,3,3),('P101',44,1,2,3),('P105',45,44,3,3),('P205',45,39,3,3);
/*!40000 ALTER TABLE `sala` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tipo_sala`
--

DROP TABLE IF EXISTS `tipo_sala`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tipo_sala` (
  `tisa_codigo` tinyint(4) NOT NULL,
  `tisa_descricao` varchar(45) NOT NULL,
  PRIMARY KEY (`tisa_codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tipo_sala`
--

LOCK TABLES `tipo_sala` WRITE;
/*!40000 ALTER TABLE `tipo_sala` DISABLE KEYS */;
INSERT INTO `tipo_sala` VALUES (1,'Especial'),(2,'Teórica'),(3,'Laboratório'),(4,'Desenho'),(5,'Pesquisa'),(6,'Monitoria');
/*!40000 ALTER TABLE `tipo_sala` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `turma`
--

DROP TABLE IF EXISTS `turma`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `turma` (
  `tur_codigo` varchar(5) NOT NULL,
  `tur_periodo` tinyint(2) NOT NULL,
  `cur_codigo` tinyint(4) NOT NULL,
  PRIMARY KEY (`tur_codigo`),
  KEY `fk_turma_curso_idx` (`cur_codigo`),
  CONSTRAINT `fk_turma_curso` FOREIGN KEY (`cur_codigo`) REFERENCES `curso` (`cur_codigo`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `turma`
--

LOCK TABLES `turma` WRITE;
/*!40000 ALTER TABLE `turma` DISABLE KEYS */;
INSERT INTO `turma` VALUES ('C11',1,1),('C21',2,1),('C31',3,1),('C41',4,1),('C51',5,1),('C61',6,1),('C71',7,1),('C81',8,1),('C91',9,1),('E21',2,2),('ES11',1,4),('ES21',2,4),('ES31',3,4),('ES41',4,4),('ES51',5,4),('ES61',6,4),('ES71',7,4),('M31',3,3),('N11',1,5),('N12',2,5),('N12A',2,5),('N12B',2,5),('N12SP',2,5),('N13',3,5),('N14',4,5),('N15',5,5),('N16',6,5);
/*!40000 ALTER TABLE `turma` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `turma_disciplina`
--

DROP TABLE IF EXISTS `turma_disciplina`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `turma_disciplina` (
  `tur_codigo` varchar(5) NOT NULL,
  `dis_codigo` varchar(5) NOT NULL,
  `tudi_ano` year(4) NOT NULL,
  `tudi_semestre` tinyint(1) NOT NULL,
  `pro_siape` tinyint(4) NOT NULL,
  `tudi_modalidade` enum('Presencial','Distância','Semipresencial') NOT NULL,
  PRIMARY KEY (`tur_codigo`,`dis_codigo`,`tudi_ano`,`tudi_semestre`),
  KEY `fk_turma_has_disciplina_disciplina1_idx` (`dis_codigo`),
  KEY `fk_turma_has_disciplina_turma1_idx` (`tur_codigo`),
  KEY `fk_turma_disciplina_professor1_idx` (`pro_siape`),
  CONSTRAINT `fk_turma_disciplina_professor1` FOREIGN KEY (`pro_siape`) REFERENCES `professor` (`pro_siape`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_turma_has_disciplina_disciplina1` FOREIGN KEY (`dis_codigo`) REFERENCES `disciplina` (`dis_codigo`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_turma_has_disciplina_turma1` FOREIGN KEY (`tur_codigo`) REFERENCES `turma` (`tur_codigo`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `turma_disciplina`
--

LOCK TABLES `turma_disciplina` WRITE;
/*!40000 ALTER TABLE `turma_disciplina` DISABLE KEYS */;
INSERT INTO `turma_disciplina` VALUES ('C41','EC34D',2017,2,6,'Presencial'),('C51','EC35B',2017,1,12,'Presencial'),('C51','EC35B',2017,2,13,'Presencial'),('E21','MA35B',2017,2,4,'Presencial'),('ES21','IF62H',2017,1,11,'Presencial'),('ES21','IF62H',2017,2,11,'Presencial'),('ES31','IF63C',2016,1,5,'Presencial'),('M31','EM33H',2017,2,1,'Presencial'),('N12A','AN32C',2017,2,11,'Presencial'),('N12B','AN32C',2017,2,7,'Presencial'),('N12B','AN32C',2018,1,7,'Distância'),('N12SP','AN32C',2017,2,11,'Semipresencial');
/*!40000 ALTER TABLE `turma_disciplina` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-05-08 19:30:54
