#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/DataDrivenScreenInfo.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class DataDrivenScreenAPI {
public:
    // DataDrivenScreenAPI inner types define
    using ShowDataDrivenScreenCallbackSignature =
        void(::std::optional<::std::string> const, ::std::optional<uint> const);

    using ShowDataDrivenScreenCallback = ::std::function<void(::std::optional<::std::string>, ::std::optional<uint>)>;

    using ScreenClosedCallbackSignature = void(uint, ::DataDrivenScreenClosedReason);

    using ScreenClosedCallback = ::std::function<void(uint, ::DataDrivenScreenClosedReason)>;

    using ClientSideCloseCallbackSignature = void();

    using ClientSideCloseCallback = ::std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<
            void(::std::optional<::std::string>, ::std::optional<uint>),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>
        mShowDataDrivenScreenPublisher;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
                                                                                   mClientSideClosePublisher;
    ::ll::TypedStorage<8, 56, ::std::optional<::GameplayUI::DataDrivenScreenInfo>> mCurrentScreen;
    ::ll::TypedStorage<8, 8, ::PacketSender*>                                      mPacketSender;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clientSideCloseDataDrivenScreens();

    MCAPI void closeAllDataDrivenScreens();

    MCAPI void closeDataDrivenScreen(uint formId);

    MCAPI void showDataDrivenScreen(::std::string const& screenId, uint formId, ::std::optional<uint> dataInstanceId);
    // NOLINTEND
};
#else // @header-generator platform
class DataDrivenScreenAPI {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GameplayUI
