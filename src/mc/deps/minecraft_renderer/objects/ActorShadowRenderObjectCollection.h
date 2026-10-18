#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/minecraft_renderer/objects/ActorShadowRenderObject.h"

// auto generated forward declare list
// clang-format off
struct FrameRenderObject;
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

struct ActorShadowRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                           mEntityShadows;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mShadowCylinder;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mShadowOverlayCube;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mShadowDisc;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>   mShadowVolumeFront;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>   mShadowVolumeBack;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>   mShadowOverlayMat;
    ::ll::TypedStorage<4, 16, ::mce::Color>               mShadowColor;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorShadowRenderObjectCollection& operator=(ActorShadowRenderObjectCollection const&);
    ActorShadowRenderObjectCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorShadowRenderObjectCollection();
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
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/memory/LinearAllocator.h"

// auto generated forward declare list
// clang-format off
struct ActorShadowRenderObject;
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

struct ActorShadowRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::vector<::ActorShadowRenderObject, ::LinearAllocator<::ActorShadowRenderObject>>>
                                                              mEntityShadows;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mShadowCylinder;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mShadowOverlayCube;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mShadowDisc;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>       mShadowVolumeFront;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>       mShadowVolumeBack;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>       mShadowOverlayMat;
    ::ll::TypedStorage<4, 16, ::mce::Color>                   mShadowColor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorShadowRenderObjectCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ActorShadowRenderObjectCollection {};
#endif // @header-generator platform
#endif // @header-generator platform
