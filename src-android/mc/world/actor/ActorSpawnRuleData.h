#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/world/actor/ActorSpawnConditionData.h"

struct ActorSpawnRuleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                     mFormatVersion;
    ::ll::TypedStorage<8, 24, std::string>                          mIdentifier;
    ::ll::TypedStorage<8, 24, std::string>                          mPopulationControl;
    ::ll::TypedStorage<8, 24, std::vector<ActorSpawnConditionData>> mSpawnConditions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorSpawnRuleData(::ActorSpawnRuleData const&);

    MCNAPI ::ActorSpawnRuleData& operator=(::ActorSpawnRuleData&&);

    MCNAPI ~ActorSpawnRuleData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorSpawnRuleData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
