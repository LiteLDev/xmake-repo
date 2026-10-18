#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestBatchRunner.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Dimension;
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class GameTestBatch; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class GameTestTicker; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { struct TestParameters; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MinecraftGameTestBatchRunner : public ::gametest::BaseGameTestBatchRunner {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                       mDimension;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::IGameTestHelperProvider>> mGameTestHelperProvider;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk3b72dd;
    ::ll::UntypedStorage<8, 8> mUnk87f2b6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameTestBatchRunner& operator=(MinecraftGameTestBatchRunner const&);
    MinecraftGameTestBatchRunner(MinecraftGameTestBatchRunner const&);
    MinecraftGameTestBatchRunner();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MinecraftGameTestBatchRunner();
#else // @header-generator platform
    virtual ~MinecraftGameTestBatchRunner() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<gametest::BaseGameTestInstance> _createGameTestInstance(::gametest::BaseGameTestFunction&);
#else // @header-generator platform
    virtual ::std::shared_ptr<::gametest::BaseGameTestInstance>
    _createGameTestInstance(::gametest::BaseGameTestFunction& function) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _runTest(std::shared_ptr<gametest::BaseGameTestInstance>, ::gametest::GameTestTicker&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void
    _runTest(::std::shared_ptr<::gametest::BaseGameTestInstance> test, ::gametest::GameTestTicker& ticker) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<gametest::BaseGameTestInstance> $_createGameTestInstance(::gametest::BaseGameTestFunction&);
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::gametest::BaseGameTestInstance>
    $_createGameTestInstance(::gametest::BaseGameTestFunction& function);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_runTest(std::shared_ptr<gametest::BaseGameTestInstance>, ::gametest::GameTestTicker&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $_runTest(::std::shared_ptr<::gametest::BaseGameTestInstance> test, ::gametest::GameTestTicker& ticker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
