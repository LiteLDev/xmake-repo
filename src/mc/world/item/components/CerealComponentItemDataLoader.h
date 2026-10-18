#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
struct ComponentItemData_v1_26_0;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { class Input; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealComponentItemDataLoader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 240> mLoader;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<::ComponentItemData_v1_26_0, ::BedrockLoadContext, nullptr_t, ::ComponentItemData_v1_26_0>>
        mLoader;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CerealComponentItemDataLoader();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CerealComponentItemDataLoader(::BedrockLoadContext const&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI
    CerealComponentItemDataLoader(::BedrockLoadContext const& bedrockLoadContext, ::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BedrockLoadContext const&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI void* $ctor(::BedrockLoadContext const& bedrockLoadContext, ::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform
    // NOLINTEND
};
