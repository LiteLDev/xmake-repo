#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/FileReference.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleBasicRenderParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mMaterialNameHash;
    ::ll::UntypedStorage<8, 24>               mTextureName;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleBasicRenderParameters();
};

} // namespace SharedTypes::v1_20_80
