#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/triggers/BlockTriggerDescription.h"
#include "mc/world/level/block/components/triggers/OnFallOnTrigger.h"

// auto generated forward declare list
// clang-format off
class BlockComponentFactory;
class BlockComponentStorage;
struct BlockComponentGroupDescription;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OnFallOnTriggerDescription : public ::BlockTriggerDescription<OnFallOnTrigger> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMinimumFallDistance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~OnFallOnTriggerDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockComponentGroupDescription>>&, ::BlockComponentFactory const&) const;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;

    MCNAPI void $buildSchema(
        std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockComponentGroupDescription>>&,
        ::BlockComponentFactory const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
