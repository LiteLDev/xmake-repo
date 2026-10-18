#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/EduMultiplayerPauseMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class PauseScreenModel;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class EduHeadlessPauseMenuScreenController : public ::EduMultiplayerPauseMenuScreenController {
public:
    // prevent constructor by default
    EduHeadlessPauseMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduHeadlessPauseMenuScreenController();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduHeadlessPauseMenuScreenController(std::shared_ptr<PauseScreenModel>, std::vector<ActorUniqueID> const&);

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
#include "mc/client/gui/screens/controllers/EduMultiplayerPauseMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class PauseScreenModel;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class EduHeadlessPauseMenuScreenController : public ::EduMultiplayerPauseMenuScreenController {
public:
    // prevent constructor by default
    EduHeadlessPauseMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduHeadlessPauseMenuScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduHeadlessPauseMenuScreenController(
        ::std::shared_ptr<::PauseScreenModel> model,
        ::std::vector<::ActorUniqueID> const& clientIds
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PauseScreenModel> model, ::std::vector<::ActorUniqueID> const& clientIds);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
class EduHeadlessPauseMenuScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
