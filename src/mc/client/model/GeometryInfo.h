#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Geometry;
// clang-format on

class GeometryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>           mName;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Geometry>> mPtr;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Geometry;
// clang-format on

class GeometryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>               mName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Geometry>> mPtr;
    // NOLINTEND
};
#else // @header-generator platform
class GeometryInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
