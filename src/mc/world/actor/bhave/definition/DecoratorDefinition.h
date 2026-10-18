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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BehaviorDefinition>> mChild;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::BehaviorDefinition>
    _decoratorLoadChildBehavior(::Json::Value value, ::BehaviorFactory const& factory, ::BehaviorTreeDefinitionPtr ptr);
#endif // @header-generator platform
    // NOLINTEND
};
