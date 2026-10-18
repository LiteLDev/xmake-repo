#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptMessagePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mMessageId;
    ::ll::TypedStorage<8, 24, std::string> mMessageValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mMessageId;
    ::ll::TypedStorage<8, 32, ::std::string> mMessageValue;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptMessagePacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptMessagePacketPayload();
#else // @header-generator platform
    MCAPI ScriptMessagePacketPayload(::std::string const& messageId, ::std::string const& messageValue);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void* $ctor(::std::string const& messageId, ::std::string const& messageValue);
#endif // @header-generator platform
    // NOLINTEND
};
