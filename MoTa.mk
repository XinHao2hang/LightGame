##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=MoTa
ConfigurationName      :=Debug
WorkspacePath          :=D:/OpenGL/Game/Game
ProjectPath            :=D:/OpenGL/Game/Game/MoTa
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=YL
Date                   :=2019/1/25
CodeLitePath           :="D:/Program Files/CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
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
ObjectsFileList        :="MoTa.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  -lgdi32 -lopengl32
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)../../../gl_env/include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)SOIL $(LibrarySwitch)glew32 $(LibrarySwitch)glfw3dll 
ArLibs                 :=  "libSOIL.a" "libglew32.a" "libglfw3dll.a" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)../../../gl_env/gcclib 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=D:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/src_GameCore_GameWindow.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GameCore_StartScene.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GLWidget.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GameCore_Game2DMesh.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_TOOLS.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GLShader.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GLScene.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GLAnimal.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GameCore_GameBlockButton.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GameCore_GAME.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/src_GLWidget2D.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GLButton.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Mesh.cpp$(ObjectSuffix) $(IntermediateDirectory)/GLWindow.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GameCore_GameBlock.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GameCore_GameAnimal.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GameCore_EventGameMap.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GameCore_GameMap.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_GameCore_EditSence.cpp$(ObjectSuffix) \
	



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
$(IntermediateDirectory)/src_GameCore_GameWindow.cpp$(ObjectSuffix): src/GameCore/GameWindow.cpp $(IntermediateDirectory)/src_GameCore_GameWindow.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GameCore/GameWindow.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameCore_GameWindow.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameCore_GameWindow.cpp$(DependSuffix): src/GameCore/GameWindow.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameCore_GameWindow.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameCore_GameWindow.cpp$(DependSuffix) -MM src/GameCore/GameWindow.cpp

$(IntermediateDirectory)/src_GameCore_GameWindow.cpp$(PreprocessSuffix): src/GameCore/GameWindow.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameCore_GameWindow.cpp$(PreprocessSuffix) src/GameCore/GameWindow.cpp

$(IntermediateDirectory)/src_GameCore_StartScene.cpp$(ObjectSuffix): src/GameCore/StartScene.cpp $(IntermediateDirectory)/src_GameCore_StartScene.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GameCore/StartScene.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameCore_StartScene.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameCore_StartScene.cpp$(DependSuffix): src/GameCore/StartScene.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameCore_StartScene.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameCore_StartScene.cpp$(DependSuffix) -MM src/GameCore/StartScene.cpp

$(IntermediateDirectory)/src_GameCore_StartScene.cpp$(PreprocessSuffix): src/GameCore/StartScene.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameCore_StartScene.cpp$(PreprocessSuffix) src/GameCore/StartScene.cpp

$(IntermediateDirectory)/src_GLWidget.cpp$(ObjectSuffix): src/GLWidget.cpp $(IntermediateDirectory)/src_GLWidget.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GLWidget.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GLWidget.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GLWidget.cpp$(DependSuffix): src/GLWidget.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GLWidget.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GLWidget.cpp$(DependSuffix) -MM src/GLWidget.cpp

$(IntermediateDirectory)/src_GLWidget.cpp$(PreprocessSuffix): src/GLWidget.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GLWidget.cpp$(PreprocessSuffix) src/GLWidget.cpp

$(IntermediateDirectory)/src_GameCore_Game2DMesh.cpp$(ObjectSuffix): src/GameCore/Game2DMesh.cpp $(IntermediateDirectory)/src_GameCore_Game2DMesh.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GameCore/Game2DMesh.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameCore_Game2DMesh.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameCore_Game2DMesh.cpp$(DependSuffix): src/GameCore/Game2DMesh.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameCore_Game2DMesh.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameCore_Game2DMesh.cpp$(DependSuffix) -MM src/GameCore/Game2DMesh.cpp

$(IntermediateDirectory)/src_GameCore_Game2DMesh.cpp$(PreprocessSuffix): src/GameCore/Game2DMesh.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameCore_Game2DMesh.cpp$(PreprocessSuffix) src/GameCore/Game2DMesh.cpp

$(IntermediateDirectory)/src_TOOLS.cpp$(ObjectSuffix): src/TOOLS.cpp $(IntermediateDirectory)/src_TOOLS.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/TOOLS.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_TOOLS.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_TOOLS.cpp$(DependSuffix): src/TOOLS.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_TOOLS.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_TOOLS.cpp$(DependSuffix) -MM src/TOOLS.cpp

