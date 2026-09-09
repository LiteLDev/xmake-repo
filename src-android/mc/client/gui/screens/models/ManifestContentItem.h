#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
