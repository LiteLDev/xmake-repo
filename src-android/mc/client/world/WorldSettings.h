#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace World {

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

} // namespace World
