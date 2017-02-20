##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Aviao
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/FACOMP/Documents/Aviao
ProjectPath            :=C:/Users/FACOMP/Downloads/Aviao
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=FACOMP
Date                   :=20/02/2017
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Aviao.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/windres.exe"
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/ar.exe" rcu
CXX      := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe"
CC       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Aviao.cpp$(ObjectSuffix) $(IntermediateDirectory)/Tripulacao.cpp$(ObjectSuffix) $(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Aeronave.cpp$(ObjectSuffix) $(IntermediateDirectory)/Helicoptero.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Downloads/Aviao/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix)main.cpp

$(IntermediateDirectory)/Aviao.cpp$(ObjectSuffix): Aviao.cpp $(IntermediateDirectory)/Aviao.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Downloads/Aviao/Aviao.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Aviao.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Aviao.cpp$(DependSuffix): Aviao.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Aviao.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Aviao.cpp$(DependSuffix) -MM Aviao.cpp

$(IntermediateDirectory)/Aviao.cpp$(PreprocessSuffix): Aviao.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Aviao.cpp$(PreprocessSuffix)Aviao.cpp

$(IntermediateDirectory)/Tripulacao.cpp$(ObjectSuffix): Tripulacao.cpp $(IntermediateDirectory)/Tripulacao.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Downloads/Aviao/Tripulacao.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Tripulacao.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Tripulacao.cpp$(DependSuffix): Tripulacao.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Tripulacao.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Tripulacao.cpp$(DependSuffix) -MM Tripulacao.cpp

$(IntermediateDirectory)/Tripulacao.cpp$(PreprocessSuffix): Tripulacao.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Tripulacao.cpp$(PreprocessSuffix)Tripulacao.cpp

$(IntermediateDirectory)/Data.cpp$(ObjectSuffix): Data.cpp $(IntermediateDirectory)/Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Downloads/Aviao/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Data.cpp$(DependSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Data.cpp$(DependSuffix) -MM Data.cpp

$(IntermediateDirectory)/Data.cpp$(PreprocessSuffix): Data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Data.cpp$(PreprocessSuffix)Data.cpp

$(IntermediateDirectory)/Aeronave.cpp$(ObjectSuffix): Aeronave.cpp $(IntermediateDirectory)/Aeronave.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Downloads/Aviao/Aeronave.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Aeronave.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Aeronave.cpp$(DependSuffix): Aeronave.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Aeronave.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Aeronave.cpp$(DependSuffix) -MM Aeronave.cpp

$(IntermediateDirectory)/Aeronave.cpp$(PreprocessSuffix): Aeronave.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Aeronave.cpp$(PreprocessSuffix)Aeronave.cpp

$(IntermediateDirectory)/Helicoptero.cpp$(ObjectSuffix): Helicoptero.cpp $(IntermediateDirectory)/Helicoptero.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Downloads/Aviao/Helicoptero.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Helicoptero.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Helicoptero.cpp$(DependSuffix): Helicoptero.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Helicoptero.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Helicoptero.cpp$(DependSuffix) -MM Helicoptero.cpp

$(IntermediateDirectory)/Helicoptero.cpp$(PreprocessSuffix): Helicoptero.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Helicoptero.cpp$(PreprocessSuffix)Helicoptero.cpp

$(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix): Cargueiro.cpp $(IntermediateDirectory)/Cargueiro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Downloads/Aviao/Cargueiro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cargueiro.cpp$(DependSuffix): Cargueiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cargueiro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cargueiro.cpp$(DependSuffix) -MM Cargueiro.cpp

$(IntermediateDirectory)/Cargueiro.cpp$(PreprocessSuffix): Cargueiro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cargueiro.cpp$(PreprocessSuffix)Cargueiro.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


