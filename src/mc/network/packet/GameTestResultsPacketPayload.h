#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestResultsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mTestName;
    ::ll::TypedStorage<8, 24, std::string> mError;
    ::ll::TypedStorage<1, 1, bool>         mSucceeded;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mTestName;
    ::ll::TypedStorage<8, 32, ::std::string> mError;
    ::ll::TypedStorage<1, 1, bool>           mSucceeded;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GameTestResultsPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~GameTestResultsPacketPayload();
#else // @header-generator platform
    MCAPI GameTestResultsPacketPayload(::std::string const& testName, ::std::string const& error, bool succeeded);
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
    MCAPI void* $ctor(::std::string const& testName, ::std::string const& error, bool succeeded);
#endif // @header-generator platform
    // NOLINTEND
};
