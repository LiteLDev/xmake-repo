#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/LevelDataWrapper.h"

// auto generated forward declare list
// clang-format off
class Minecraft;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/LevelDataWrapper.h"

// auto generated forward declare list
// clang-format off
class Minecraft;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1496>                              mLevelDataWrapper;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelChangedSubscription;
    ::ll::UntypedStorage<8, 40>                                mLevelChangedPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldSettings(::Minecraft&);

    MCNAPI ::Bedrock::PubSub::Subscription registerLevelChangedListener(std::function<void(LevelDataWrapper&)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Minecraft&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1704, ::LevelDataWrapper>            mLevelDataWrapper;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelChangedSubscription;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<void(::LevelDataWrapper&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mLevelChangedPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldSettings(::Minecraft& serverData);

    MCAPI ::Bedrock::PubSub::Subscription
    registerLevelChangedListener(::std::function<void(::LevelDataWrapper&)> callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Minecraft& serverData);
    // NOLINTEND
};
#else // @header-generator platform
class WorldSettings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
