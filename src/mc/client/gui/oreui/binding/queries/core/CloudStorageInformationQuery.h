#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class CloudStorageInformationQuery : public ::OreUI::QueryBase<::OreUI::CloudStorageInformationQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>                 mUserManager;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastUpdate;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>               mIsCloudStorageSupported;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>             mStorageSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>             mStorageUsed;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>      mStorageAvailableSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>              mStoragePercentage;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>               mIsStorageFull;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>               mIsStorageLow;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudStorageInformationQuery& operator=(CloudStorageInformationQuery const&);
    CloudStorageInformationQuery(CloudStorageInformationQuery const&);
    CloudStorageInformationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CloudStorageInformationQuery() /*override*/ = default;

    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CloudStorageInformationQuery(::OreUI::ClientDependencies const& client);

    MCAPI void _tryUpdate();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};
#else // @header-generator platform
class CloudStorageInformationQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
