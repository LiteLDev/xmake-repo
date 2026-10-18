#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct CallStackEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> functionName;
    ::ll::TypedStorage<8, 24, std::string> fileName;
    ::ll::TypedStorage<4, 4, int>          lineNumber;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb53225;
    ::ll::UntypedStorage<8, 32> mUnkd3d571;
    ::ll::UntypedStorage<4, 4>  mUnk1bb804;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CallStackEntry& operator=(CallStackEntry const&);
#endif // @header-generator platform
    CallStackEntry();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI CallStackEntry(::Scripting::CallStackEntry const&);

#endif // @header-generator platform
    MCNAPI ~CallStackEntry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::CallStackEntry FromBacktrace(std::string_view);
#else // @header-generator platform
    MCNAPI static ::Scripting::CallStackEntry FromBacktrace(::std::string_view backtrace);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::CallStackEntry const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
