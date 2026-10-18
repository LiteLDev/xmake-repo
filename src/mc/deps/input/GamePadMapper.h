#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    virtual ::InputMode getInputMode() const /*override*/;

    virtual ::std::vector<::std::weak_ptr<::IGameController>> _getGameControllers() /*override*/;

    virtual ::GameControllerInputMapping const&
    getGameControllerMapping(::InputMapping const& inputMapping) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::InputMode $getInputMode() const;

    MCAPI ::std::vector<::std::weak_ptr<::IGameController>> $_getGameControllers();

    MCAPI ::GameControllerInputMapping const& $getGameControllerMapping(::InputMapping const& inputMapping);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class GamePadMapper {};
#endif // @header-generator platform
#endif // @header-generator platform
