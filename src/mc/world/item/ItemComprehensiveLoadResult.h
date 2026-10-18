#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/world/item/components/ComponentItemDataAll_Latest.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class SemVersion;
struct PackLoadInfo;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Puv { class Input; }
namespace Puv { class Logger; }
namespace SharedTypes::v1_26_30 { struct ItemDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ItemComprehensiveLoadResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                                mItemJson;
    ::ll::TypedStorage<8, 2336, ::ComponentItemDataAll_Latest> mPuvResult;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Json::Value>                   mItemJson;
    ::ll::TypedStorage<8, 2592, ::ComponentItemDataAll_Latest> mPuvResult;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemComprehensiveLoadResult(::ItemComprehensiveLoadResult const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~ItemComprehensiveLoadResult();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemComprehensiveLoadResult parse(
        ::Puv::Input const&,
        ::Puv::Logger&,
        bool const,
        ::SemVersion const&,
        ::BedrockLoadContext const*,
        ::PackLoadInfo const*,
        ::cereal::ReflectionCtx const*
#else // @header-generator platform
    MCAPI static ::ItemComprehensiveLoadResult parse(
        ::Puv::Input const&            input,
        ::Puv::Logger&                 logger,
        bool                           isComponentBased,
        ::SemVersion const&            documentVersion,
        ::BedrockLoadContext const*    bedrockLoadContext,
        ::PackLoadInfo const*          packLoadInfo,
        ::cereal::ReflectionCtx const* ctx
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::v1_26_30::ItemDocument upgrade(::ItemComprehensiveLoadResult&&);
#else // @header-generator platform
    MCAPI static ::SharedTypes::v1_26_30::ItemDocument upgrade(::ItemComprehensiveLoadResult&& oldData);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemComprehensiveLoadResult const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
