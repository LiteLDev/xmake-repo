#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorOwnerComponent.h"

namespace PlayerValidation {

struct ValidationSystem : public ::IStrictTickingSystem<StrictExecutionContext<
                              Filter<PlayerComponent>,
                              Read<StateVectorComponent>,
                              Write<ActorOwnerComponent>,
                              AddRemove<>,
                              GlobalRead<>,
                              GlobalWrite<>,
                              EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mMessage;
    // NOLINTEND
};

} // namespace PlayerValidation
