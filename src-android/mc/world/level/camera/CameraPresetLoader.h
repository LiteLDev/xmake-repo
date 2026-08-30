#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class LinkedAssetValidator;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace SharedTypes::v1_21_90 { struct CameraPresetFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraPresetLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPresetLoader();
};
