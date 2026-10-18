#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/client/gui/screens/models/ContentItemType.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
struct ContentSource;
// clang-format on

struct ManifestContentItem : public ::ContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<const PackManifest>> mManifest;
    ::ll::UntypedStorage<8, 24>                                   mIconPath;
    ::ll::UntypedStorage<8, 24>                                   mZipPath;
    ::ll::TypedStorage<8, 24, std::string>                        mFileSystem;
    // NOLINTEND

public:
    // prevent constructor by default
    ManifestContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ManifestContentItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
// clang-format on

struct ManifestContentItem : public ::ContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackManifest const>> mManifest;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mIconPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mZipPath;
    ::ll::TypedStorage<8, 32, ::std::string>                          mFileSystem;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ManifestContentItem() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
struct ManifestContentItem {};
#endif // @header-generator platform
#endif // @header-generator platform
