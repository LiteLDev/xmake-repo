#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct BoundingBoxData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mOrigin;
    ::ll::TypedStorage<4, 12, ::Vec3> mSize;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& OriginId();

    MCAPI static ::std::string_view const& SizeId();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
