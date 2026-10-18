#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ConditionalBandwidthOptimization.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ConditionalBandwidthOptimizationComponent;
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ConditionalBandwidthOptimizationDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ConditionalBandwidthOptimization>            mDefaultValues;
    ::ll::TypedStorage<8, 24, std::vector<ConditionalBandwidthOptimization>> mConditionalValues;
#else // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ConditionalBandwidthOptimization>                mDefaultValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::ConditionalBandwidthOptimization>> mConditionalValues;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ConditionalBandwidthOptimizationDefinition();
#else // @header-generator platform
    MCAPI void addConditionalBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addConditionalBandwidthOptimization(::ConditionalBandwidthOptimization const&);

    MCNAPI void addDefaultBandwidthOptimization(::ConditionalBandwidthOptimization const&);

    MCNAPI void initialize(::EntityContext&, ::ConditionalBandwidthOptimizationComponent&) const;

    MCNAPI ~ConditionalBandwidthOptimizationDefinition();
#else // @header-generator platform
    MCAPI void addDefaultBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void buildSchema(
        std::shared_ptr<
            JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ConditionalBandwidthOptimizationDefinition>>&
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ConditionalBandwidthOptimizationDefinition>>&
            root
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
