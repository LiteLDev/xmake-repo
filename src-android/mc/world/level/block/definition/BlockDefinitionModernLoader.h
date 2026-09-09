#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/BlockDefinitionValidate__ValidateContext.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class BlockDefinitionGroup;
class PackLoadContext;
class SemVersion;
struct BlockDefinition;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockDefinitionDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDefinitionModernLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mLoader;
    ::ll::UntypedStorage<8, 32>  mValidationContext;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionModernLoader();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument
    nonCerealizedBlockDefinitionUpgrader(::BlockDefinition&&);
    // NOLINTEND
};
