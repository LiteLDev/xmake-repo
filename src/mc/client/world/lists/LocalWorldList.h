#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/LevelListCacheObserver.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class GenericEntitlementChangeListener;
class IEntitlementManager;
class ILevelListCache;
class OptionRegistry;
class TrialManager;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class GenericEntitlementChangeListener;
class IEntitlementManager;
class ILevelListCache;
class OptionRegistry;
class TrialManager;
struct LevelSummary;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class LocalWorldList : public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>               mLevelListCache;
    ::ll::UntypedStorage<8, 24>                                mEntitlementManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OptionRegistry>> mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mStorageOptionSubscription;
    ::ll::UntypedStorage<8, 16>                                mEntitlementChangeListener;
    ::ll::TypedStorage<1, 1, bool>                             mOtherStorageContainsWorlds;
    ::ll::TypedStorage<1, 1, bool>                             mHasCompletedStorageCheck;
    ::ll::TypedStorage<4, 4, ::FileStorageDirectory>           mLastFileStorageDirectory;
    ::ll::TypedStorage<1, 1, bool const>                       mIsEditorMode;
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                             mLevelListCacheDirty;
    ::ll::TypedStorage<1, 1, bool>                             mAreTrialWorldsHidden;
    ::ll::TypedStorage<8, 24, std::vector<LevelSummary>>       mLocalWorldList;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldList& operator=(LocalWorldList const&);
    LocalWorldList(LocalWorldList const&);
    LocalWorldList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalWorldList();

    virtual void onLevelAdded(std::string const&, ::LevelListCacheObserver::LevelAddedType);

    virtual void onLevelUpdated(std::string const&);

    virtual void onLevelDeleted(std::string const&);

    virtual void onSummaryUpdated(std::string const&);

    virtual void onStorageChanged();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LocalWorldList(
        ::ILevelListCache&,
        std::shared_ptr<OptionRegistry>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        bool
    );

    MCNAPI void _checkIfOtherStorageContainsWorlds();

    MCNAPI void _filterWorlds(std::vector<LevelSummary>&, ::TrialManager const&, bool);

    MCNAPI bool const getOtherStorageContainsWorlds() const;

    MCNAPI std::vector<LevelSummary> const& getWorlds() const;

    MCNAPI bool isDirty() const;

    MCNAPI void onEntitlementRefresh();

    MCNAPI void update(::TrialManager const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ILevelListCache&,
        std::shared_ptr<OptionRegistry>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLevelAdded(std::string const&, ::LevelListCacheObserver::LevelAddedType);

    MCNAPI void $onLevelUpdated(std::string const&);

    MCNAPI void $onLevelDeleted(std::string const&);

    MCNAPI void $onSummaryUpdated(std::string const&);

    MCNAPI void $onStorageChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class LocalWorldList : public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                     mLevelListCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>  mEntitlementManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OptionRegistry>>                   mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mStorageOptionSubscription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GenericEntitlementChangeListener>> mEntitlementChangeListener;
    ::ll::TypedStorage<1, 1, bool>                                                   mOtherStorageContainsWorlds;
    ::ll::TypedStorage<1, 1, bool>                                                   mHasCompletedStorageCheck;
    ::ll::TypedStorage<4, 4, ::FileStorageDirectory>                                 mLastFileStorageDirectory;
    ::ll::TypedStorage<1, 1, bool const>                                             mIsEditorMode;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                                   mLevelListCacheDirty;
    ::ll::TypedStorage<1, 1, bool>                                                   mAreTrialWorldsHidden;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelSummary>>                         mLocalWorldList;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldList& operator=(LocalWorldList const&);
    LocalWorldList(LocalWorldList const&);
    LocalWorldList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalWorldList() /*override*/ = default;

    virtual void onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type) /*override*/;

    virtual void onLevelUpdated(::std::string const& levelId) /*override*/;

    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void onSummaryUpdated(::std::string const& levelId) /*override*/;

    virtual void onStorageChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalWorldList(
        ::ILevelListCache&                                   levelListCache,
        ::std::shared_ptr<::OptionRegistry>                  options,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        bool                                                 isEditorMode
    );

    MCAPI void _checkIfOtherStorageContainsWorlds();

    MCAPI void
    _filterWorlds(::std::vector<::LevelSummary>& worlds, ::TrialManager const& trialManager, bool isEditorMode);

    MCAPI void onEntitlementRefresh();

    MCAPI void update(::TrialManager const& trialManager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevelListCache&                                   levelListCache,
        ::std::shared_ptr<::OptionRegistry>                  options,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        bool                                                 isEditorMode
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type);

    MCAPI void $onLevelUpdated(::std::string const& levelId);

    MCAPI void $onLevelDeleted(::std::string const& levelId);

    MCAPI void $onSummaryUpdated(::std::string const& levelId);

    MCAPI void $onStorageChanged();
    // NOLINTEND
};
#else // @header-generator platform
class LocalWorldList {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
