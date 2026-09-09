#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/CPUProfileTokenMarker.h"
#include "mc/deps/profiler/platform/CPUProfileTokenMicroProfile.h"
#include "mc/deps/profiler/platform/CPUProfileTokenTracy.h"

namespace Core::Profile {

class ScopeToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Core::Profile::CPUProfileTokenMicroProfile> mMicroProfile;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CPUProfileTokenTracy>        mTracy;
    ::ll::TypedStorage<8, 96, ::Core::Profile::CPUProfileTokenMarker>      mMarker;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeToken& operator=(ScopeToken const&);
    ScopeToken(ScopeToken const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScopeToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core::Profile
