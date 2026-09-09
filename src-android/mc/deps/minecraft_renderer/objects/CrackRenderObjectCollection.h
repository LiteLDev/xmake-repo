#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/minecraft_renderer/objects/CrackRenderObject.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
struct FrameRenderObject;
// clang-format on

struct CrackRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                  mCracks;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mAtlasTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    CrackRenderObjectCollection& operator=(CrackRenderObjectCollection const&);
    CrackRenderObjectCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CrackRenderObjectCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
