add_llvm_library(LLVMSelectionDAG
  CallingConvLower.cpp
  DAGCombiner.cpp
  FastISel.cpp
  LegalizeDAG.cpp
  LegalizeFloatTypes.cpp
  LegalizeIntegerTypes.cpp
  LegalizeTypes.cpp
  LegalizeTypesGeneric.cpp
  LegalizeVectorTypes.cpp
  ScheduleDAGSDNodes.cpp
  ScheduleDAGSDNodesEmit.cpp
  ScheduleDAGFast.cpp
  ScheduleDAGList.cpp
  ScheduleDAGRRList.cpp
  SelectionDAGBuild.cpp
  SelectionDAG.cpp
  SelectionDAGISel.cpp
  SelectionDAGPrinter.cpp
  TargetLowering.cpp
  )
