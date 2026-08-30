#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
struct ManifestContentItem;
// clang-format on

class DlcDependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                           mPackIdentity;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const ManifestContentItem>> mManifestContentItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DlcDependency();

    MCNAPI DlcDependency(::DlcDependency const&);

    MCNAPI DlcDependency(::PackIdVersion const&, std::shared_ptr<const ManifestContentItem> const&);

    MCNAPI std::shared_ptr<const ManifestContentItem> const& getManifestContentItem() const;

    MCNAPI bool isValid() const;

    MCNAPI ~DlcDependency();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::DlcDependency const&);

    MCNAPI void* $ctor(::PackIdVersion const&, std::shared_ptr<const ManifestContentItem> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
