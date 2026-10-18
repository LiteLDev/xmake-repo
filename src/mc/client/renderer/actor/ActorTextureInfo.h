#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/ActorTextureResourceLocations.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/PBRTexturePtrs.h"

struct ActorTextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::PBRTexturePtrs>                mTexturePtrs;
    ::ll::TypedStorage<8, 160, ::ActorTextureResourceLocations> mResourceLocations;
    ::ll::TypedStorage<4, 20, std::optional<MERSUniformData>>   mMERSUniforms;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorTextureInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/ActorTextureResourceLocations.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/PBRTexturePtrs.h"

struct ActorTextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::PBRTexturePtrs>                  mTexturePtrs;
    ::ll::TypedStorage<8, 184, ::ActorTextureResourceLocations>   mResourceLocations;
    ::ll::TypedStorage<4, 20, ::std::optional<::MERSUniformData>> mMERSUniforms;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorTextureInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ActorTextureInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
