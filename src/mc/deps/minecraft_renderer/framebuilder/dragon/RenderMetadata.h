#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/CustomSurfaceShaderMetadata.h"
#include "mc/deps/minecraft_renderer/resources/OffscreenCaptureDescription.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/CustomSurfaceShaderMetadata.h"
#include "mc/deps/minecraft_renderer/resources/OffscreenCaptureDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long const>                                             mID;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::CustomSurfaceShaderMetadata const> mCSSMetadata;
    ::ll::TypedStorage<1, 1, bool const>                                             mIsItem;
    ::ll::TypedStorage<8, 40, ::OffscreenCaptureDescription>                         mOffscreenCaptureDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderMetadata& operator=(RenderMetadata const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderMetadata(::dragon::RenderMetadata const&);

    MCNAPI ~RenderMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::RenderMetadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RenderMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64 const>                                            mID;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::CustomSurfaceShaderMetadata const> mCSSMetadata;
    ::ll::TypedStorage<1, 1, bool const>                                             mIsItem;
    ::ll::TypedStorage<8, 40, ::OffscreenCaptureDescription>                         mOffscreenCaptureDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderMetadata& operator=(RenderMetadata const&);
    RenderMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderMetadata(::dragon::RenderMetadata const&);

    MCAPI ~RenderMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::dragon::RenderMetadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct RenderMetadata {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace dragon
