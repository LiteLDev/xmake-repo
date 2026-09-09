#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/script_engine/scripting/Generator.h"
#include "mc/scripting/ScriptGenerator.h"

// auto generated forward declare list
// clang-format off
class IScriptGeneratorStats;
struct ServerScriptManagerEvents;
// clang-format on

class ScriptAsyncJobCoordinator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                                    mNextGeneratorId;
    ::ll::TypedStorage<8, 24, std::vector<ScriptGenerator>>                                           mPendingAdd;
    ::ll::TypedStorage<8, 40, std::unordered_map<Scripting::ContextId, std::vector<ScriptGenerator>>> mGeneratorBuckets;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                        mReloadSub;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncJobCoordinator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptAsyncJobCoordinator(::ServerScriptManagerEvents&);

    MCNAPI uint addGenerator(::Scripting::Generator<void, void, void>&&);

    MCNAPI void process(std::chrono::duration<long long, std::ratio<1, 1000000>>, ::IScriptGeneratorStats*);

    MCNAPI void removeGenerator(::Scripting::ContextId, uint);

    MCNAPI ~ScriptAsyncJobCoordinator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerScriptManagerEvents&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
