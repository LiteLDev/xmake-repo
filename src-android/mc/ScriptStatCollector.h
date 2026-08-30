#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/scripting/diagnostics/ScriptStat.h"

// auto generated forward declare list
// clang-format off
class ScriptDiagnostics;
class ScriptDiagnosticsDescriptor;
// clang-format on

class ScriptStatCollector {
public:
    // ScriptStatCollector inner types define
    using CollectFn = std::function<std::optional<ScriptStat>(ulong, ulong, ulong)>;

    using EnableFn = std::function<void()>;

    using DisableFn = std::function<void()>;

    using ReloadFn = std::function<void(bool)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                              mDiagnostics;
    ::ll::TypedStorage<8, 8, ulong>                                                          mNextCollectTick;
    ::ll::TypedStorage<8, 8, ulong>                                                          mLastCollectTick;
    ::ll::TypedStorage<8, 8, ulong>                                                          mCollectTickFrequency;
    ::ll::TypedStorage<8, 48, std::function<std::optional<ScriptStat>(ulong, ulong, ulong)>> mCollectFn;
    ::ll::TypedStorage<8, 48, std::function<void()>>                                         mEnableFn;
    ::ll::TypedStorage<8, 48, std::function<void()>>                                         mDisableFn;
    ::ll::TypedStorage<8, 48, std::function<void(bool)>>                                     mReloadFn;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                               mOnTickSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                               mOnEnableSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                               mOnDisableSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                               mOnReloadSubscription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptStatCollector(
        ulong,
        std::function<std::optional<ScriptStat>(ulong, ulong, ulong)>,
        std::function<void()>,
        std::function<void()>,
        std::function<void(bool)>
    );

    MCNAPI ScriptStatCollector(
        ::Bedrock::NonOwnerPointer<ScriptDiagnostics>,
        ulong,
        std::function<std::optional<ScriptStat>(ulong, ulong, ulong)>,
        std::function<void()>,
        std::function<void()>,
        std::function<void(bool)>
    );

    MCNAPI ::ScriptStatCollector& addDescriptor(::ScriptDiagnosticsDescriptor);

    MCNAPI void tick(ulong, std::vector<ScriptStat>&);

    MCNAPI ~ScriptStatCollector();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& CollectEvery3s();

    MCNAPI static int const& CollectEvery5s();

    MCNAPI static int const& CollectEveryHalfSecond();

    MCNAPI static int const& CollectEveryOtherTick();

    MCNAPI static int const& CollectEveryTick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ulong,
        std::function<std::optional<ScriptStat>(ulong, ulong, ulong)>,
        std::function<void()>,
        std::function<void()>,
        std::function<void(bool)>
    );

    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<ScriptDiagnostics>,
        ulong,
        std::function<std::optional<ScriptStat>(ulong, ulong, ulong)>,
        std::function<void()>,
        std::function<void()>,
        std::function<void(bool)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
