#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/EntryType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/social/PlatformUserProfileData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Json { class Value; }
namespace Parties { class PartySystem; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

class InviteScreenController : public ::MinecraftScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/social/PlatformUserProfileData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Json { class Value; }
namespace Parties { class PartySystem; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

class InviteScreenController : public ::MinecraftScreenController {
#else // @header-generator platform
class InviteScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // InviteScreenController inner types declare
    // clang-format off
    struct XboxLiveUserEntryData;
    struct PlatformUserEntryData;
    struct LinkedUserEntryData;
    // clang-format on

    // InviteScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct XboxLiveUserEntryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Social::XboxLiveUserProfileData const*> mUserProfileData;
        ::ll::TypedStorage<1, 1, bool>                                     mToggleState;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct XboxLiveUserEntryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Social::XboxLiveUserProfileData const*> mUserProfileData;
        ::ll::TypedStorage<1, 1, bool>                                     mToggleState;
        // NOLINTEND
    };
#else // @header-generator platform
    struct XboxLiveUserEntryData {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct PlatformUserEntryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::Social::PlatformUserProfileData> mUserProfileData;
        ::ll::TypedStorage<1, 1, bool>                                mToggleState;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PlatformUserEntryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 192, ::Social::PlatformUserProfileData> mUserProfileData;
        ::ll::TypedStorage<1, 1, bool>                                mToggleState;
        // NOLINTEND
    };
#else // @header-generator platform
    struct PlatformUserEntryData {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        PlatformUserEntryData& operator=(PlatformUserEntryData const&);
        PlatformUserEntryData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PlatformUserEntryData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct LinkedUserEntryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Social::XboxLiveUserProfileData const*> mXboxUserProfileData;
        ::ll::TypedStorage<8, 152, ::Social::PlatformUserProfileData>      mPlatformUserProfileData;
        ::ll::TypedStorage<1, 1, bool>                                     mToggleState;
        // NOLINTEND

    public:
        // prevent constructor by default
        LinkedUserEntryData& operator=(LinkedUserEntryData const&);
        LinkedUserEntryData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LinkedUserEntryData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<InviteScreenController::XboxLiveUserEntryData>> mXboxLiveEntries;
    ::ll::TypedStorage<8, 24, std::vector<InviteScreenController::PlatformUserEntryData>> mPlatformEntries;
    ::ll::TypedStorage<8, 24, std::vector<InviteScreenController::LinkedUserEntryData>>   mLinkedEntries;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                                      mDataRequestExistenceTracker;
    ::ll::TypedStorage<4, 4, int>                                                         mSelectedXboxCount;
    ::ll::TypedStorage<4, 4, int>                                                         mSelectedPlatformCount;
    ::ll::TypedStorage<4, 4, int>                                                         mSelectedLinkedAccountCount;
    ::ll::TypedStorage<4, 4, uint>                                                        mXboxOnlineOffset;
    ::ll::TypedStorage<4, 4, uint>                                                        mPlatformOnlineOffset;
    ::ll::TypedStorage<4, 4, uint>                                                        mLinkedAccountOnlineOffset;
    ::ll::TypedStorage<4, 24, std::array<uint, 6>>                                        mEntryPages;
    ::ll::TypedStorage<1, 1, bool>                                                        mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                        mInRealm;
    ::ll::TypedStorage<1, 1, bool>                                                        mCanManageRealmMembers;
    ::ll::TypedStorage<8, 608, ::Realms::World>                                           mCurrentRealm;
    ::ll::TypedStorage<1, 1, bool>                                                        mDataRefresh;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsLoadingFriends;
    ::ll::TypedStorage<4, 4, int>                                                         mNumFriendsToLoad;
    ::ll::TypedStorage<1, 1, bool>                                                        mShowLinkedAccounts;
    ::ll::TypedStorage<1, 1, bool>                                                        mShowPlatformInvites;
    ::ll::TypedStorage<1, 1, bool>                                                        mUsePagination;
    ::ll::TypedStorage<1, 1, bool>                                                        mMakePartyInvite;
    ::ll::TypedStorage<4, 4, uint>                                                        mEntriesPerPage;
    ::ll::UntypedStorage<8, 32>                                                           mPartySystem;
    // NOLINTEND

public:
    // prevent constructor by default
    InviteScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InviteScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void queueTitleNarration();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string _getButtonADescription();

    virtual std::string _getButtonXDescription();

