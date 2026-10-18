#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/IRuntimeMetadata.h"

struct ScriptRuntimeMetadata : public ::Scripting::IRuntimeMetadata {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mIdentifier;
    ::ll::TypedStorage<1, 1, bool>         mCanFlushCoroutines;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkc88c09;
    ::ll::UntypedStorage<1, 1>  mUnk97958d;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptRuntimeMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ScriptRuntimeMetadata& operator=(ScriptRuntimeMetadata const&);
    ScriptRuntimeMetadata(ScriptRuntimeMetadata const&);
    ScriptRuntimeMetadata();
#endif // @header-generator platform
};
