#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/objects/ParticleLayerRenderObject.h"
#include "mc/platform/NonCopyableField.h"

struct ParticleRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::UntypedStorage<8, 48> mAlphaTested;
        ::ll::UntypedStorage<1, 1>  _;
    };
    ::ll::TypedStorage<8, 48, ::ParticleLayerRenderObject> mBlended;
    ::ll::TypedStorage<8, 48, ::ParticleLayerRenderObject> mOpaque;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleRenderObjectCollection& operator=(ParticleRenderObjectCollection const&);
    ParticleRenderObjectCollection(ParticleRenderObjectCollection const&);
    ParticleRenderObjectCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParticleRenderObjectCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
