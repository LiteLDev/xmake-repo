#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/DecoratorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class RepeatUntilSuccessDefinition : public ::DecoratorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mMaxNumberOfAttempts;
    ::ll::TypedStorage<8, 24, std::string> mMaxNumberOfAttemptsId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RepeatUntilSuccessDefinition();

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
