#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorTreeDefinitionPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BehaviorData;
class BehaviorFactory;
class BehaviorNode;
namespace Json { class Value; }
// clang-format on

class BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                 mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>               mName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::BehaviorTreeDefinitionPtr> mTreeDefinition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BehaviorDefinition();
#else // @header-generator platform
    virtual ~BehaviorDefinition() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::Json::Value, ::BehaviorFactory const&);
#else // @header-generator platform
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BehaviorNode> createNode(::Actor&, ::BehaviorFactory const&, ::BehaviorNode*, ::BehaviorData*) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BehaviorTreeDefinitionPtr getTreeDefinition() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::BehaviorNode>
    createNode(::Actor& owner, ::BehaviorFactory const& factory, ::BehaviorNode* parent, ::BehaviorData* data) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::Json::Value, ::BehaviorFactory const&);
#else // @header-generator platform
    MCAPI void $load(::Json::Value value, ::BehaviorFactory const& factory);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BehaviorNode>
           $createNode(::Actor&, ::BehaviorFactory const&, ::BehaviorNode*, ::BehaviorData*) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BehaviorNode>
    $createNode(::Actor& owner, ::BehaviorFactory const& factory, ::BehaviorNode* parent, ::BehaviorData* data) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
