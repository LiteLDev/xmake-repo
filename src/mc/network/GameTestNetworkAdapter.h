#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
class MinecraftGameTest;
#else // @header-generator platform
#endif // @header-generator platform
class PacketSender;
namespace gametest { class BaseGameTestInstance; }
namespace gametest { struct TestParameters; }
// clang-format on

class GameTestNetworkAdapter {
public:
    // GameTestNetworkAdapter inner types declare
    // clang-format off
    class GameTestNetworkListener;
    // clang-format on

    // GameTestNetworkAdapter inner types define
    class GameTestNetworkListener : public ::gametest::IGameTestListener {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<PacketSender*>> mPacketSender;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk84f3b7;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        GameTestNetworkListener& operator=(GameTestNetworkListener const&);
        GameTestNetworkListener(GameTestNetworkListener const&);
#endif // @header-generator platform
        GameTestNetworkListener();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~GameTestNetworkListener();
#else // @header-generator platform
        virtual void onTestPassed(::gametest::BaseGameTestInstance& testInstance) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void onTestPassed(::gametest::BaseGameTestInstance&);

        virtual void onTestFailed(::gametest::BaseGameTestInstance&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual void onTestFailed(::gametest::BaseGameTestInstance& testInstance) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance&);
#else // @header-generator platform
        MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance& testInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance&);
        // NOLINTEND
#else // @header-generator platform
        MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance& testInstance);
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

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MinecraftGameTest&> mGameTest;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk8aa503;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestNetworkAdapter& operator=(GameTestNetworkAdapter const&);
    GameTestNetworkAdapter(GameTestNetworkAdapter const&);
    GameTestNetworkAdapter();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit GameTestNetworkAdapter(::MinecraftGameTest&);

    MCNAPI void
    rungametest(::gsl::not_null<PacketSender*>, std::string const&, ::Dimension&, ::gametest::TestParameters const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftGameTest&);
#else // @header-generator platform
    MCNAPI void rungametest(
        ::gsl::not_null<::PacketSender*>  packetSender,
        ::std::string const&              testName,
        ::Dimension&                      dimension,
        ::gametest::TestParameters const& params
    );
#endif // @header-generator platform
    // NOLINTEND
};
