#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/input/interface/GameControllerButtonState.h"
#include "mc/deps/input/interface/GameControllerStickState.h"
#include "mc/deps/input/interface/IGameController.h"
#include "mc/platform/brstd/simple_circular_queue.h"

// auto generated forward declare list
// clang-format off
struct GameControllerEvent;
struct TouchPadTouchEventData;
// clang-format on

class GameController : public ::IGameController {
public:
    // GameController inner types declare
    // clang-format off
    struct EventQueue;
    // clang-format on

    // GameController inner types define
    struct EventQueue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void const*> mToken;
        ::ll::UntypedStorage<8, 31216>        mEvents;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<GameController::EventQueue>> mEventQueues;
    ::ll::TypedStorage<1, 1, bool>                                     mIsConnected;
    ::ll::TypedStorage<4, 4, int>                                      mControllerId;
    ::ll::TypedStorage<1, 1, bool>                                     mIsAdequateController;
    ::ll::TypedStorage<1, 2, std::optional<SubClientId>>               mPairedClientId;
    ::ll::TypedStorage<1, 1, bool>                                     mFoundXboxController;
    ::ll::TypedStorage<1, 1, bool>                                     mFoundPlaystationController;
    ::ll::TypedStorage<1, 1, bool>                                     mFoundDualsenseController;
    // NOLINTEND

public:
    // prevent constructor by default
    GameController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameController();

    virtual bool hasEvents(void const*) const;

    virtual ::GameControllerEvent getNextEvent(void const*);

    virtual int getId() const;

    virtual bool isConnected() const;

    virtual bool isAdequateController() const;

    virtual void pairControllerToClient(::SubClientId);

    virtual void unpairControllerFromClient();

    virtual bool isControllerPairedToClient() const;

    virtual std::optional<SubClientId> getPairedClientId() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _registerConsumer(void const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $hasEvents(void const*) const;

    MCNAPI ::GameControllerEvent $getNextEvent(void const*);

    MCNAPI int $getId() const;

    MCNAPI bool $isConnected() const;

    MCNAPI bool $isAdequateController() const;

    MCNAPI void $pairControllerToClient(::SubClientId);

    MCNAPI void $unpairControllerFromClient();

    MCNAPI bool $isControllerPairedToClient() const;

    MCNAPI std::optional<SubClientId> $getPairedClientId() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
