#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/JSONSchemaOutput.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace cereal::internal {

struct ReflectionContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::meta_ctx> mMetaCtx;
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<std::string, entt::type_info, cereal::JSONSchemaOutput>>> mKnownProperties;
    ::ll::TypedStorage<1, 2, std::optional<cereal::JSONSchemaOutput>> mForcedJSONSchemaOutput;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::entt::meta_ctx> mMetaCtx;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::tuple<::std::string, ::entt::type_info, ::cereal::JSONSchemaOutput>>>
                                                                          mKnownProperties;
    ::ll::TypedStorage<1, 2, ::std::optional<::cereal::JSONSchemaOutput>> mForcedJSONSchemaOutput;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ReflectionContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::cereal::internal::ReflectionContext const& from(::cereal::ReflectionCtx const&);

    MCNAPI static ::cereal::internal::ReflectionContext& from(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI ~ReflectionContext();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::internal
