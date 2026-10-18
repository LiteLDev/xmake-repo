#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorSpawnConditionData.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ActorSpawnConditionData;
// clang-format on
#endif // @header-generator platform

struct ActorSpawnRuleData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                     mFormatVersion;
    ::ll::TypedStorage<8, 24, std::string>                          mIdentifier;
    ::ll::TypedStorage<8, 24, std::string>                          mPopulationControl;
    ::ll::TypedStorage<8, 24, std::vector<ActorSpawnConditionData>> mSpawnConditions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SemVersion>                             mFormatVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                            mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>                            mPopulationControl;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorSpawnConditionData>> mSpawnConditions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorSpawnRuleData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorSpawnRuleData(::ActorSpawnRuleData const&);
#else // @header-generator platform
    MCAPI ActorSpawnRuleData(::ActorSpawnRuleData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorSpawnRuleData& operator=(::ActorSpawnRuleData&&);
#else // @header-generator platform
    MCAPI ::ActorSpawnRuleData& operator=(::ActorSpawnRuleData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorSpawnRuleData();
#else // @header-generator platform
    MCAPI ::ActorSpawnRuleData& operator=(::ActorSpawnRuleData const&);

    MCAPI ~ActorSpawnRuleData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorSpawnRuleData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorSpawnRuleData const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
