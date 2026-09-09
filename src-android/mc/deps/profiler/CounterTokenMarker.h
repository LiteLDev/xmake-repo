#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/CounterDisplayFormat.h"

namespace Core::Profile {

class CounterTokenMarker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view>                     mName;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterDisplayFormat> mDisplayFormat;
    ::ll::TypedStorage<8, 24, std::vector<char>>                    mNameCache;
    // NOLINTEND
};

} // namespace Core::Profile
