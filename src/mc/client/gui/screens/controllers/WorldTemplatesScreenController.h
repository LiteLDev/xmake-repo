#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/CreateWorldOrRealm.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/resources/InvalidPacksFilterGroup.h"
#include "mc/world/WorldTemplateInfo.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class PlatformMultiplayerRestrictions;
class PlayScreenModel;
class UIPropertyBag;
struct PackIdVersion;
namespace Json { class Value; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class WorldTemplatesScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayScreenModel>> mPlayScreenModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcUIWrapper>> mDlcUIWrapper;
    ::ll::TypedStorage<8, 24, std::string> mFilter;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup> mInvalidPacksFilter;
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mInvalidPacks;
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mLoadingPacks;
    ::ll::TypedStorage<8, 24, std::vector<WorldTemplateInfo>> mPremiumTemplates;
    ::ll::TypedStorage<8, 24, std::vector<WorldTemplateInfo>> mCustomTemplates;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLocalTemplateUpdateTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mUpdateTime;
    ::ll::TypedStorage<4, 4, ::CreateWorldOrRealm> mType;
    ::ll::TypedStorage<1, 1, bool> mHideTopBar;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::UntypedStorage<8, 16> mScreenTechStackSelector;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatesScreenController& operator=(WorldTemplatesScreenController const&);
    WorldTemplatesScreenController(WorldTemplatesScreenController const&);
    WorldTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplatesScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual int getScreenVersion() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplatesScreenController(std::shared_ptr<PlayScreenModel>, ::ui::ScreenTechStackSelector const&, bool);

    MCNAPI void _createWorldTemplate(::PackIdVersion const&, std::function<void(bool)>);

    MCNAPI void _fetchDownloadedWorldTemplates();

    MCNAPI void _handleWorldTemplateClicked(::WorldTemplateInfo const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> const& DEFAULT_WORLD_SCREENSHOT();

    MCNAPI static std::string const& INVALID_WORLD_SCREENSHOT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<PlayScreenModel>, ::ui::ScreenTechStackSelector const&, bool);
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

    MCNAPI void $onOpen();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI int $getScreenVersion() const;
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
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/CreateWorldOrRealm.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/InvalidPacksFilterGroup.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class PlatformMultiplayerRestrictions;
class PlayScreenModel;
class ResourceLocation;
struct PackIdVersion;
struct WorldTemplateInfo;
namespace Json { class Value; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class WorldTemplatesScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>                mPlayScreenModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>                    mDlcUIWrapper;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mFilter;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup>                           mInvalidPacksFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>>                   mInvalidPacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>>                   mLoadingPacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::WorldTemplateInfo>>                  mPremiumTemplates;
    ::ll::TypedStorage<8, 24, ::std::vector<::WorldTemplateInfo>>                  mCustomTemplates;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mLocalTemplateUpdateTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mUpdateTime;
    ::ll::TypedStorage<4, 4, ::CreateWorldOrRealm>                                 mType;
    ::ll::TypedStorage<1, 1, bool>                                                 mHideTopBar;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector const&>                 mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatesScreenController& operator=(WorldTemplatesScreenController const&);
    WorldTemplatesScreenController(WorldTemplatesScreenController const&);
    WorldTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplatesScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual int getScreenVersion() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldTemplatesScreenController(
        ::std::shared_ptr<::PlayScreenModel> model,
        ::ui::ScreenTechStackSelector const& screenTechStackSelector,
        bool                                 hideTopBar
    );

    MCAPI void _createWorldTemplate(::PackIdVersion const& packId, ::std::function<void(bool)> successCallback);

    MCAPI void _fetchDownloadedWorldTemplates();

    MCAPI void _handleWorldTemplateClicked(::WorldTemplateInfo const& level);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string> const& DEFAULT_WORLD_SCREENSHOT();

    MCAPI static ::std::string const& INVALID_WORLD_SCREENSHOT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::PlayScreenModel> model,
        ::ui::ScreenTechStackSelector const& screenTechStackSelector,
        bool                                 hideTopBar
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD int $getScreenVersion() const;
    // NOLINTEND
};
#else // @header-generator platform
class WorldTemplatesScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
