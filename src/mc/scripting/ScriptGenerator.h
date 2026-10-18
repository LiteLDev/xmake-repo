#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Generator.h"
#include "mc/world/level/chunk/RollingAverageTracker.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class GeneratorStatus; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ScriptGenerator {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::pair<Scripting::ContextId, uint>> mGeneratorId;
    ::ll::UntypedStorage<8, 96>                                     mGenerator;
    ::ll::TypedStorage<8, 184, ::RollingAverageTracker>             mTimeTracker;
    ::ll::TypedStorage<1, 1, bool>                                  mIsDone;
    ::ll::TypedStorage<1, 1, bool>                                  mIsError;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>   mUnk89b263;
    ::ll::UntypedStorage<8, 96>  mUnkff82ed;
    ::ll::UntypedStorage<8, 184> mUnked42f3;
    ::ll::UntypedStorage<1, 1>   mUnk6289a7;
    ::ll::UntypedStorage<1, 1>   mUnkbd63ee;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGenerator& operator=(ScriptGenerator const&);
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
    ScriptGenerator(ScriptGenerator const&);
    ScriptGenerator();
#endif // @header-generator platform
};
