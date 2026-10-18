#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class Tessellator;
struct IntRectangle;
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
namespace mce { struct ServerTexture; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ScreenContext;
class Tessellator;
class Vec2;
struct IntRectangle;
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
namespace mce { struct ServerTexture; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class ScreenRenderer {
public:
    // ScreenRenderer inner types declare
    // clang-format off
    class QuadBuffer;
    // clang-format on

    // ScreenRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum ScreenMaterial : uint {
        BLIT                      = 0,
        FILL                      = 1,
        FILL_GRADIENT             = 2,
        COLOR_BLIT                = 3,
        COLOR_BLIT_BLUR           = 4,
        BLIT_CURRENT_SHADER_COLOR = 5,
        STENCIL_FILL              = 6,
        SCREEN_MAT_COUNT          = 7,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ScreenMaterial : int {
        Blit                   = 0,
        Fill                   = 1,
        FillGradient           = 2,
        ColorBlit              = 3,
        ColorBlitBlur          = 4,
        BlitCurrentShaderColor = 5,
        StencilFill            = 6,
        ScreenMatCount         = 7,
    };
#else // @header-generator platform
    enum class ScreenMaterial : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    class QuadBuffer : public ::std::vector<Vec2> {
    public:
        // prevent constructor by default
        QuadBuffer();
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void blit(::ScreenContext&, ::mce::TexturePtr const&, ::IntRectangle const&, ::mce::MaterialPtr const*);

    MCNAPI void blit(
        ::ScreenContext&,
        std::variant<std::monostate, mce::TexturePtr, mce::ClientTexture, mce::ServerTexture> const&,
        ::IntRectangle const&,
        ::mce::MaterialPtr const*
    );

    MCNAPI void blit(
        ::ScreenContext&,
        ::mce::TexturePtr const&,
        int,
        int,
        int,
        int,
        int,
        int,
        int,
        int,
        ::mce::MaterialPtr const*,
        float,
        float
    );

    MCNAPI void blit(
        ::ScreenContext&,
        std::variant<std::monostate, mce::TexturePtr, mce::ClientTexture, mce::ServerTexture> const&,
        int,
        int,
        int,
        int,
        int,
        int,
        int,
        int,
        ::mce::MaterialPtr const*,
        float,
        float
    );

    MCNAPI void blitQuadBuffer(
        ::ScreenRenderer::QuadBuffer const&,
        float,
        float,
        ::ScreenContext&,
        ::mce::TexturePtr const&,
        ::mce::MaterialPtr const*
    );

    MCNAPI void drawRect(::ScreenContext&, int, int, int, int, ::mce::Color const&, int);

    MCNAPI void fill(::ScreenContext&, int, int, int, int, ::mce::Color const&) const;

    MCNAPI void fill(::ScreenContext&, float, float, float, float, ::mce::Color const&) const;

    MCNAPI void fillGradient(
        ::ScreenContext&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::mce::Color const&,
        ::mce::Color const&
    );

    MCNAPI void fillGradient(::ScreenContext&, float, float, float, float, ::mce::Color const&, ::mce::Color const&);

    MCNAPI void fillHorizontalGradient(
        ::ScreenContext&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::mce::Color const&,
        ::mce::Color const&
    );

    MCNAPI void
    fillHorizontalGradient(::ScreenContext&, float, float, float, float, ::mce::Color const&, ::mce::Color const&);

    MCNAPI void fillStencil(::ScreenContext&, float, float, float, float) const;

    MCNAPI ::mce::MaterialPtr const& getMaterial(::ScreenRenderer::ScreenMaterial) const;

    MCNAPI bool
    tessellateQuadBuffer(::ScreenRenderer::QuadBuffer const&, float, float, ::Tessellator&, ::mce::TexturePtr const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void destroyInstance();

    MCNAPI static bool hasMaterial(::ScreenRenderer::ScreenMaterial);

    MCNAPI static void loadMaterials();

    MCNAPI static ::ScreenRenderer& singleton();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::mce::MaterialPtr[7]> mScreenMaterials();

    MCNAPI static std::unique_ptr<ScreenRenderer>& singletonPtr();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class QuadBuffer : public ::std::vector<::Vec2> {
    public:
        // prevent constructor by default
        QuadBuffer();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit QuadBuffer(uint64 estimatedQuadCount);

        MCAPI ~QuadBuffer();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(uint64 estimatedQuadCount);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void blit(
        ::ScreenContext&          screenContext,
        ::mce::TexturePtr const&  tex,
        ::IntRectangle const&     rect,
        ::mce::MaterialPtr const* optionalMat
    );

    MCAPI void blit(
        ::ScreenContext& screenContext,
        ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture> const& texture,
        int                                                                                                    x,
        int                                                                                                    y,
        int                                                                                                    sx,
        int                                                                                                    sy,
        int                                                                                                    w,
        int                                                                                                    h,
        int                                                                                                    sw,
        int                                                                                                    sh,
        ::mce::MaterialPtr const* optionalMat,
        float                     us,
        float                     vs
    );

    MCAPI void blit(
        ::ScreenContext&          screenContext,
        ::mce::TexturePtr const&  texture,
        int                       x,
        int                       y,
        int                       sx,
        int                       sy,
        int                       w,
        int                       h,
        int                       sw,
        int                       sh,
        ::mce::MaterialPtr const* optionalMat,
        float                     us,
        float                     vs
    );

    MCAPI void blitQuadBuffer(
        ::ScreenRenderer::QuadBuffer const& quadBuffer,
        float                               quadW,
        float                               quadH,
        ::ScreenContext&                    screenContext,
        ::mce::TexturePtr const&            texture,
        ::mce::MaterialPtr const*           optionalMat
    );

    MCAPI void
    fill(::ScreenContext& screenContext, float x0, float y0, float x1, float y1, ::mce::Color const& color) const;

    MCAPI void fillGradient(
        ::ScreenContext&    screenContext,
        float               x0,
        float               y0,
        float               x1,
        float               y1,
        ::mce::Color const& color1,
        ::mce::Color const& color2
    );

    MCAPI void fillHorizontalGradient(
        ::ScreenContext&    screenContext,
        float               x0,
        float               y0,
        float               x1,
        float               y1,
        ::mce::Color const& color1,
        ::mce::Color const& color2
    );

    MCAPI void fillStencil(::ScreenContext& screenContext, float x0, float y0, float x1, float y1) const;

    MCAPI bool tessellateQuadBuffer(
        ::ScreenRenderer::QuadBuffer const& quadBuffer,
        float                               quadW,
        float                               quadH,
        ::Tessellator&                      tessellator,
        ::mce::TexturePtr const&            texture
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void loadMaterials();

    MCAPI static ::ScreenRenderer& singleton();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::mce::MaterialPtr[]> mScreenMaterials();

    MCAPI static ::std::unique_ptr<::ScreenRenderer>& singletonPtr();
    // NOLINTEND
#else // @header-generator platform
    class QuadBuffer {};
#endif // @header-generator platform
#endif // @header-generator platform
};
