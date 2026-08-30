#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/CounterTokenMarker.h"
#include "mc/deps/profiler/platform/CounterTokenMicroProfile.h"
#include "mc/deps/profiler/platform/CounterTokenTracy.h"

namespace Core::Profile {

class CounterToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterTokenMicroProfile> mMicroProfile;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterTokenTracy>        mTracy;
    ::ll::TypedStorage<8, 48, ::Core::Profile::CounterTokenMarker>      mMarker;
    // NOLINTEND

public:
    // prevent constructor by default
    CounterToken& operator=(CounterToken const&);
    CounterToken(CounterToken const&);
};

} // namespace Core::Profile
