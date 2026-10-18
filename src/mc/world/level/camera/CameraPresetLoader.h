#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

class CameraPresetLoader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 240> mLoader;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 256> mUnk65d26f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CameraPresetLoader& operator=(CameraPresetLoader const&);
    CameraPresetLoader(CameraPresetLoader const&);
#endif // @header-generator platform
    CameraPresetLoader();
};
