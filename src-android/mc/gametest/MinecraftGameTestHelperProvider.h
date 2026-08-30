#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/IGameTestHelperProvider.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class MinecraftGameTestHelperProvider : public ::gametest::IGameTestHelperProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGameTestHelperProvider();

    virtual std::unique_ptr<gametest::BaseGameTestHelper> createGameTestHelper(::gametest::BaseGameTestInstance&);

    virtual std::unique_ptr<gametest::IGameTestHelperProvider> clone();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<gametest::BaseGameTestHelper> $createGameTestHelper(::gametest::BaseGameTestInstance&);

    MCNAPI std::unique_ptr<gametest::IGameTestHelperProvider> $clone();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
