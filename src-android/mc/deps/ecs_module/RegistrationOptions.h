#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/TickingSystemWithInfo.h"
#include "mc/deps/ecs_module/TypeIds.h"
#include "mc/util/BaseGameVersion.h"

namespace ECSModule {

struct RegistrationOptions {
public:
    // RegistrationOptions inner types define
    using ExtraSystemInjector = std::vector<TickingSystemWithInfo> (*)();

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                     mIsRaidTriggerSystemUsingRaidOmen;
    ::ll::TypedStorage<1, 1, bool>                                     mIsClientSide;
    ::ll::TypedStorage<1, 1, bool>                                     mConnectedToThirdPartyServer;
    ::ll::UntypedStorage<1, 1>                                         mIsStrictMovement;
    ::ll::UntypedStorage<8, 32>                                        mBaseGameVersion;
    ::ll::TypedStorage<2, 12, ::ECSModule::TypeIds>                    mTypeIds;
    ::ll::TypedStorage<8, 8, std::vector<TickingSystemWithInfo> (*)()> mRegisterHandlingExtraSystems;
    ::ll::TypedStorage<8, 8, std::vector<TickingSystemWithInfo> (*)()> mPostMovementSystems;
    ::ll::TypedStorage<8, 8, std::vector<TickingSystemWithInfo> (*)()> mPostActorTickSystems;
    ::ll::TypedStorage<8, 8, std::vector<TickingSystemWithInfo> (*)()> mInitializers;
    // NOLINTEND
};

} // namespace ECSModule
