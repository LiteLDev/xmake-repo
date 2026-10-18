#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/VersionRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct SupportedFeatureSchema {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 56> mVersionRange;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FeatureLoading::FeatureRootParseContext>>> mSchema;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SupportedFeatureSchema& operator=(SupportedFeatureSchema const&);
    SupportedFeatureSchema(SupportedFeatureSchema const&);
    SupportedFeatureSchema();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SupportedFeatureSchema();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::Puv::VersionRange> mVersionRange;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>>>
        mSchema;
#endif // @header-generator platform
    // NOLINTEND
};
