#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/resources/PackLoadInfo.h"
#include "mc/world/item/components/CerealComponentItemDataLoader.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class SemVersion;
struct ComponentItemDataAll_Latest;
#if defined(LL_PLAT_A) // @header-generator platform
struct ComponentItemData_v1_26_0;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::Legacy { struct ComponentItemData; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ComponentItemDataLoader {
public:
    // ComponentItemDataLoader inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Validator = std::function<void(Puv::LoadResult<ComponentItemDataAll_Latest>&)>;
#else // @header-generator platform
    using Validator = ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                 mCtx;
    ::ll::TypedStorage<8, 240, ::CerealComponentItemDataLoader> mLoader;
    ::ll::TypedStorage<8, 80, ::PackLoadInfo>                   mPackLoadInfo;
    ::ll::UntypedStorage<8, 48>                                 mValidatorFn;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>>             mCtx;
    ::ll::TypedStorage<8, 256, ::CerealComponentItemDataLoader>                                         mLoader;
    ::ll::TypedStorage<8, 96, ::PackLoadInfo>                                                           mPackLoadInfo;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)>> mValidatorFn;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDataLoader();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ComponentItemDataLoader(
        ::BedrockLoadContext const&,
        ::PackLoadInfo const&,
        ::cereal::ReflectionCtx const&,
        std::function<void(Puv::LoadResult<ComponentItemDataAll_Latest>&)>
#else // @header-generator platform
    MCAPI ComponentItemDataLoader(
        ::BedrockLoadContext const&                                              bedrockLoadContext,
        ::PackLoadInfo const&                                                    packLoadInfo,
        ::cereal::ReflectionCtx const&                                           ctx,
        ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)> validatorFn
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Puv::LoadResult<ComponentItemDataAll_Latest> load(::Json::Value const&, ::SemVersion const&) const;
#else // @header-generator platform
    MCAPI ::Puv::LoadResult<::ComponentItemDataAll_Latest>
    load(::Json::Value const& input, ::SemVersion const& documentVersion) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::BedrockLoadContext const&,
        ::PackLoadInfo const&,
        ::cereal::ReflectionCtx const&,
        std::function<void(Puv::LoadResult<ComponentItemDataAll_Latest>&)>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::BedrockLoadContext const&                                              bedrockLoadContext,
        ::PackLoadInfo const&                                                    packLoadInfo,
        ::cereal::ReflectionCtx const&                                           ctx,
        ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)> validatorFn
#endif // @header-generator platform
    );
    // NOLINTEND
};
