#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
