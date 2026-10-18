#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class DeviceStorageInformationQuery : public ::OreUI::QueryBase<OreUI::DeviceStorageInformationQuery>,
                                      public ::Core::StorageAreaStateListener,
                                      public ::Bedrock::Threading::EnableQueueForMainThread {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class DeviceStorageInformationQuery : public ::OreUI::QueryBase<::OreUI::DeviceStorageInformationQuery>,
                                      public ::Core::StorageAreaStateListener,
                                      public ::Bedrock::Threading::EnableQueueForMainThread {
#else // @header-generator platform
class DeviceStorageInformationQuery {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // DeviceStorageInformationQuery inner types declare
    // clang-format off
    class ThrottledUpdater;
    // clang-format on

    // DeviceStorageInformationQuery inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class ThrottledUpdater {
    public:
        // ThrottledUpdater inner types define
        using Duration = std::chrono::duration<long long, std::ratio<1, 1>>;

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::UntypedStorage<8, 48> mCallable;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mDuration;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdate;
        // clang-format on
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>                                mStorageUpdater;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mDeleteContentSubscription;
    ::ll::UntypedStorage<8, 152>                               mIsUsingExternalStorage;
    ::ll::UntypedStorage<8, 152>                               mIsUsingAppDataStorage;
    ::ll::UntypedStorage<8, 152>                               mStorageSize;
    ::ll::UntypedStorage<8, 152>                               mStorageUsed;
    ::ll::UntypedStorage<8, 168>                               mStorageAvailableSize;
    ::ll::UntypedStorage<8, 152>                               mSupportsSizeQuery;
    ::ll::UntypedStorage<8, 152>                               mIsStorageFull;
    ::ll::UntypedStorage<8, 152>                               mIsStorageLow;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceStorageInformationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DeviceStorageInformationQuery();

    virtual void update(double);

    virtual void onLowDiskSpace(bool, ulong);

    virtual void onOutOfDiskSpace(bool, ulong);

    virtual void onExtendDiskSpace(bool, std::weak_ptr<Core::FileStorageArea> const&, ulong, std::function<void ()>);

    virtual void onCriticalDiskError(bool, ::Core::LevelStorageState const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DeviceStorageInformationQuery(::OreUI::GameDependencies const&);

    MCNAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
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

    MCNAPI void $onLowDiskSpace(bool, ulong);

    MCNAPI void $onOutOfDiskSpace(bool, ulong);

    MCNAPI void $onExtendDiskSpace(bool, std::weak_ptr<Core::FileStorageArea> const&, ulong, std::function<void()>);

    MCNAPI void $onCriticalDiskError(bool, ::Core::LevelStorageState const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class ThrottledUpdater {
    public:
        // ThrottledUpdater inner types define
        using Duration = ::std::chrono::seconds;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<void()>>                mCallable;
        ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                  mDuration;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastUpdate;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::OreUI::DeviceStorageInformationQuery::ThrottledUpdater> mStorageUpdater;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mDeleteContentSubscription;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mIsUsingExternalStorage;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mIsUsingAppDataStorage;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>                               mStorageSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>                               mStorageUsed;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                        mStorageAvailableSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mSupportsSizeQuery;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mIsStorageFull;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mIsStorageLow;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceStorageInformationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeviceStorageInformationQuery() /*override*/ = default;

    virtual void update(double) /*override*/;

    virtual void onLowDiskSpace(bool, uint64) /*override*/;

    virtual void onOutOfDiskSpace(bool, uint64) /*override*/;

    virtual void onExtendDiskSpace(
        bool,
        ::std::weak_ptr<::Core::FileStorageArea> const&,
        uint64,
        ::std::function<void()>
    ) /*override*/;

    virtual void onCriticalDiskError(bool, ::Core::LevelStorageState const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DeviceStorageInformationQuery(::OreUI::GameDependencies const& game);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);

    MCAPI void $onLowDiskSpace(bool, uint64);

    MCAPI void $onOutOfDiskSpace(bool, uint64);

    MCAPI void
    $onExtendDiskSpace(bool, ::std::weak_ptr<::Core::FileStorageArea> const&, uint64, ::std::function<void()>);

    MCAPI void $onCriticalDiskError(bool, ::Core::LevelStorageState const&);
    // NOLINTEND
#else // @header-generator platform
    class ThrottledUpdater {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
