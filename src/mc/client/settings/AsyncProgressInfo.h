#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/Settings__AsyncProgressCancelInfo.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/AsyncProgressCancelInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
struct AsyncProgressInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                      mTitle;
    ::ll::TypedStorage<8, 24, std::string>                                      mDescription;
    ::ll::TypedStorage<8, 96, std::optional<Settings::AsyncProgressCancelInfo>> mCancelInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncProgressInfo& operator=(AsyncProgressInfo const&);
    AsyncProgressInfo(AsyncProgressInfo const&);
    AsyncProgressInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AsyncProgressInfo(::Settings::AsyncProgressInfo&&);

    MCNAPI ~AsyncProgressInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Settings::AsyncProgressInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AsyncProgressInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                         mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mDescription;
    ::ll::TypedStorage<8, 104, ::std::optional<::Settings::AsyncProgressCancelInfo>> mCancelInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncProgressInfo& operator=(AsyncProgressInfo const&);
    AsyncProgressInfo(AsyncProgressInfo const&);
    AsyncProgressInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Settings::AsyncProgressInfo& operator=(::Settings::AsyncProgressInfo&&);

    MCAPI ~AsyncProgressInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct AsyncProgressInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
