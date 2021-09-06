###########################################################################
## Makefile generated for component 'Corneto_flight_program_control'. 
## 
## Makefile     : Corneto_flight_program_control.mk
## Generated on : Mon Jun 07 12:13:50 2021
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/Corneto_flight_program_control.pre.o
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = Corneto_flight_program_control
MAKEFILE                  = Corneto_flight_program_control.mk
MATLAB_ROOT               = /usr/local/MATLAB/R2021a
MATLAB_BIN                = /usr/local/MATLAB/R2021a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/glnxa64
START_DIR                 = /home/corneto/Desktop/FIles_from_Windows/HILsim/Mainframe
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = None
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          GNU Tools for PX4 Autopilots
# Supported Version(s):    
# ToolchainInfo Version:   2021a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# TARGET_LOAD_CMD_ARGS
# TARGET_LOAD_CMD
# PX4FIRMWAREROOTDIR
# CMAKEMAKECONFIG
# PYTHONROOTDIR
# CYGWINROOTDIR
# MW_PX4_BUILDCMD

#-----------
# MACROS
#-----------

Q                    = $(if $(V),,@)
CPFLAGS              = -O binary
LIBGCC               = $(shell $(CC) $(ARCHCPUFLAGS) -print-libgcc-file-name)
LIBM                 = $(shell $(CC) $(ARCHCPUFLAGS) -print-file-name=libm.a)
PX4_MAKE             = $(MW_PX4_BUILDCMD)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm -lm

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: GNU PX4 C Compiler
CC = echo gcc

# Linker: GNU PX4 Pre-Linker
LD = echo gcc

# C++ Compiler: GNU PX4 C++ Compiler
CPP = echo g++

# C++ Linker: GNU PX4 C++ Pre-Linker
CPP_LD = echo gcc

# Archiver: GNU PX4 Archiver
AR = echo

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Invoke Make: Invoke Make
INVOKE = $(call CALLPX4MK)

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/glnxa64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
ENDGRP              = --end-group
OUTPUT_FLAG         = -o
STARTGRP            = --start-group
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
ENDGRP              = --end-group
OUTPUT_FLAG         = -o
STARTGRP            = --start-group
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del /f/q
ECHO                = @echo
MV                  = @mv
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = ruvs
CFLAGS               =
CPPFLAGS             =
CPP_LDFLAGS          =
CPP_SHAREDLIB_LDFLAGS  =
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
MAKEFILENAME         =
LDFLAGS              =
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE) postdownload_preexecute
SHAREDLIB_LDFLAGS    =



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/Corneto_flight_program_control.pre.o
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I/home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/include -I$(START_DIR)/Corneto_flight_program_control_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/serial -I/home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/shared/externalmode_daemon/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=0
DEFINES_SKIPFORSIL = -DPX4 -DFMUv3 -DNULL=0 -DMW_PX4_NUTTX_BUILD -DEXTMODE_DISABLETESTING -DEXTMODE_DISABLEPRINTF -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -D__linux__ -DXCP_PLATFORM_LINUX_NO_PIE_SUPPORT -DSTACK_SIZE=64 -DRT
DEFINES_STANDARD = -DMODEL=Corneto_flight_program_control -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/MW_uORB_Read.cpp /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/MW_uORB_Write.cpp /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/MW_PX4_PWM.cpp /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/MW_ParameterRead.cpp $(START_DIR)/Corneto_flight_program_control_ert_rtw/Corneto_flight_program_control.cpp $(START_DIR)/Corneto_flight_program_control_ert_rtw/Corneto_flight_program_control_data.cpp $(START_DIR)/Corneto_flight_program_control_ert_rtw/rtGetInf.cpp $(START_DIR)/Corneto_flight_program_control_ert_rtw/rtGetNaN.cpp $(START_DIR)/Corneto_flight_program_control_ert_rtw/rt_nonfinite.cpp $(START_DIR)/Corneto_flight_program_control_ert_rtw/rt_zcfcn.cpp /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/MW_PX4_TaskControl.cpp /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/nuttxinitialize.cpp

MAIN_SRC = $(START_DIR)/Corneto_flight_program_control_ert_rtw/ert_main.cpp

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = MW_uORB_Read.cpp.o MW_uORB_Write.cpp.o MW_PX4_PWM.cpp.o MW_ParameterRead.cpp.o Corneto_flight_program_control.cpp.o Corneto_flight_program_control_data.cpp.o rtGetInf.cpp.o rtGetNaN.cpp.o rt_nonfinite.cpp.o rt_zcfcn.cpp.o MW_PX4_TaskControl.cpp.o nuttxinitialize.cpp.o

MAIN_OBJ = ert_main.cpp.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################


define CALLPX4MK 
	@echo "Making Firmware $2"
	@(cd $(PX4FIRMWAREROOTDIR)/Firmware && $(PX4_MAKE) )
	@echo "### End of Simulink Build ###"
endef



-include codertarget_assembly_flags.mk
-include ../codertarget_assembly_flags.mk


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download postdownload_preexecute execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : $(PRODUCT)


postdownload_preexecute : download
	@echo "### Invoking postbuild tool "Invoke Make" ..."
	$(INVOKE) $(MAKEFILENAME)
	@echo "### Done invoking postbuild tool."


execute : postdownload_preexecute
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.cpp.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.cpp.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.cpp.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.cpp.o : /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/Corneto_flight_program_control_ert_rtw/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.cpp.o : $(START_DIR)/Corneto_flight_program_control_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.cpp.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.cpp.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MW_uORB_Read.cpp.o : /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/MW_uORB_Read.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MW_uORB_Write.cpp.o : /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/MW_uORB_Write.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MW_PX4_PWM.cpp.o : /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/MW_PX4_PWM.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MW_ParameterRead.cpp.o : /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/MW_ParameterRead.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


ert_main.cpp.o : $(START_DIR)/Corneto_flight_program_control_ert_rtw/ert_main.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Corneto_flight_program_control.cpp.o : $(START_DIR)/Corneto_flight_program_control_ert_rtw/Corneto_flight_program_control.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Corneto_flight_program_control_data.cpp.o : $(START_DIR)/Corneto_flight_program_control_ert_rtw/Corneto_flight_program_control_data.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rtGetInf.cpp.o : $(START_DIR)/Corneto_flight_program_control_ert_rtw/rtGetInf.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rtGetNaN.cpp.o : $(START_DIR)/Corneto_flight_program_control_ert_rtw/rtGetNaN.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rt_nonfinite.cpp.o : $(START_DIR)/Corneto_flight_program_control_ert_rtw/rt_nonfinite.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rt_zcfcn.cpp.o : $(START_DIR)/Corneto_flight_program_control_ert_rtw/rt_zcfcn.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MW_PX4_TaskControl.cpp.o : /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/MW_PX4_TaskControl.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


nuttxinitialize.cpp.o : /home/corneto/Documents/MATLAB/SupportPackages/R2021a/toolbox/target/supportpackages/px4/src/nuttxinitialize.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### MAKEFILENAME = $(MAKEFILENAME)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


