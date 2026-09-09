#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Dimension;
class Level;
namespace gametest { class BaseGameTestBatchRunner; }
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestBatch; }
namespace gametest { class GameTestRegistry; }
namespace gametest { class GameTestTicker; }
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { struct TestParameters; }
// clang-format on

class GameTestRunner {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void clearAllTests(::BlockSource&, ::gametest::GameTestTicker&, std::vector<BoundingBox> const&);

    MCNAPI static void clearMarkers(::Level&);

    MCNAPI static void runTest(std::shared_ptr<gametest::BaseGameTestInstance>, ::gametest::GameTestTicker&);

    MCNAPI static std::unique_ptr<gametest::BaseGameTestBatchRunner> runTests(
        ::Dimension&,
        ::gametest::GameTestRegistry&,
        std::unique_ptr<gametest::IGameTestHelperProvider>,
        ::gametest::GameTestTicker&,
        ::gametest::TestParameters&&
    );
    // NOLINTEND
};
