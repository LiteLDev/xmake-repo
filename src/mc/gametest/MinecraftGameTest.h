#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
class GameTestInstanceLedger;
#else // @header-generator platform
#endif // @header-generator platform
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class BaseGameTestFunction; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class BaseGameTestInstance; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class GameTestRegistry; }
namespace gametest { class GameTestTicker; }
namespace gametest { class IGameTestHelperProvider; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class IGameTestListener; }
namespace gametest { struct TestParameters; }
// clang-format on

class MinecraftGameTest : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::GameTestRegistry>>        mRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::GameTestTicker>>          mTicker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::IGameTestHelperProvider>> mHelperProvider;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GameTestInstanceLedger>>           mGameTestLedger;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk51b56b;
    ::ll::UntypedStorage<8, 8>  mUnk25e6d5;
    ::ll::UntypedStorage<8, 8>  mUnk2fcf77;
    ::ll::UntypedStorage<8, 16> mUnk46408e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MinecraftGameTest& operator=(MinecraftGameTest const&);
    MinecraftGameTest(MinecraftGameTest const&);
#endif // @header-generator platform
    MinecraftGameTest();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MinecraftGameTest();
#else // @header-generator platform
    virtual ~MinecraftGameTest() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLevelDestruction(std::string const&);
#else // @header-generator platform
    virtual void onLevelDestruction(::std::string const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MinecraftGameTest(::Level&);
#else // @header-generator platform
    MCNAPI explicit MinecraftGameTest(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearAllTests(::BlockSource&);
#else // @header-generator platform
    MCNAPI void clearAllTests(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gametest::GameTestRegistry& getRegistry();
#else // @header-generator platform
    MCNAPI void loadExistingTests(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gametest::GameTestTicker& getTicker();
#else // @header-generator platform
    MCNAPI ::std::string
    runTest(::std::string const& testName, ::Dimension& dimension, ::gametest::TestParameters const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadExistingTests(::Level&);

    MCNAPI void registerDefaultGameBatches(::Level&);

    MCNAPI std::string runTest(std::string const&, ::Dimension&, ::gametest::TestParameters const&);

    MCNAPI std::string runTest(
        std::string const&,
        ::Dimension&,
        ::gametest::TestParameters const&,
        std::vector<std::shared_ptr<gametest::IGameTestListener>>
#else // @header-generator platform
    MCNAPI ::std::string runTest(
        ::std::string const&                                            testName,
        ::Dimension&                                                    dimension,
        ::gametest::TestParameters const&                               params,
        ::std::vector<::std::shared_ptr<::gametest::IGameTestListener>> listeners
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string runTestAt(::BlockSource&, ::BlockPos const&, std::optional<Rotation>);
#else // @header-generator platform
    MCNAPI ::std::string
    runTestAt(::BlockSource& region, ::BlockPos const& structureBlockPos, ::std::optional<::Rotation> rotation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::shared_ptr<gametest::BaseGameTestInstance>> const&
           runTests(::Dimension&, ::gametest::TestParameters&&);

    MCNAPI void stopAllTests();
#else // @header-generator platform
    MCNAPI ::std::vector<::std::shared_ptr<::gametest::BaseGameTestInstance>> const&
    runTests(::Dimension& dimension, ::gametest::TestParameters&& params);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Level&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::Level& level);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLevelDestruction(std::string const&);
#else // @header-generator platform
    MCNAPI void $onLevelDestruction(::std::string const&);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
