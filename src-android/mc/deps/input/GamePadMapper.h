#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/GameControllerMapper.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class IGameController;
struct GameControllerInputMapping;
struct InputMapping;
// clang-format on

class GamePadMapper : public ::GameControllerMapper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GamePadMapper();

    virtual ::InputMode getInputMode() const;

    virtual std::vector<std::weak_ptr<IGameController>> _getGameControllers();

    virtual ::GameControllerInputMapping const& getGameControllerMapping(::InputMapping const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GamePadMapper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::InputMode $getInputMode() const;

    MCNAPI std::vector<std::weak_ptr<IGameController>> $_getGameControllers();

    MCNAPI ::GameControllerInputMapping const& $getGameControllerMapping(::InputMapping const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
