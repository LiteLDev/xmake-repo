#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/IFileStorageAreaFetcher.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FileStorageAreaFetcher : public ::Core::IFileStorageAreaFetcher {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FileStorageAreaFetcher();

    virtual ::Core::Result getStorageAreaForPath(std::shared_ptr<Core::FileStorageArea>&, ::Core::PathView) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Core::Result
    getStorageAreaForPath(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $getStorageAreaForPath(std::shared_ptr<Core::FileStorageArea>&, ::Core::PathView) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::Core::Result
    $getStorageAreaForPath(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