$(IntermediateDirectory)/src_TOOLS.cpp$(PreprocessSuffix): src/TOOLS.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_TOOLS.cpp$(PreprocessSuffix) src/TOOLS.cpp

$(IntermediateDirectory)/src_GLShader.cpp$(ObjectSuffix): src/GLShader.cpp $(IntermediateDirectory)/src_GLShader.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GLShader.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GLShader.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GLShader.cpp$(DependSuffix): src/GLShader.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GLShader.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GLShader.cpp$(DependSuffix) -MM src/GLShader.cpp

$(IntermediateDirectory)/src_GLShader.cpp$(PreprocessSuffix): src/GLShader.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GLShader.cpp$(PreprocessSuffix) src/GLShader.cpp

$(IntermediateDirectory)/src_GLScene.cpp$(ObjectSuffix): src/GLScene.cpp $(IntermediateDirectory)/src_GLScene.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GLScene.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GLScene.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GLScene.cpp$(DependSuffix): src/GLScene.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GLScene.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GLScene.cpp$(DependSuffix) -MM src/GLScene.cpp

$(IntermediateDirectory)/src_GLScene.cpp$(PreprocessSuffix): src/GLScene.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GLScene.cpp$(PreprocessSuffix) src/GLScene.cpp

$(IntermediateDirectory)/src_GLAnimal.cpp$(ObjectSuffix): src/GLAnimal.cpp $(IntermediateDirectory)/src_GLAnimal.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GLAnimal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GLAnimal.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GLAnimal.cpp$(DependSuffix): src/GLAnimal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GLAnimal.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GLAnimal.cpp$(DependSuffix) -MM src/GLAnimal.cpp

$(IntermediateDirectory)/src_GLAnimal.cpp$(PreprocessSuffix): src/GLAnimal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GLAnimal.cpp$(PreprocessSuffix) src/GLAnimal.cpp

$(IntermediateDirectory)/src_GameCore_GameBlockButton.cpp$(ObjectSuffix): src/GameCore/GameBlockButton.cpp $(IntermediateDirectory)/src_GameCore_GameBlockButton.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GameCore/GameBlockButton.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameCore_GameBlockButton.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameCore_GameBlockButton.cpp$(DependSuffix): src/GameCore/GameBlockButton.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameCore_GameBlockButton.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameCore_GameBlockButton.cpp$(DependSuffix) -MM src/GameCore/GameBlockButton.cpp

$(IntermediateDirectory)/src_GameCore_GameBlockButton.cpp$(PreprocessSuffix): src/GameCore/GameBlockButton.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameCore_GameBlockButton.cpp$(PreprocessSuffix) src/GameCore/GameBlockButton.cpp

$(IntermediateDirectory)/src_GameCore_GAME.cpp$(ObjectSuffix): src/GameCore/GAME.cpp $(IntermediateDirectory)/src_GameCore_GAME.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GameCore/GAME.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameCore_GAME.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameCore_GAME.cpp$(DependSuffix): src/GameCore/GAME.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameCore_GAME.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameCore_GAME.cpp$(DependSuffix) -MM src/GameCore/GAME.cpp

$(IntermediateDirectory)/src_GameCore_GAME.cpp$(PreprocessSuffix): src/GameCore/GAME.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameCore_GAME.cpp$(PreprocessSuffix) src/GameCore/GAME.cpp

$(IntermediateDirectory)/src_GLWidget2D.cpp$(ObjectSuffix): src/GLWidget2D.cpp $(IntermediateDirectory)/src_GLWidget2D.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GLWidget2D.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GLWidget2D.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GLWidget2D.cpp$(DependSuffix): src/GLWidget2D.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GLWidget2D.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GLWidget2D.cpp$(DependSuffix) -MM src/GLWidget2D.cpp

$(IntermediateDirectory)/src_GLWidget2D.cpp$(PreprocessSuffix): src/GLWidget2D.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GLWidget2D.cpp$(PreprocessSuffix) src/GLWidget2D.cpp

$(IntermediateDirectory)/src_GLButton.cpp$(ObjectSuffix): src/GLButton.cpp $(IntermediateDirectory)/src_GLButton.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GLButton.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GLButton.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GLButton.cpp$(DependSuffix): src/GLButton.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GLButton.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GLButton.cpp$(DependSuffix) -MM src/GLButton.cpp

$(IntermediateDirectory)/src_GLButton.cpp$(PreprocessSuffix): src/GLButton.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GLButton.cpp$(PreprocessSuffix) src/GLButton.cpp

$(IntermediateDirectory)/src_Mesh.cpp$(ObjectSuffix): src/Mesh.cpp $(IntermediateDirectory)/src_Mesh.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/Mesh.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Mesh.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Mesh.cpp$(DependSuffix): src/Mesh.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Mesh.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Mesh.cpp$(DependSuffix) -MM src/Mesh.cpp

