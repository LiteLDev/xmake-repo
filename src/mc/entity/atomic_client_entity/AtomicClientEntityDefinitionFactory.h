#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"

// auto generated forward declare list
// clang-format off
class AtomicClientEntityDefinition;
class BedrockLoadContext;
struct AtomicClientEntityTraits;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace SharedTypes::Beta::AtomicClientEntity { struct AtomicClientEntityDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class AtomicClientEntityDefinitionFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>  mCerealContext;
    ::ll::UntypedStorage<8, 256> mLoader;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk62e2ee;
    ::ll::UntypedStorage<8, 264> mUnkf1f7b6;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AtomicClientEntityDefinitionFactory& operator=(AtomicClientEntityDefinitionFactory const&);
    AtomicClientEntityDefinitionFactory(AtomicClientEntityDefinitionFactory const&);
    AtomicClientEntityDefinitionFactory();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AtomicClientEntityDefinitionFactory& operator=(AtomicClientEntityDefinitionFactory const&);
    AtomicClientEntityDefinitionFactory(AtomicClientEntityDefinitionFactory const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI AtomicClientEntityDefinitionFactory();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
