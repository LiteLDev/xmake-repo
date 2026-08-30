#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/PBRTexturePtrs.h"

// auto generated forward declare list
// clang-format off
struct ActorTextureInfo;
// clang-format on

struct SimpleTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::PBRTexturePtrs>              mPBRTexturePtrs;
    ::ll::TypedStorage<4, 20, std::optional<MERSUniformData>> mMERSUniforms;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SimpleTextureData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
