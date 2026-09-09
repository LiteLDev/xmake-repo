#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class LookAtActorDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mEntityName;
    ::ll::TypedStorage<8, 24, std::string> mEntityType;
    ::ll::TypedStorage<4, 4, int>          mSearchRadius;
    ::ll::TypedStorage<8, 24, std::string> mSearchRadiusId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LookAtActorDefinition();

    virtual void load(::Json::Value, ::BehaviorFactory const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::Json::Value, ::BehaviorFactory const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
