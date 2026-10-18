#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
class BoundingBox;
class Dimension;
#else // @header-generator platform
#endif // @header-generator platform
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class BaseGameTestBatchRunner; }
namespace gametest { class BaseGameTestFunction; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class BaseGameTestInstance; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class GameTestBatch; }
namespace gametest { class GameTestRegistry; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class GameTestTicker; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { struct TestParameters; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class GameTestRunner {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void clearAllTests(::BlockSource&, ::gametest::GameTestTicker&, std::vector<BoundingBox> const&);
#else // @header-generator platform
    MCNAPI static void clearMarkers(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void clearMarkers(::Level&);

    MCNAPI static void runTest(std::shared_ptr<gametest::BaseGameTestInstance>, ::gametest::GameTestTicker&);

    MCNAPI static std::unique_ptr<gametest::BaseGameTestBatchRunner> runTests(
        ::Dimension&,
        ::gametest::GameTestRegistry&,
        std::unique_ptr<gametest::IGameTestHelperProvider>,
        ::gametest::GameTestTicker&,
        ::gametest::TestParameters&&
    );
#else // @header-generator platform
    MCNAPI static void
    runTest(::std::shared_ptr<::gametest::BaseGameTestInstance> test, ::gametest::GameTestTicker& ticker);
#endif // @header-generator platform
    // NOLINTEND
};
