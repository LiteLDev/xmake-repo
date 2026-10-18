#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gametest/framework/GameTestSaveData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BoundingBox;
class LevelStorage;
#else // @header-generator platform
#endif // @header-generator platform
struct DimensionType;
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class GameTestInstanceLedger : public ::gametest::IGameTestListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<GameTestSaveData>> mGameTestSaveData;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                mStorage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk2c9656;
    ::ll::UntypedStorage<8, 8>  mUnk275e5b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestInstanceLedger& operator=(GameTestInstanceLedger const&);
    GameTestInstanceLedger(GameTestInstanceLedger const&);
    GameTestInstanceLedger();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GameTestInstanceLedger();

    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clear(::DimensionType);

    MCNAPI std::vector<BoundingBox> getBoundingBoxes(::DimensionType) const;
#else // @header-generator platform
    MCNAPI void clear(::DimensionType dimension);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& GAME_TEST_INSTANCE_PREFIX();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::std::string const& GAME_TEST_INSTANCE_PREFIX();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
