#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Settings__AsyncProgressCancelInfo.h"

namespace Settings {

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

} // namespace Settings
