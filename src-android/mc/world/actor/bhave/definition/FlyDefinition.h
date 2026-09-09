#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class FlyDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mShouldBeFlying;
    ::ll::TypedStorage<8, 24, std::string> mShouldBeFlyingId;
    ::ll::TypedStorage<1, 1, bool>         mShouldThrowEventIfNoStateChangeNecessary;
    ::ll::TypedStorage<8, 24, std::string> mShouldThrowEventIfNoStateChangeNecessaryId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlyDefinition();

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
