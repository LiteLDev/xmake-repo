#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ext/json_schema/JSONSchemaBody.h"
#include "mc/deps/cereal/ext/json_schema/JSONSchemaValidation.h"
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct SchemaDescription; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace cereal::ext::internal {

struct JSONSchemaDef : public ::cereal::ext::internal::JSONSchemaBody,
                       public ::cereal::ext::internal::JSONSchemaValidation {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // JSONSchemaDef inner types define
    using MetaProperties = ::std::map<::std::string, ::cereal::DynamicValue>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                     mDescription;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::DynamicValue>>> mMetaProperties;
    ::ll::TypedStorage<
        8,
        24,
        ::std::optional<::std::map<::std::string, ::std::map<::std::string, ::cereal::DynamicValue>>>>
                                                                                    mEnumProperties;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                       mExtraUnderlyingType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                       mExtraControlValueType;
    ::ll::TypedStorage<8, 72, ::std::optional<::std::unordered_set<::std::string>>> mExtraSerializationTraits;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>>                                mExtraOrdinalIndex;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                       mExtraNonPublicProperty;
    ::ll::TypedStorage<8, 72, ::std::optional<::std::unordered_map<::std::string, ::std::vector<::std::string>>>>
        mExtraNonPublicEnumValues;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaDef();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JSONSchemaDef(::cereal::ext::internal::JSONSchemaDef const&);

    MCAPI ::cereal::ext::internal::JSONSchemaDef& operator=(::cereal::ext::internal::JSONSchemaDef&&);

    MCAPI ::cereal::ext::internal::JSONSchemaDef& operator=(::cereal::ext::internal::JSONSchemaDef const&);

    MCAPI ~JSONSchemaDef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ext::internal::JSONSchemaDef const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::ext::internal
