#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/objects/ParticleLayerRenderObject.h"
#include "mc/platform/NonCopyableField.h"

struct ParticleRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::TypedStorage<8, 48, ::ParticleLayerRenderObject> mAlphaTested;
            ::ll::TypedStorage<8, 48, ::ParticleLayerRenderObject> mBlended;
            ::ll::TypedStorage<8, 48, ::ParticleLayerRenderObject> mOpaque;
        };
        ::ll::TypedStorage<1, 1, ::Bedrock::Detail::NonCopyableField> _;
    };
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ParticleRenderObjectCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ParticleRenderObjectCollection {};
#endif // @header-generator platform
#endif // @header-generator platform
