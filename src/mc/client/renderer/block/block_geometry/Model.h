#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/block_geometry/Element.h"
#include "mc/common/GameVersion.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/common/GameVersion.h"

// auto generated forward declare list
// clang-format off
namespace BlockGeometry { struct Element; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace BlockGeometry {

#if defined(LL_PLAT_A) // @header-generator platform
struct Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::GameVersion>                                mVersion;
    ::ll::TypedStorage<8, 24, std::string>                                  mName;
    ::ll::TypedStorage<8, 24, std::string>                                  mParent;
    ::ll::TypedStorage<8, 24, std::vector<BlockGeometry::Element>>          mElements;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mTextureMap;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                     mTextureList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                     mTextureStack;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::GameVersion>                                      mVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mParent;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockGeometry::Element>>            mElements;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mTextureMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                       mTextureList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                       mTextureStack;
    // NOLINTEND
};
#else // @header-generator platform
struct Model {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BlockGeometry
