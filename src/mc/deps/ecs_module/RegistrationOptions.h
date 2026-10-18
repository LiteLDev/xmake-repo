#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/systems/TickingSystemWithInfo.h"
#include "mc/deps/ecs_module/TypeIds.h"
#include "mc/util/BaseGameVersion.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on
#endif // @header-generator platform

namespace ECSModule {

struct RegistrationOptions {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // RegistrationOptions inner types define
    using ExtraSystemInjector = std::vector<TickingSystemWithInfo> (*)();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk932cf3;
    ::ll::UntypedStorage<1, 1>  mUnk2b4915;
    ::ll::UntypedStorage<1, 1>  mUnkda5e8c;
    ::ll::UntypedStorage<1, 1>  mUnk3fc97f;
    ::ll::UntypedStorage<8, 32> mUnkc0443a;
    ::ll::UntypedStorage<2, 12> mUnk876c1b;
    ::ll::UntypedStorage<8, 8>  mUnk4ce9c1;
    ::ll::UntypedStorage<8, 8>  mUnk81c0d8;
    ::ll::UntypedStorage<8, 8>  mUnkb85446;
    ::ll::UntypedStorage<8, 8>  mUnk797ea0;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RegistrationOptions& operator=(RegistrationOptions const&);
    RegistrationOptions(RegistrationOptions const&);
    RegistrationOptions();
#endif // @header-generator platform
};

} // namespace ECSModule
