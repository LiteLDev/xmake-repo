#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/PackListType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/resources/InvalidPacksFilterGroup.h"
#include "mc/resources/PackScope.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class ContentView;
class DlcChecker;
class DlcUIWrapper;
class IContentManager;
class IContentManagerContext;
class MainMenuScreenModel;
class MultiplayerLockState;
class UIPropertyBag;
struct ContentItem;
struct ManifestContentItem;
struct MoveResourcePackResult;
struct PackContentItem;
struct PackMoveResult;
// clang-format on

class ResourcePacksScreenController : public ::SettingsScreenControllerBase {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/PackListType.h"
#include "mc/resources/InvalidPacksFilterGroup.h"
#include "mc/resources/PackScope.h"

// auto generated forward declare list
// clang-format off
class ContentView;
class DlcChecker;
class DlcUIWrapper;
class IContentManager;
class IContentManagerContext;
class MainMenuScreenModel;
class MultiplayerLockState;
class ResourceLocation;
class UIPropertyBag;
struct ContentItem;
struct MoveResourcePackResult;
struct PackContentItem;
struct PackIdVersion;
// clang-format on

class ResourcePacksScreenController : public ::SettingsScreenControllerBase {
#else // @header-generator platform
class ResourcePacksScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ResourcePacksScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class PackRestriction : int {
        Unrestricted = 0,
        Restricted   = 1,
    };

    using ContentItemPtr = std::shared_ptr<ContentItem>;

    using PackContentItemPtr = std::shared_ptr<PackContentItem>;

    using ConstContentItemPtr = std::shared_ptr<const ContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::IContentManager&> mContentManager;
    ::ll::TypedStorage<8, 8, ::ContentView*> mSelectedContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*> mAvailableContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*> mRealmsContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*> mInvalidContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*> mUnownedContentView;
    ::ll::TypedStorage<1, 1, ::PackScope> mScope;
    ::ll::TypedStorage<8, 8, ulong> mSelectedId;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistanceTracker;
    ::ll::TypedStorage<8, 8, ::ResourcePacksScreenController*> mOtherPacksTabController;
    ::ll::TypedStorage<8, 8, ::ContentType> mContentType;
    ::ll::TypedStorage<4, 4, uint> mIconIndex;
    ::ll::TypedStorage<1, 1, bool> mChooseFromActive;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup> mInvalidPacksFilter;
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mInvalidPacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcUIWrapper>> mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::MultiplayerLockState&> mMultiplayerState;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>> const> mTwoSecondInterval;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastIconCycle;
    ::ll::TypedStorage<1, 1, bool> mSelectedContentUpdated;
    ::ll::TypedStorage<1, 1, bool> mRepopulateReports;
    ::ll::TypedStorage<1, 1, bool> mRepopulatingReports;
    ::ll::TypedStorage<1, 1, bool> mSelectedExpanded;
    ::ll::TypedStorage<1, 1, bool> mAvailableExpanded;
    ::ll::TypedStorage<1, 1, bool> mRealmsExpanded;
    ::ll::TypedStorage<1, 1, bool> mUnownedExpanded;
    ::ll::TypedStorage<1, 1, bool> mDoNotShowAddonWarning;
    ::ll::TypedStorage<1, 1, bool> mGetInitialSelectedPacks;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>> mInitialSelectedPacks;
    ::ll::TypedStorage<8, 24, std::string> mInitialPackId;
    ::ll::UntypedStorage<8, 48> mCopyWorldCallback;
    ::ll::UntypedStorage<8, 48> mIsWorldTemplateOptionLockedCallback;
    ::ll::UntypedStorage<8, 16> mDlcChecker;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePacksScreenController& operator=(ResourcePacksScreenController const&);
    ResourcePacksScreenController(ResourcePacksScreenController const&);
    ResourcePacksScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePacksScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePacksScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::IContentManager&,
        ::ContentType,
        ::InvalidPacksFilterGroup,
        ::PackScope,
        ::MultiplayerLockState&,
        ::IContentManagerContext&,
        ::ResourcePacksScreenController*,
        std::function<bool()>,
        std::function<void()>,
        std::string const
    );

