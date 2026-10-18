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

class CompositeDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<BehaviorDefinition>>> mChildren;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompositeDefinition();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BehaviorDefinition const* get(ulong) const;

    MCNAPI ulong getCount() const;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::BehaviorDefinition>>> mChildren;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _compositeLoadChildrenBehaviors(
        ::Json::Value,
        std::vector<std::unique_ptr<BehaviorDefinition>>&,
        ::BehaviorFactory const&,
        ::BehaviorTreeDefinitionPtr
#else // @header-generator platform
    MCAPI static void _compositeLoadChildrenBehaviors(
        ::Json::Value                                           value,
        ::std::vector<::std::unique_ptr<::BehaviorDefinition>>& childList,
        ::BehaviorFactory const&                                factory,
        ::BehaviorTreeDefinitionPtr                             ptr
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
