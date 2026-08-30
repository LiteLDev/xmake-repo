#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ext/json_schema/JSONSchemaDef.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
// clang-format on

namespace cereal::ext {

struct JSONSchema : public ::cereal::ext::internal::JSONSchemaDef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mTitle;
    ::ll::TypedStorage<8, 24, std::string>                mSchemaUrl;
    ::ll::TypedStorage<8, 24, std::string>                mIdentifier;
    ::ll::TypedStorage<8, 24, std::string>                mExtraFormatVersion;
    ::ll::TypedStorage<8, 24, std::string>                mExtraMinecraftVersion;
    ::ll::TypedStorage<4, 8, std::optional<int>>          mExtraProtocolVersion;
    // NOLINTEND
};

} // namespace cereal::ext
