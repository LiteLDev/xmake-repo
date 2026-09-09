#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Generator.h"
#include "mc/world/level/chunk/RollingAverageTracker.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class GeneratorStatus; }
// clang-format on

class ScriptGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::pair<Scripting::ContextId, uint>> mGeneratorId;
    ::ll::UntypedStorage<8, 96>                                     mGenerator;
    ::ll::TypedStorage<8, 184, ::RollingAverageTracker>             mTimeTracker;
    ::ll::TypedStorage<1, 1, bool>                                  mIsDone;
    ::ll::TypedStorage<1, 1, bool>                                  mIsError;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGenerator& operator=(ScriptGenerator const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptGenerator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