    MCNAPI void _confirmationRestrictedPacksOnWorldDialog(
        ::PackContentItem&,
        ::ContentView&,
        int,
        ::PackListType,
        ::ResourcePacksScreenController::PackRestriction
    );

    MCNAPI ::ContentView* _getContentView(::UIPropertyBag*) const;

    MCNAPI ::ResourceLocation _getInvalidResource(int) const;

    MCNAPI ::ui::ViewRequest _handleAvailablePackClicked(::UIPropertyBag*);

    MCNAPI ::ui::ViewRequest _handleSortPackClicked(::UIPropertyBag*, int);

    MCNAPI bool _hasRestrictedContent(::ContentView&) const;

    MCNAPI bool _launchPlatformLockedDialogIfNeeded(
        ::PackContentItem&,
        ::ContentView&,
        int,
        ::PackListType,
        bool,
        bool,
        std::function<void()>
    );

    MCNAPI void _movePackAfterDataPackWarningMessage(::MoveResourcePackResult);

    MCNAPI void _moveResource(std::shared_ptr<PackContentItem> const&, ::ContentView*, int, ::PackListType, bool, bool);

    MCNAPI void _registerBindings();

    MCNAPI void _removeSelectedPacks(int);

    MCNAPI void _showMissingDependencyMessage(::ContentView*, int, ::PackListType);

    MCNAPI void _tryMoveResource(std::shared_ptr<PackContentItem> const&, ::ContentView*, int, ::PackListType, bool);

    MCNAPI void activatePack(std::string const);

    MCNAPI void setOtherPacksTabController(::ResourcePacksScreenController*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& MAX_UNOWNED_ITEMS_SHOWN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        ::IContentManager&,
        ::ContentType,
        ::InvalidPacksFilterGroup,
        ::PackScope,
        ::MultiplayerLockState&,
        ::IContentManagerContext&,
        ::ResourcePacksScreenController*,
        std::function<bool()>,
        std::function<void()>,
        std::string const
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
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class PackRestriction : int {
        Unrestricted = 0,
        Restricted   = 1,
    };

    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ContentItemPtr = ::std::shared_ptr<::ContentItem>;

    using PackContentItemPtr = ::std::shared_ptr<::PackContentItem>;

    using ConstPackContentItemPtr = ::std::shared_ptr<::PackContentItem const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>                      mContentManager;
    ::ll::TypedStorage<8, 8, ::ContentView*>                          mSelectedContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*>                          mAvailableContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*>                          mRealmsContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*>                          mInvalidContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*>                          mUnownedContentView;
    ::ll::TypedStorage<1, 1, ::PackScope>                             mScope;
    ::ll::TypedStorage<8, 8, uint64>                                  mSelectedId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                mExistanceTracker;
    ::ll::TypedStorage<8, 8, ::ResourcePacksScreenController*>        mOtherPacksTabController;
    ::ll::TypedStorage<8, 8, ::ContentType>                           mContentType;
    ::ll::TypedStorage<4, 4, uint>                                    mIconIndex;
    ::ll::TypedStorage<1, 1, bool>                                    mChooseFromActive;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup>              mInvalidPacksFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>>      mInvalidPacks;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>       mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::MultiplayerLockState&>                 mMultiplayerState;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds const>            mTwoSecondInterval;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastIconCycle;
    ::ll::TypedStorage<1, 1, bool>                                    mSelectedContentUpdated;
    ::ll::TypedStorage<1, 1, bool>                                    mRepopulateReports;
    ::ll::TypedStorage<1, 1, bool>                                    mRepopulatingReports;
    ::ll::TypedStorage<1, 1, bool>                                    mSelectedExpanded;
    ::ll::TypedStorage<1, 1, bool>                                    mAvailableExpanded;
    ::ll::TypedStorage<1, 1, bool>                                    mRealmsExpanded;
    ::ll::TypedStorage<1, 1, bool>                                    mUnownedExpanded;
    ::ll::TypedStorage<1, 1, bool>                                    mDoNotShowAddonWarning;
    ::ll::TypedStorage<1, 1, bool>                                    mGetInitialSelectedPacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>         mInitialSelectedPacks;
    ::ll::TypedStorage<8, 32, ::std::string>                          mInitialPackId;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                mCopyWorldCallback;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                mIsWorldTemplateOptionLockedCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcChecker>>         mDlcChecker;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePacksScreenController& operator=(ResourcePacksScreenController const&);
    ResourcePacksScreenController(ResourcePacksScreenController const&);
    ResourcePacksScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePacksScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePacksScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::IContentManager&                       contentManager,
        ::ContentType                            type,
        ::InvalidPacksFilterGroup                invalidFilter,
        ::PackScope                              scope,
        ::MultiplayerLockState&                  multiplayerState,
        ::IContentManagerContext&                contentManagerContext,
        ::ResourcePacksScreenController*         otherPacksTabController,
        ::std::function<bool()>                  templateOptionLockGetter,
        ::std::function<void()>                  copyWorld,
        ::std::string                            initialPackId
    );

