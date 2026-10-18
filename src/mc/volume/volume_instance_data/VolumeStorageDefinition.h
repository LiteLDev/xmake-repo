#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace VolumeInstanceData {

struct VolumeStorageDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mJsonIdentifier;
    ::ll::TypedStorage<8, 24, std::string> mInstanceName;
    ::ll::TypedStorage<4, 12, ::Vec3>      mMin;
    ::ll::TypedStorage<4, 12, ::Vec3>      mMax;
    ::ll::TypedStorage<4, 4, int>          mDimension;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk526e8a;
    ::ll::UntypedStorage<8, 32> mUnk9c727e;
    ::ll::UntypedStorage<4, 12> mUnk531db0;
    ::ll::UntypedStorage<4, 12> mUnk71dbde;
    ::ll::UntypedStorage<4, 4>  mUnk5328d3;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeStorageDefinition& operator=(VolumeStorageDefinition const&);
    VolumeStorageDefinition(VolumeStorageDefinition const&);
    VolumeStorageDefinition();

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VolumeInstanceData
