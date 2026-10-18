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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // JSONSchema inner types define
    using JSONSchemaDef = ::cereal::ext::internal::JSONSchemaDef;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mTitle;
    ::ll::TypedStorage<8, 24, std::string>                mSchemaUrl;
    ::ll::TypedStorage<8, 24, std::string>                mIdentifier;
    ::ll::TypedStorage<8, 24, std::string>                mExtraFormatVersion;
    ::ll::TypedStorage<8, 24, std::string>                mExtraMinecraftVersion;
    ::ll::TypedStorage<4, 8, std::optional<int>>          mExtraProtocolVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                  mSchemaUrl;
    ::ll::TypedStorage<8, 32, ::std::string>                  mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>                  mExtraFormatVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                  mExtraMinecraftVersion;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>            mExtraProtocolVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JSONSchema();

    MCAPI JSONSchema(::cereal::ext::JSONSchema const&);

    MCAPI ::cereal::ext::JSONSchema& operator=(::cereal::ext::JSONSchema&&);

    MCAPI ::cereal::ext::JSONSchema& operator=(::cereal::ext::JSONSchema const&);

    MCAPI ~JSONSchema();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::cereal::ext::JSONSchema fromDescription(
        ::cereal::SchemaDescription const&               desc,
        ::std::unordered_map<uint, ::std::string> const& schemaPathsById
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cereal::ext::JSONSchema const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::ext