$(IntermediateDirectory)/src_Mesh.cpp$(PreprocessSuffix): src/Mesh.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Mesh.cpp$(PreprocessSuffix) src/Mesh.cpp

$(IntermediateDirectory)/GLWindow.cpp$(ObjectSuffix): GLWindow.cpp $(IntermediateDirectory)/GLWindow.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/GLWindow.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/GLWindow.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/GLWindow.cpp$(DependSuffix): GLWindow.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/GLWindow.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/GLWindow.cpp$(DependSuffix) -MM GLWindow.cpp

$(IntermediateDirectory)/GLWindow.cpp$(PreprocessSuffix): GLWindow.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/GLWindow.cpp$(PreprocessSuffix) GLWindow.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/src_GameCore_GameBlock.cpp$(ObjectSuffix): src/GameCore/GameBlock.cpp $(IntermediateDirectory)/src_GameCore_GameBlock.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GameCore/GameBlock.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameCore_GameBlock.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameCore_GameBlock.cpp$(DependSuffix): src/GameCore/GameBlock.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameCore_GameBlock.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameCore_GameBlock.cpp$(DependSuffix) -MM src/GameCore/GameBlock.cpp

$(IntermediateDirectory)/src_GameCore_GameBlock.cpp$(PreprocessSuffix): src/GameCore/GameBlock.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameCore_GameBlock.cpp$(PreprocessSuffix) src/GameCore/GameBlock.cpp

$(IntermediateDirectory)/src_GameCore_GameAnimal.cpp$(ObjectSuffix): src/GameCore/GameAnimal.cpp $(IntermediateDirectory)/src_GameCore_GameAnimal.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GameCore/GameAnimal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameCore_GameAnimal.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameCore_GameAnimal.cpp$(DependSuffix): src/GameCore/GameAnimal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameCore_GameAnimal.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameCore_GameAnimal.cpp$(DependSuffix) -MM src/GameCore/GameAnimal.cpp

$(IntermediateDirectory)/src_GameCore_GameAnimal.cpp$(PreprocessSuffix): src/GameCore/GameAnimal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameCore_GameAnimal.cpp$(PreprocessSuffix) src/GameCore/GameAnimal.cpp

$(IntermediateDirectory)/src_GameCore_EventGameMap.cpp$(ObjectSuffix): src/GameCore/EventGameMap.cpp $(IntermediateDirectory)/src_GameCore_EventGameMap.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GameCore/EventGameMap.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameCore_EventGameMap.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameCore_EventGameMap.cpp$(DependSuffix): src/GameCore/EventGameMap.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameCore_EventGameMap.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameCore_EventGameMap.cpp$(DependSuffix) -MM src/GameCore/EventGameMap.cpp

$(IntermediateDirectory)/src_GameCore_EventGameMap.cpp$(PreprocessSuffix): src/GameCore/EventGameMap.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameCore_EventGameMap.cpp$(PreprocessSuffix) src/GameCore/EventGameMap.cpp

$(IntermediateDirectory)/src_GameCore_GameMap.cpp$(ObjectSuffix): src/GameCore/GameMap.cpp $(IntermediateDirectory)/src_GameCore_GameMap.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GameCore/GameMap.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameCore_GameMap.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameCore_GameMap.cpp$(DependSuffix): src/GameCore/GameMap.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameCore_GameMap.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameCore_GameMap.cpp$(DependSuffix) -MM src/GameCore/GameMap.cpp

$(IntermediateDirectory)/src_GameCore_GameMap.cpp$(PreprocessSuffix): src/GameCore/GameMap.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameCore_GameMap.cpp$(PreprocessSuffix) src/GameCore/GameMap.cpp

$(IntermediateDirectory)/src_GameCore_EditSence.cpp$(ObjectSuffix): src/GameCore/EditSence.cpp $(IntermediateDirectory)/src_GameCore_EditSence.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/OpenGL/Game/Game/MoTa/src/GameCore/EditSence.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameCore_EditSence.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameCore_EditSence.cpp$(DependSuffix): src/GameCore/EditSence.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameCore_EditSence.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameCore_EditSence.cpp$(DependSuffix) -MM src/GameCore/EditSence.cpp

$(IntermediateDirectory)/src_GameCore_EditSence.cpp$(PreprocessSuffix): src/GameCore/EditSence.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameCore_EditSence.cpp$(PreprocessSuffix) src/GameCore/EditSence.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


