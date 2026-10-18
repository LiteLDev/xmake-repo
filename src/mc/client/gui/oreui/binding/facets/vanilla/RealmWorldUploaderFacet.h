#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/UploadToRealmsError.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/world/level/storage/LevelDataWrapper.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class PlayScreenModel;
namespace OreUI { class Router; }
namespace World { class WorldEditor; }
namespace World { struct WorldData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/UploadToRealmsError.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/world/level/storage/LevelDataWrapper.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class PlayScreenModel;
namespace OreUI { class Router; }
namespace World { class WorldEditor; }
namespace World { struct WorldData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmWorldUploaderFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmWorldUploaderFacet> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmWorldUploaderFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmWorldUploaderFacet> {
#else // @header-generator platform
class RealmWorldUploaderFacet {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // RealmWorldUploaderFacet inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class FacetStatus : uchar {
        EnsureSignIn               = 0,
        SelectRealmsSlot           = 1,
        CreateWorld                = 2,
        CreateAndUploadToRealm     = 3,
        UploadToRealm              = 4,
        UploadActionFailed         = 5,
        Idle                       = 6,
        WaitingForRealmUpload      = 7,
        WaitingForPreviewRealmSlot = 8,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class FacetStatus : uchar {
        EnsureSignIn               = 0,
        SelectRealmsSlot           = 1,
        CreateWorld                = 2,
        CreateAndUploadToRealm     = 3,
        UploadToRealm              = 4,
        UploadActionFailed         = 5,
        Idle                       = 6,
        WaitingForRealmUpload      = 7,
        WaitingForPreviewRealmSlot = 8,
    };
#else // @header-generator platform
    enum class FacetStatus : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class UploadAction : uchar {
        None                   = 0,
        UploadToRealm          = 1,
        CreateAndUploadToRealm = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::WorldEditor&>                         mWorldEditor;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MainMenuScreenModel>>         mMainMenuScreenModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayScreenModel>>             mPlayScreenModel;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                              mUiRouter;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                 mTaskGroup;
    ::ll::TypedStorage<1, 1, ::OreUI::RealmWorldUploaderFacet::FacetStatus> mStatus;
    ::ll::UntypedStorage<1, 1>                                              mUploadAction;
    ::ll::UntypedStorage<8, 24>                                             mCurrentWorldId;
    ::ll::TypedStorage<8, 8, ::World::WorldData*>                           mCurrentWorldData;
    ::ll::TypedStorage<8, 608, ::Realms::World>                             mRealmWorld;
    ::ll::UntypedStorage<8, 1496>                                           mLevelDataWrapper;
    ::ll::UntypedStorage<8, 8>                                              mPreviewRealmId;
    ::ll::TypedStorage<4, 8, std::optional<OreUI::UploadToRealmsError>>     mUploadRealmWorldError;
    ::ll::UntypedStorage<4, 12>                                             mUploadRealmWorldTask;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldUploaderFacet& operator=(RealmWorldUploaderFacet const&);
    RealmWorldUploaderFacet(RealmWorldUploaderFacet const&);
    RealmWorldUploaderFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmWorldUploaderFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmWorldUploaderFacet(
        ::World::WorldEditor&,
        std::shared_ptr<MainMenuScreenModel>,
        std::shared_ptr<PlayScreenModel>,
        ::OreUI::Router&
    );

    MCNAPI void _selectRealmSlot();

    MCNAPI bool choosePreviewRealm() const;

    MCNAPI void clearUploadWorldToRealmTaskState();

    MCNAPI std::optional<OreUI::UploadToRealmsError> const& getUploadWorldToRealmError() const;

    MCNAPI ::OreUI::FacetTaskState getUploadWorldToRealmTaskState() const;

    MCNAPI long getUploadedRealmWorldId() const;

    MCNAPI void setPreviewRealmForUpload(std::string const&);

    MCNAPI void uploadWorldToRealm(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[32]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::World::WorldEditor&,
        std::shared_ptr<MainMenuScreenModel>,
        std::shared_ptr<PlayScreenModel>,
        ::OreUI::Router&
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
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class UploadAction : uchar {
        None                   = 0,
        UploadToRealm          = 1,
        CreateAndUploadToRealm = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::WorldEditor&>                          mWorldEditor;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>>      mMainMenuScreenModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>          mPlayScreenModel;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                               mUiRouter;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                  mTaskGroup;
    ::ll::TypedStorage<1, 1, ::OreUI::RealmWorldUploaderFacet::FacetStatus>  mStatus;
    ::ll::TypedStorage<1, 1, ::OreUI::RealmWorldUploaderFacet::UploadAction> mUploadAction;
    ::ll::TypedStorage<8, 32, ::World::WorldID>                              mCurrentWorldId;
    ::ll::TypedStorage<8, 8, ::World::WorldData*>                            mCurrentWorldData;
    ::ll::TypedStorage<8, 720, ::Realms::World>                              mRealmWorld;
    ::ll::TypedStorage<8, 1704, ::LevelDataWrapper>                          mLevelDataWrapper;
    ::ll::TypedStorage<8, 8, ::Realms::RealmId>                              mPreviewRealmId;
    ::ll::TypedStorage<4, 8, ::std::optional<::OreUI::UploadToRealmsError>>  mUploadRealmWorldError;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>>   mUploadRealmWorldTask;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldUploaderFacet& operator=(RealmWorldUploaderFacet const&);
    RealmWorldUploaderFacet(RealmWorldUploaderFacet const&);
    RealmWorldUploaderFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmWorldUploaderFacet(
        ::World::WorldEditor&                    worldEditor,
        ::std::shared_ptr<::MainMenuScreenModel> mainMenuScreenModel,
        ::std::shared_ptr<::PlayScreenModel>     playScreenModel,
        ::OreUI::Router&                         uiRouter
    );

    MCAPI bool choosePreviewRealm() const;

    MCAPI void clearUploadWorldToRealmTaskState();

    MCAPI ::std::optional<::OreUI::UploadToRealmsError> const& getUploadWorldToRealmError() const;

    MCAPI ::OreUI::FacetTaskState getUploadWorldToRealmTaskState() const;

    MCFOLD int64 getUploadedRealmWorldId() const;

    MCAPI void setPreviewRealmForUpload(::std::string const& realmIdStr);

    MCAPI void uploadWorldToRealm(::std::string const& worldID);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::World::WorldEditor&                    worldEditor,
        ::std::shared_ptr<::MainMenuScreenModel> mainMenuScreenModel,
        ::std::shared_ptr<::PlayScreenModel>     playScreenModel,
        ::OreUI::Router&                         uiRouter
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
#else // @header-generator platform
    enum class UploadAction : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
