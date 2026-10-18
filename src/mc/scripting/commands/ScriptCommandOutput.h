#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptCommandOutput {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>          mSuccessCount;
    ::ll::TypedStorage<8, 24, std::string> mMessages;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk93f5ed;
    ::ll::UntypedStorage<8, 32> mUnkf1c2b8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptCommandOutput& operator=(ScriptCommandOutput const&);
    ScriptCommandOutput(ScriptCommandOutput const&);
    ScriptCommandOutput();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptCommandOutput();

    MCNAPI std::string getMessages() const;

    MCNAPI int getSuccessCount() const;

    MCNAPI void setOutput(int, std::string&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCNAPI ::std::string getMessages() const;
#endif // @header-generator platform
    // NOLINTEND
};
