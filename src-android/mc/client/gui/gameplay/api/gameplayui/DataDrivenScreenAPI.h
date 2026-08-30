#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/DataDrivenScreenInfo.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace GameplayUI {

class DataDrivenScreenAPI {
public:
    // DataDrivenScreenAPI inner types define
    using ShowDataDrivenScreenCallback = std::function<void(std::optional<std::string>, std::optional<uint>)>;

    using ClientSideCloseCallback = std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                                                mShowDataDrivenScreenPublisher;
    ::ll::UntypedStorage<8, 40>                                                mClientSideClosePublisher;
    ::ll::TypedStorage<8, 48, std::optional<GameplayUI::DataDrivenScreenInfo>> mCurrentScreen;
    ::ll::TypedStorage<8, 8, ::PacketSender*>                                  mPacketSender;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenScreenAPI();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DataDrivenScreenAPI(::PacketSender&);

    MCNAPI void clientSideCloseDataDrivenScreens();

    MCNAPI void closeAllDataDrivenScreens();

    MCNAPI void closeDataDrivenScreen(uint);

    MCNAPI void showDataDrivenScreen(std::string const&, uint, std::optional<uint>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToOnClientSideClose(std::function<void()>&&);

    MCNAPI ::Bedrock::PubSub::Subscription
    subscribeToOnServerShowDataDrivenScreen(std::function<void(std::optional<std::string>, std::optional<uint>)>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PacketSender&);
    // NOLINTEND
};

} // namespace GameplayUI