    MCAPI void _confirmationRestrictedPacksOnWorldDialog(
        ::PackContentItem&                               packItem,
        ::ContentView&                                   contentView,
        int                                              collectionIndex,
        ::PackListType                                   fromPackList,
        ::ResourcePacksScreenController::PackRestriction restriction
    );

    MCAPI ::ContentView* _getContentView(::UIPropertyBag* bag) const;

    MCAPI ::ResourceLocation _getInvalidResource(int slot) const;

    MCAPI ::ui::ViewRequest _handleAvailablePackClicked(::UIPropertyBag* bag);

    MCAPI ::ui::ViewRequest _handleSortPackClicked(::UIPropertyBag* bag, int dir);

    MCAPI bool _launchPlatformLockedDialogIfNeeded(
        ::PackContentItem&      packItem,
        ::ContentView&          contentView,
        int                     collectionIndex,
        ::PackListType          fromPackList,
        bool                    moveDependencies,
        bool                    forceMove,
        ::std::function<void()> moveCallback
    );

    MCAPI void _movePackAfterDataPackWarningMessage(::MoveResourcePackResult result);

    MCAPI void _moveResource(
        ::std::shared_ptr<::PackContentItem> const& item,
        ::ContentView*                              contentView,
        int                                         collectionIndex,
        ::PackListType                              fromPackList,
        bool,
        bool forceMove
    );

    MCAPI void _registerBindings();

    MCAPI void _removeSelectedPacks(int beginAtIndex);

    MCAPI void _showMissingDependencyMessage(::ContentView* contentView, int index, ::PackListType fromPacks);

    MCAPI void _tryMoveResource(
        ::std::shared_ptr<::PackContentItem> const& packItem,
        ::ContentView*                              contentView,
        int                                         collectionIndex,
        ::PackListType                              fromPackList,
        bool                                        forceMove
    );

    MCAPI void activatePack(::std::string const packId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _hasRestrictedContent(::ContentView& view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::IContentManager&                       contentManager,
        ::ContentType                            type,
        ::InvalidPacksFilterGroup                invalidFilter,
        ::PackScope                              scope,
        ::MultiplayerLockState&                  multiplayerState,
        ::IContentManagerContext&                contentManagerContext,
        ::ResourcePacksScreenController*         otherPacksTabController,
        ::std::function<bool()>                  templateOptionLockGetter,
        ::std::function<void()>                  copyWorld,
        ::std::string                            initialPackId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);
    // NOLINTEND
#else // @header-generator platform
    enum class PackRestriction : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
