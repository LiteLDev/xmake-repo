#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct PluginDetails {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mModuleId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk152c4e;
    ::ll::UntypedStorage<8, 32> mUnk1fd52c;
    // NOLINTEND

public:
    // prevent constructor by default
    PluginDetails& operator=(PluginDetails const&);
    PluginDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PluginDetails(::ScriptDebuggerMessages::PluginDetails const&);

    MCNAPI PluginDetails(::std::string name, ::std::string moduleId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::PluginDetails const&);

    MCNAPI void* $ctor(::std::string name, ::std::string moduleId);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
