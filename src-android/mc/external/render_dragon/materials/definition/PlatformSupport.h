#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

struct PlatformSupport {
public:
    // PlatformSupport inner types define
    using Container = std::bitset<13>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::bitset<13>> mSet;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::dragon::materials::PlatformSupport const& All();

    MCNAPI static ::dragon::materials::PlatformSupport const& Default();
    // NOLINTEND
};

} // namespace dragon::materials
