#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/HybridResourceFileSystem.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackInstance;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/HybridResourceFileSystem.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackInstance;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct HybridResourceLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OreUI::HybridResourceFileSystem> mFileSystem;
    ::ll::UntypedStorage<8, 24>                                 mPath;
    ::ll::TypedStorage<8, 8, ::PackInstance const*>             mPack;
    // NOLINTEND

public:
    // prevent constructor by default
    HybridResourceLocation& operator=(HybridResourceLocation const&);
    HybridResourceLocation(HybridResourceLocation const&);
    HybridResourceLocation();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct HybridResourceLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OreUI::HybridResourceFileSystem>  mFileSystem;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mPath;
    ::ll::TypedStorage<8, 8, ::PackInstance const*>              mPack;
    // NOLINTEND
};
#else // @header-generator platform
struct HybridResourceLocation {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
