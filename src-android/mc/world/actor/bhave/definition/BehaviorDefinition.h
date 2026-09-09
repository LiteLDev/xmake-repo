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
    ::ll::TypedStorage<8, 24, std::string>                 mName;
    ::ll::TypedStorage<8, 16, ::BehaviorTreeDefinitionPtr> mTreeDefinition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BehaviorDefinition();

    virtual void load(::Json::Value, ::BehaviorFactory const&);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::Json::Value, ::BehaviorFactory const&);

    MCNAPI std::unique_ptr<BehaviorNode>
           $createNode(::Actor&, ::BehaviorFactory const&, ::BehaviorNode*, ::BehaviorData*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
