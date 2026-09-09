#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ConditionalBandwidthOptimization.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ConditionalBandwidthOptimizationComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ConditionalBandwidthOptimizationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ConditionalBandwidthOptimization>            mDefaultValues;
    ::ll::TypedStorage<8, 24, std::vector<ConditionalBandwidthOptimization>> mConditionalValues;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConditionalBandwidthOptimizationDefinition();

    MCNAPI void addConditionalBandwidthOptimization(::ConditionalBandwidthOptimization const&);

    MCNAPI void addDefaultBandwidthOptimization(::ConditionalBandwidthOptimization const&);

    MCNAPI void initialize(::EntityContext&, ::ConditionalBandwidthOptimizationComponent&) const;

    MCNAPI ~ConditionalBandwidthOptimizationDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        std::shared_ptr<
            JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ConditionalBandwidthOptimizationDefinition>>&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
