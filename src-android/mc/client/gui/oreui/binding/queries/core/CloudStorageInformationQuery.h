#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class CloudStorageInformationQuery : public ::OreUI::QueryBase<OreUI::CloudStorageInformationQuery> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&> mUserManager;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdate;
    ::ll::UntypedStorage<8, 152> mIsCloudStorageSupported;
    ::ll::UntypedStorage<8, 152> mStorageSize;
    ::ll::UntypedStorage<8, 152> mStorageUsed;
    ::ll::UntypedStorage<8, 168> mStorageAvailableSize;
    ::ll::UntypedStorage<8, 152> mStoragePercentage;
    ::ll::UntypedStorage<8, 152> mIsStorageFull;
    ::ll::UntypedStorage<8, 152> mIsStorageLow;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CloudStorageInformationQuery& operator=(CloudStorageInformationQuery const&);
    CloudStorageInformationQuery(CloudStorageInformationQuery const&);
    CloudStorageInformationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CloudStorageInformationQuery();

    virtual void update(double);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CloudStorageInformationQuery(::OreUI::ClientDependencies const&);

    MCNAPI void _tryUpdate();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(double);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
