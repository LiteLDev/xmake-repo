#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
class BehaviorTreeDefinitionPtr;
namespace Json { class Value; }
// clang-format on

class DecoratorDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<BehaviorDefinition>> mChild;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DecoratorDefinition();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BehaviorDefinition const* get() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<BehaviorDefinition>
    _decoratorLoadChildBehavior(::Json::Value, ::BehaviorFactory const&, ::BehaviorTreeDefinitionPtr);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
