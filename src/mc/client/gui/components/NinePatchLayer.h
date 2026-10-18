#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ScreenRenderer.h"
#include "mc/client/gui/components/NinePatchDescription.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class Tessellator;
// clang-format on

class NinePatchLayer : public ::ScreenRenderer {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ScreenRenderer.h"
#include "mc/client/gui/components/NinePatchDescription.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class Tessellator;
// clang-format on

class NinePatchLayer : public ::ScreenRenderer {
#else // @header-generator platform
class NinePatchLayer {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // NinePatchLayer inner types declare
    // clang-format off
    struct CachedQuad;
    // clang-format on

    // NinePatchLayer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct CachedQuad {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> x0;
        ::ll::TypedStorage<4, 4, float> x1;
        ::ll::TypedStorage<4, 4, float> y0;
        ::ll::TypedStorage<4, 4, float> y1;
        ::ll::TypedStorage<4, 4, float> z;
        ::ll::TypedStorage<4, 4, float> u0;
        ::ll::TypedStorage<4, 4, float> u1;
        ::ll::TypedStorage<4, 4, float> v0;
        ::ll::TypedStorage<4, 4, float> v1;
        // NOLINTEND
    };

    using CachedQuad = ::NinePatchLayer::CachedQuad;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                             w;
    ::ll::TypedStorage<4, 4, float>                             h;
    ::ll::TypedStorage<4, 56, ::NinePatchDescription>           desc;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                texture;
    ::ll::TypedStorage<4, 4, int>                               excluded;
    ::ll::TypedStorage<4, 324, ::NinePatchLayer::CachedQuad[9]> quads;
    // NOLINTEND

public:
    // prevent constructor by default
    NinePatchLayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NinePatchLayer();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void draw(::ScreenContext&, ::Tessellator&, float, float);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct CachedQuad {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> x0;
        ::ll::TypedStorage<4, 4, float> x1;
        ::ll::TypedStorage<4, 4, float> y0;
        ::ll::TypedStorage<4, 4, float> y1;
        ::ll::TypedStorage<4, 4, float> z;
        ::ll::TypedStorage<4, 4, float> u0;
        ::ll::TypedStorage<4, 4, float> u1;
        ::ll::TypedStorage<4, 4, float> v0;
        ::ll::TypedStorage<4, 4, float> v1;
        // NOLINTEND
    };

    using CachedQuad = ::NinePatchLayer::CachedQuad;

    using CachedQuad = ::NinePatchLayer::CachedQuad;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                             w;
    ::ll::TypedStorage<4, 4, float>                             h;
    ::ll::TypedStorage<4, 56, ::NinePatchDescription>           desc;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                texture;
    ::ll::TypedStorage<4, 4, int>                               excluded;
    ::ll::TypedStorage<4, 324, ::NinePatchLayer::CachedQuad[9]> quads;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NinePatchLayer() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void draw(::ScreenContext& screenContext, ::Tessellator& tessellator, float x, float y);
    // NOLINTEND
#else // @header-generator platform
    struct CachedQuad {};
#endif // @header-generator platform
#endif // @header-generator platform
};
