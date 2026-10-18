#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class PauseScreenModel;
class PlayerListEntry;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class EduMultiplayerPauseMenuScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::vector<ActorUniqueID> const&>  mClientIds;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PauseScreenModel>> mPauseScreenModel;
    // NOLINTEND

public:
    // prevent constructor by default
    EduMultiplayerPauseMenuScreenController& operator=(EduMultiplayerPauseMenuScreenController const&);
    EduMultiplayerPauseMenuScreenController(EduMultiplayerPauseMenuScreenController const&);
    EduMultiplayerPauseMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduMultiplayerPauseMenuScreenController();

    virtual void onInit();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    EduMultiplayerPauseMenuScreenController(std::shared_ptr<PauseScreenModel>, std::vector<ActorUniqueID> const&);

    MCNAPI ::PlayerListEntry const& _getLevelLocalPlayerListEntry();

    MCNAPI void _registerBindings();
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
    MCNAPI void $onInit();

    MCNAPI void $addStaticScreenVars(::Json::Value&);
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
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class PauseScreenModel;
class PlayerListEntry;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class EduMultiplayerPauseMenuScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::vector<::ActorUniqueID> const&>  mClientIds;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PauseScreenModel>> mPauseScreenModel;
    // NOLINTEND

public:
    // prevent constructor by default
    EduMultiplayerPauseMenuScreenController& operator=(EduMultiplayerPauseMenuScreenController const&);
    EduMultiplayerPauseMenuScreenController(EduMultiplayerPauseMenuScreenController const&);
    EduMultiplayerPauseMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduMultiplayerPauseMenuScreenController() /*override*/;

    virtual void onInit() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduMultiplayerPauseMenuScreenController(
        ::std::shared_ptr<::PauseScreenModel> model,
        ::std::vector<::ActorUniqueID> const& clientIds
    );

    MCAPI ::PlayerListEntry const& _getLevelLocalPlayerListEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PauseScreenModel> model, ::std::vector<::ActorUniqueID> const& clientIds);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onInit();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
#else // @header-generator platform
class EduMultiplayerPauseMenuScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
