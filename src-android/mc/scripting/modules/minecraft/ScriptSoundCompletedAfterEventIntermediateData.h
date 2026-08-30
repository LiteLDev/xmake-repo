#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptSoundCompletedAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSoundInstanceId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundCompletedAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptSoundCompletedAfterEventIntermediateData(std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
