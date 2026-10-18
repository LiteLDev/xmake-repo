#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/block_geo_type/GeoType.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/block_geo_type/GeoType.h"
#include "mc/deps/core/string/HashedString.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace BlockGeoType {

#if defined(LL_PLAT_A) // @header-generator platform
class GeoTypeResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, BlockGeoType::GeoType>> mGeoTypeMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeoTypeResolver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GeoTypeResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::BlockGeoType::GeoType>> mGeoTypeMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeoTypeResolver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
class GeoTypeResolver {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BlockGeoType
