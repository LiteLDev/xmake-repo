#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/ScoreboardCacheData.h"
#include "mc/world/scores/ObjectiveRenderType.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ResourceLocation;
class UserDataScreenController;
struct ActorUniqueID;
struct PlayerListInfo;
struct PlayerScore;
// clang-format on

class ScoreboardScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<UserDataScreenController>> mUserDataScreenController;
    ::ll::TypedStorage<8, 24, std::vector<ScoreboardCacheData>>          mSidebarCache;
    ::ll::TypedStorage<8, 24, std::vector<ScoreboardCacheData>>          mListCache;
    ::ll::UntypedStorage<8, 24>                                          mListUnscoredPlayers;
    ::ll::UntypedStorage<8, 48>                                          mNavigateToPermissionsCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ScoreboardScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScoreboardScreenController();

    virtual ::ui::DirtyFlag tick();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScoreboardScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        std::function<void(const ActorUniqueID&)>
    );

    MCNAPI ::PlayerListInfo _findPlayerListInfoForId(long) const;

    MCNAPI std::string _getPermissionIcon(::ActorUniqueID) const;

    MCNAPI ::ResourceLocation _getScoredPlayerIconInfo(int) const;

    MCNAPI ::ResourceLocation _getUnscoredPlayerIconInfo(int) const;

    MCNAPI void buildCacheFromDisplayInfo(
        std::vector<ScoreboardCacheData>&,
        std::vector<PlayerScore> const&,
        std::function<const std::string&(ActorUniqueID)> const&
    );

    MCNAPI std::shared_ptr<UserDataScreenController> getUserDataScreenController() const;

    MCNAPI bool isSidebarValid();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, std::function<void(const ActorUniqueID&)>);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
