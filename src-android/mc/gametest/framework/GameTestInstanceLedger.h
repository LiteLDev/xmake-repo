#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/GameTestSaveData.h"
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class LevelStorage;
struct DimensionType;
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class GameTestInstanceLedger : public ::gametest::IGameTestListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<GameTestSaveData>> mGameTestSaveData;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                mStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestInstanceLedger& operator=(GameTestInstanceLedger const&);
    GameTestInstanceLedger(GameTestInstanceLedger const&);
    GameTestInstanceLedger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameTestInstanceLedger();

    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear(::DimensionType);

    MCNAPI std::vector<BoundingBox> getBoundingBoxes(::DimensionType) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& GAME_TEST_INSTANCE_PREFIX();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
