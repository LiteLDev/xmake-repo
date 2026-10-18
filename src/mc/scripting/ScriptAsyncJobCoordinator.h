#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Generator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/ScriptGenerator.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IScriptGeneratorStats;
struct ServerScriptManagerEvents;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct ContextId; }
#endif // @header-generator platform
// clang-format on

class ScriptAsyncJobCoordinator {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                                                    mNextGeneratorId;
    ::ll::TypedStorage<8, 24, std::vector<ScriptGenerator>>                                           mPendingAdd;
    ::ll::TypedStorage<8, 40, std::unordered_map<Scripting::ContextId, std::vector<ScriptGenerator>>> mGeneratorBuckets;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                        mReloadSub;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk47ca32;
    ::ll::UntypedStorage<8, 24> mUnk18eeba;
    ::ll::UntypedStorage<8, 64> mUnk1652bf;
    ::ll::UntypedStorage<8, 16> mUnkee32eb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptAsyncJobCoordinator& operator=(ScriptAsyncJobCoordinator const&);
    ScriptAsyncJobCoordinator(ScriptAsyncJobCoordinator const&);
#endif // @header-generator platform
    ScriptAsyncJobCoordinator();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptAsyncJobCoordinator(::ServerScriptManagerEvents&);
#else // @header-generator platform
    MCNAPI explicit ScriptAsyncJobCoordinator(::ServerScriptManagerEvents& events);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint addGenerator(::Scripting::Generator<void, void, void>&&);
#else // @header-generator platform
    MCNAPI uint addGenerator(::Scripting::Generator<void, void, void>&& generator);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void process(std::chrono::duration<long long, std::ratio<1, 1000000>>, ::IScriptGeneratorStats*);
#else // @header-generator platform
    MCNAPI void process(::std::chrono::microseconds timeSlice, ::IScriptGeneratorStats* stats);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeGenerator(::Scripting::ContextId, uint);
#else // @header-generator platform
    MCNAPI void removeGenerator(::Scripting::ContextId originatingContextId, uint generatorId);
#endif // @header-generator platform

    MCNAPI ~ScriptAsyncJobCoordinator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerScriptManagerEvents&);
#else // @header-generator platform
    MCNAPI void* $ctor(::ServerScriptManagerEvents& events);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
