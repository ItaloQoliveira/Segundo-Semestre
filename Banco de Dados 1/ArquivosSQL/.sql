-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
-- -----------------------------------------------------
-- Schema IF62H
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema IF62H
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `IF62H` ;
USE `IF62H` ;

-- -----------------------------------------------------
-- Table `IF62H`.`DEPARTAMENTO`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `IF62H`.`DEPARTAMENTO` (
  `DEPARTAMENTOID` INT NOT NULL,
  PRIMARY KEY (`DEPARTAMENTOID`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `IF62H`.`PROFESSOR`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `IF62H`.`PROFESSOR` (
  `Siape do professor` INT NOT NULL,
  `Nome do professor` VARCHAR(45) NULL,
  `Endereço* do professor` VARCHAR(45) NULL COMMENT 'Trata-se de um atributo composto por: Logradouro, número, complemento, bairro, cep e cidade.\n',
  `Telefones* do professor` VARCHAR(45) NULL COMMENT 'Trata-se de um atributo multivalorado formado por telefone residencial, telefone móvel e telefone profissional\n',
  `DEPARTAMENTO_DEPARTAMENTOID` INT NOT NULL,
  PRIMARY KEY (`Siape do professor`),
  INDEX `fk_PROFESSOR_DEPARTAMENTO_idx` (`DEPARTAMENTO_DEPARTAMENTOID` ASC),
  CONSTRAINT `fk_PROFESSOR_DEPARTAMENTO`
    FOREIGN KEY (`DEPARTAMENTO_DEPARTAMENTOID`)
    REFERENCES `IF62H`.`DEPARTAMENTO` (`DEPARTAMENTOID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `IF62H`.`CURSO`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `IF62H`.`CURSO` (
  `idCURSO` INT NOT NULL,
  `DEPARTAMENTO_DEPARTAMENTOID` INT NOT NULL,
  PRIMARY KEY (`idCURSO`),
  INDEX `fk_CURSO_DEPARTAMENTO1_idx` (`DEPARTAMENTO_DEPARTAMENTOID` ASC),
  CONSTRAINT `fk_CURSO_DEPARTAMENTO1`
    FOREIGN KEY (`DEPARTAMENTO_DEPARTAMENTOID`)
    REFERENCES `IF62H`.`DEPARTAMENTO` (`DEPARTAMENTOID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
