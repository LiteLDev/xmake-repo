#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ext/json_schema/JSONSchemaBody.h"
#include "mc/deps/cereal/ext/json_schema/JSONSchemaValidation.h"
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
// clang-format on

namespace cereal::ext::internal {

struct JSONSchemaDef : public ::cereal::ext::internal::JSONSchemaBody,
                       public ::cereal::ext::internal::JSONSchemaValidation {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mDescription;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, cereal::DynamicValue>>> mMetaProperties;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, std::map<std::string, cereal::DynamicValue>>>> mEnumProperties;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mExtraUnderlyingType;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mExtraControlValueType;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_set<std::string>>> mExtraSerializationTraits;
    ::ll::TypedStorage<1, 2, std::optional<uchar>> mExtraOrdinalIndex;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mExtraNonPublicProperty;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, std::vector<std::string>>>> mExtraNonPublicEnumValues;
    // clang-format on
    // NOLINTEND
};

} // namespace cereal::ext::internal
