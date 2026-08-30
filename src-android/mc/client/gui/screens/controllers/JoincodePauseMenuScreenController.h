#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/EduMultiplayerPauseMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/jpmsc/Inputs.h"
#include "mc/client/social/edu_discovery/DiscoveryObserver.h"
#include "mc/client/social/edu_discovery/ServerStatus.h"

// auto generated forward declare list
// clang-format off
class IEDUDiscoveryService;
class PauseScreenModel;
struct ActorUniqueID;
namespace EDUDiscovery { struct JoinCode; }
namespace EDUDiscovery { struct ServerInvalidationDetails; }
namespace Json { class Value; }
// clang-format on

class JoincodePauseMenuScreenController : public ::EduMultiplayerPauseMenuScreenController,
                                          public ::EDUDiscovery::DiscoveryObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mJoinCodeNeedsRefresh;
    ::ll::TypedStorage<4, 4, int>  mCurrentJoincodeFetchingAnim;
    ::ll::UntypedStorage<4, 4>     mJoincodeFetchingAnimCount;
    ::ll::UntypedStorage<8, 48>    mCheckForServiceDialog;
    ::ll::UntypedStorage<1, 16>    mHoveredInputs;
    // NOLINTEND

public:
    // prevent constructor by default
    JoincodePauseMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JoincodePauseMenuScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual void onServerInvalidated(::EDUDiscovery::ServerInvalidationDetails const&);

    virtual void onJoinCodeGenerated(::EDUDiscovery::JoinCode const&);

    virtual void onCredentialsInvalidated();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JoincodePauseMenuScreenController(std::shared_ptr<PauseScreenModel>, std::vector<ActorUniqueID> const&);

    MCNAPI std::string _getJoincodeUri();

    MCNAPI std::string _getNetworkId();

    MCNAPI void _launchShareUri(std::string const&, std::string const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<PauseScreenModel>, std::vector<ActorUniqueID> const&);
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

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI void $onServerInvalidated(::EDUDiscovery::ServerInvalidationDetails const&);

    MCNAPI void $onJoinCodeGenerated(::EDUDiscovery::JoinCode const&);

    MCNAPI void $onCredentialsInvalidated();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
