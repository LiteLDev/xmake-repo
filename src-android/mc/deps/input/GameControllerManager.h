#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/input/interface/ControllerRefreshState.h"
#include "mc/deps/input/interface/GameControllerButtonState.h"
#include "mc/deps/input/interface/GameControllerErrorType.h"
#include "mc/deps/input/interface/GameControllerStickState.h"
#include "mc/deps/input/interface/IGameControllerManager.h"

// auto generated forward declare list
// clang-format off
class GameController;
class IGameController;
struct TouchPadTouchEventData;
// clang-format on

class GameControllerManager : public ::IGameControllerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<GameController>>> mGameControllers;
    ::ll::TypedStorage<8, 8, ulong>                                         mMaxGameControllerButtons;
    ::ll::TypedStorage<1, 1, bool>                                          mIsActive;
    ::ll::TypedStorage<8, 24, std::vector<const void*>>                     mConsumerRegistry;
    ::ll::TypedStorage<4, 4, ::ControllerRefreshState>                      mControllerRefreshState;
    ::ll::TypedStorage<1, 1, uchar>                                         mClientControllerCount;
    ::ll::UntypedStorage<8, 48> mPlatformSpecificControllerErrorRetrievalFunc;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameControllerManager();

    virtual std::weak_ptr<IGameController> getGameController(int);

    virtual std::vector<std::weak_ptr<IGameController>> getConnectedGameControllers();

    virtual std::vector<std::weak_ptr<IGameController>> getGameControllersInUse();

    virtual bool hasAdequateConnectedGameController() const;

    virtual bool hasAdequateConnectedGameControllers(ulong const) const;

    virtual ulong getMaxGameControllerButtons() const;

    virtual void registerConsumer(void const*);

    virtual void unregisterConsumer(void const*);

    virtual void setControllerRefreshState(::ControllerRefreshState);

    virtual ::ControllerRefreshState getControllerRefreshState() const;

    virtual ::GameControllerErrorType getPlatformSpecificControllerError() const;

    virtual void setPlatformSpecificControllerErrorRetrievalFunc(std::function<GameControllerErrorType()>&&);

    virtual void resetClientControllerCount();

    virtual void addClientHasAdequateConnectedController(int, bool const, ::SubClientId);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void feedButton(int, int, ::GameControllerButtonState, bool);

    MCNAPI void feedStick(int, int, ::GameControllerStickState, float, float);

    MCNAPI void feedTrigger(int, int, float);

    MCNAPI bool getFoundDualsenseController() const;

    MCNAPI bool getFoundPlaystationController() const;

    MCNAPI bool getFoundXboxController() const;

    MCNAPI bool getGameControllerIsConnected(int) const;

    MCNAPI bool isAdequateController(int);

    MCNAPI void setFoundDualsenseController(int, bool);

    MCNAPI void setFoundPlaystationController(int, bool);

    MCNAPI void setFoundXboxController(int, bool);

    MCNAPI void setGameControllerConnected(int, bool);

    MCNAPI void setMaxGameControllerButtons(ulong);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::GameControllerManager& sGamePadManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::weak_ptr<IGameController> $getGameController(int);

    MCNAPI std::vector<std::weak_ptr<IGameController>> $getConnectedGameControllers();

    MCNAPI std::vector<std::weak_ptr<IGameController>> $getGameControllersInUse();

    MCNAPI bool $hasAdequateConnectedGameController() const;

    MCNAPI bool $hasAdequateConnectedGameControllers(ulong const) const;

    MCNAPI ulong $getMaxGameControllerButtons() const;

    MCNAPI void $registerConsumer(void const*);

    MCNAPI void $unregisterConsumer(void const*);

    MCNAPI void $setControllerRefreshState(::ControllerRefreshState);

    MCNAPI ::ControllerRefreshState $getControllerRefreshState() const;

    MCNAPI ::GameControllerErrorType $getPlatformSpecificControllerError() const;

    MCNAPI void $setPlatformSpecificControllerErrorRetrievalFunc(std::function<GameControllerErrorType()>&&);

    MCNAPI void $resetClientControllerCount();

    MCNAPI void $addClientHasAdequateConnectedController(int, bool const, ::SubClientId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
