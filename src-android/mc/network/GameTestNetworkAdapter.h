#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class MinecraftGameTest;
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
        ::ll::TypedStorage<8, 8, ::gsl::not_null<PacketSender*>> mPacketSender;
        // NOLINTEND

    public:
        // prevent constructor by default
        GameTestNetworkListener();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~GameTestNetworkListener();

        virtual void onTestPassed(::gametest::BaseGameTestInstance&);

        virtual void onTestFailed(::gametest::BaseGameTestInstance&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance&);

        MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MinecraftGameTest&> mGameTest;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestNetworkAdapter& operator=(GameTestNetworkAdapter const&);
    GameTestNetworkAdapter(GameTestNetworkAdapter const&);
    GameTestNetworkAdapter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameTestNetworkAdapter(::MinecraftGameTest&);

    MCNAPI void
    rungametest(::gsl::not_null<PacketSender*>, std::string const&, ::Dimension&, ::gametest::TestParameters const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftGameTest&);
    // NOLINTEND
};
