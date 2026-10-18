#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class SignBlockActor;
namespace Json { class Value; }
// clang-format on

class SignScreenController : public ::BlockScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>      mSignPosition;
    ::ll::TypedStorage<8, 24, std::string>     mMessage;
    ::ll::TypedStorage<1, 1, bool>             mKeyboardOpened;
    ::ll::TypedStorage<1, 1, bool>             mMessageDirty;
    ::ll::TypedStorage<1, 1, ::BlockActorType> mBlockActorType;
    ::ll::TypedStorage<4, 4, ::SignTextSide>   mSignSide;
    // NOLINTEND

public:
    // prevent constructor by default
    SignScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onTerminate();

    virtual void onLeave();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _isStillValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
        SignScreenController(std::shared_ptr<ClientInstanceScreenModel>, ::BlockPos, ::BlockActorType, ::SignTextSide);

    MCNAPI void _registerBindings();

    MCNAPI void _setMessageToSign(std::string);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_SIGN_TEXT_LENGTH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::BlockPos, ::BlockActorType, ::SignTextSide);
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

    MCNAPI void $onTerminate();

    MCNAPI void $onLeave();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI bool $_isStillValid() const;
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
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
namespace Json { class Value; }
// clang-format on

class SignScreenController : public ::BlockScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>      mSignPosition;
    ::ll::TypedStorage<8, 32, ::std::string>   mMessage;
    ::ll::TypedStorage<1, 1, bool>             mKeyboardOpened;
    ::ll::TypedStorage<1, 1, bool>             mMessageDirty;
    ::ll::TypedStorage<1, 1, ::BlockActorType> mBlockActorType;
    ::ll::TypedStorage<4, 4, ::SignTextSide>   mSignSide;
    // NOLINTEND

public:
    // prevent constructor by default
    SignScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onLeave() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual bool _isStillValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SignScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::BlockPos                                     signPosition,
        ::BlockActorType                               blockActorType,
        ::SignTextSide                                 signSide
    );

    MCAPI void _setMessageToSign(::std::string message);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::BlockPos                                     signPosition,
        ::BlockActorType                               blockActorType,
        ::SignTextSide                                 signSide
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onOpen();

    MCAPI void $onLeave();

    MCAPI void $onTerminate();

    MCAPI bool $_isStillValid() const;
    // NOLINTEND
};
#else // @header-generator platform
class SignScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
