#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/BlockDefinitionValidate__ValidateContext.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/puv/LoadResult.h"
#else // @header-generator platform
#include "mc/world/level/block/definition/validate/block_definition_validate/ValidateContext.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockDefinitionGroup;
class PackLoadContext;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
struct BlockDefinition;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockDefinitionDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDefinitionModernLoader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 240> mLoader;
    ::ll::UntypedStorage<8, 32>  mValidationContext;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument>>
                                                                          mLoader;
    ::ll::TypedStorage<8, 32, ::BlockDefinitionValidate::ValidateContext> mValidationContext;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockDefinitionModernLoader();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument
    nonCerealizedBlockDefinitionUpgrader(::BlockDefinition&&);
#else // @header-generator platform
    MCAPI static ::BlockDefinition blockDefinitionDocumentToBlockDefinitionTransformer(
        ::cereal::ReflectionCtx const&                                      ctx,
        ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument&& source,
        ::SemVersion                                                        originalJsonVersion
    );

    MCAPI static ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument
    nonCerealizedBlockDefinitionUpgrader(::BlockDefinition&& source);
#endif // @header-generator platform
    // NOLINTEND
};
