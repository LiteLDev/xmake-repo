#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResourcePath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                    path;
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem> fileSystem;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePath& operator=(ResourcePath const&);
    ResourcePath();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ResourcePath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> path;
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem>               fileSystem;
    // NOLINTEND
};
#else // @header-generator platform
struct ResourcePath {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