    virtual std::string _getButtonYDescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
        InviteScreenController(std::shared_ptr<MinecraftScreenModel>, ::Bedrock::NonOwnerPointer<Parties::PartySystem>);

    MCNAPI void _addToDataList(::Social::XboxLiveUserProfileData const&);

    MCNAPI std::string _getHoverText(::Social::XboxLiveUserProfileData const*) const;

    MCNAPI std::string _getXboxLiveDisplayName(::Social::XboxLiveUserProfileData const*) const;

    MCNAPI void _registerBindings();

    MCNAPI void _sortDataList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, ::Bedrock::NonOwnerPointer<Parties::PartySystem>);
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

    MCNAPI void $queueTitleNarration();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $_getButtonADescription();

    MCNAPI std::string $_getButtonXDescription();

    MCNAPI std::string $_getButtonYDescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct LinkedUserEntryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Social::XboxLiveUserProfileData const*> mXboxUserProfileData;
        ::ll::TypedStorage<8, 192, ::Social::PlatformUserProfileData>      mPlatformUserProfileData;
        ::ll::TypedStorage<1, 1, bool>                                     mToggleState;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::InviteScreenController::XboxLiveUserEntryData>> mXboxLiveEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::InviteScreenController::PlatformUserEntryData>> mPlatformEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::InviteScreenController::LinkedUserEntryData>>   mLinkedEntries;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                            mDataRequestExistenceTracker;
    ::ll::TypedStorage<4, 4, int>                                                 mSelectedXboxCount;
    ::ll::TypedStorage<4, 4, int>                                                 mSelectedPlatformCount;
    ::ll::TypedStorage<4, 4, int>                                                 mSelectedLinkedAccountCount;
    ::ll::TypedStorage<4, 4, uint>                                                mXboxOnlineOffset;
    ::ll::TypedStorage<4, 4, uint>                                                mPlatformOnlineOffset;
    ::ll::TypedStorage<4, 4, uint>                                                mLinkedAccountOnlineOffset;
    ::ll::TypedStorage<4, 24, ::std::array<uint, 6>>                              mEntryPages;
    ::ll::TypedStorage<1, 1, bool>                                                mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                mInRealm;
    ::ll::TypedStorage<1, 1, bool>                                                mCanManageRealmMembers;
    ::ll::TypedStorage<8, 720, ::Realms::World>                                   mCurrentRealm;
    ::ll::TypedStorage<1, 1, bool>                                                mDataRefresh;
    ::ll::TypedStorage<1, 1, bool>                                                mIsLoadingFriends;
    ::ll::TypedStorage<4, 4, int>                                                 mNumFriendsToLoad;
    ::ll::TypedStorage<1, 1, bool>                                                mShowLinkedAccounts;
    ::ll::TypedStorage<1, 1, bool>                                                mShowPlatformInvites;
    ::ll::TypedStorage<1, 1, bool>                                                mUsePagination;
    ::ll::TypedStorage<1, 1, bool>                                                mMakePartyInvite;
    ::ll::TypedStorage<4, 4, uint>                                                mEntriesPerPage;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartySystem>> mPartySystem;
    // NOLINTEND

public:
    // prevent constructor by default
    InviteScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InviteScreenController() /*override*/ = default;

    virtual void queueTitleNarration() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual ::std::string _getButtonYDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InviteScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem> partySystem
    );

    MCAPI ::std::string _getHoverText(::Social::XboxLiveUserProfileData const* xboxUserProfileData) const;

    MCAPI ::std::string _getLinkedAccountFirstDisplayName(int const collectionIndex) const;

    MCAPI ::std::string _getLinkedAccountFriendTitleName(int const collectionIndex) const;

    MCAPI ::std::string _getPlatformDisplayName(int const collectionIndex) const;

    MCAPI ::std::string _getPlatformFriendTitleName(int const collectionIndex) const;

    MCAPI ::std::string _getXboxFriendTitleName(int const collectionIndex) const;

    MCAPI ::std::string _getXboxLiveDisplayName(::Social::XboxLiveUserProfileData const* xboxUserProfileData) const;

    MCAPI void _refreshXboxLiveFriendsData();

    MCAPI void _sortDataList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem> partySystem
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $queueTitleNarration();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::std::string $_getButtonADescription();

    MCAPI ::std::string $_getButtonXDescription();

    MCAPI ::std::string $_getButtonYDescription();
    // NOLINTEND
#else // @header-generator platform
    struct LinkedUserEntryData {};
#endif // @header-generator platform
#endif // @header-generator platform
};
