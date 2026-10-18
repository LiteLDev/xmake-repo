#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/FileReference.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_20_80 {

struct ParticleBasicRenderParameters {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mMaterialNameHash;
    ::ll::UntypedStorage<8, 24>               mTextureName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                   mMaterialNameHash;
    ::ll::TypedStorage<8, 32, ::SharedTypes::FileReference<21>> mTextureName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ParticleBasicRenderParameters();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_20_80
