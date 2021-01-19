#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/-FuncionesC.o \
	${OBJECTDIR}/-MainFunciones.o \
	${OBJECTDIR}/ArrayYCadenas.o \
	${OBJECTDIR}/Asignaciones.o \
	${OBJECTDIR}/Asignaciones2.o \
	${OBJECTDIR}/Burbuja.o \
	${OBJECTDIR}/Clase5.o \
	${OBJECTDIR}/Fibonacci.o \
	${OBJECTDIR}/For.o \
	${OBJECTDIR}/FuncionesMatematicas.o \
	${OBJECTDIR}/MenuFunTemperaturas.o \
	${OBJECTDIR}/NumeroMayorD3.o \
	${OBJECTDIR}/NumeroMayorD4.o \
	${OBJECTDIR}/Operadores.o \
	${OBJECTDIR}/While.o \
	${OBJECTDIR}/newmain.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fuendamentosdeprogramacion1cm2.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fuendamentosdeprogramacion1cm2.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fuendamentosdeprogramacion1cm2 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/-FuncionesC.o: -FuncionesC.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/-FuncionesC.o -FuncionesC.c

${OBJECTDIR}/-MainFunciones.o: -MainFunciones.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/-MainFunciones.o -MainFunciones.c

${OBJECTDIR}/ArrayYCadenas.o: ArrayYCadenas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArrayYCadenas.o ArrayYCadenas.c

${OBJECTDIR}/Asignaciones.o: Asignaciones.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Asignaciones.o Asignaciones.c

${OBJECTDIR}/Asignaciones2.o: Asignaciones2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Asignaciones2.o Asignaciones2.c

${OBJECTDIR}/Burbuja.o: Burbuja.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Burbuja.o Burbuja.c

${OBJECTDIR}/Clase5.o: Clase5.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Clase5.o Clase5.c

${OBJECTDIR}/Fibonacci.o: Fibonacci.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Fibonacci.o Fibonacci.c

${OBJECTDIR}/For.o: For.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/For.o For.c

${OBJECTDIR}/FuncionesMatematicas.o: FuncionesMatematicas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FuncionesMatematicas.o FuncionesMatematicas.c

${OBJECTDIR}/MenuFunTemperaturas.o: MenuFunTemperaturas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MenuFunTemperaturas.o MenuFunTemperaturas.c

${OBJECTDIR}/NumeroMayorD3.o: NumeroMayorD3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/NumeroMayorD3.o NumeroMayorD3.c

${OBJECTDIR}/NumeroMayorD4.o: NumeroMayorD4.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/NumeroMayorD4.o NumeroMayorD4.c

${OBJECTDIR}/Operadores.o: Operadores.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Operadores.o Operadores.c

${OBJECTDIR}/While.o: While.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/While.o While.c

${OBJECTDIR}/newmain.o: newmain.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/newmain.o newmain.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
