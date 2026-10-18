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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MinecraftGameTestHelperProvider();
#else // @header-generator platform
    virtual ::std::unique_ptr<::gametest::BaseGameTestHelper>
    createGameTestHelper(::gametest::BaseGameTestInstance& testInstance) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<gametest::BaseGameTestHelper> createGameTestHelper(::gametest::BaseGameTestInstance&);

    virtual std::unique_ptr<gametest::IGameTestHelperProvider> clone();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::gametest::IGameTestHelperProvider> clone() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<gametest::BaseGameTestHelper> $createGameTestHelper(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::gametest::BaseGameTestHelper>
    $createGameTestHelper(::gametest::BaseGameTestInstance& testInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<gametest::IGameTestHelperProvider> $clone();
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::gametest::IGameTestHelperProvider> $clone();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
