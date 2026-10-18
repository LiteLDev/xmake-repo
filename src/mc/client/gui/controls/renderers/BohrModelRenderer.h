#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class RectangleArea;
class Stopwatch;
class Tessellator;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
// clang-format on

class BohrModelRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class Stopwatch;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class Mesh; }
// clang-format on

class BohrModelRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
class BohrModelRenderer {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // BohrModelRenderer inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct State;
#else // @header-generator platform
#endif // @header-generator platform
    class Renderable;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct State;
#endif // @header-generator platform
    // clang-format on

    // BohrModelRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>    mElectrons;
        ::ll::TypedStorage<4, 4, int>    mProtons;
        ::ll::TypedStorage<4, 4, int>    mNeutrons;
        ::ll::TypedStorage<4, 4, int>    mRings;
        ::ll::TypedStorage<4, 4, float>  mScale;
        ::ll::TypedStorage<4, 8, ::Vec2> mTopLeft;
        ::ll::TypedStorage<4, 8, ::Vec2> mBottomRight;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class Renderable {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::Mesh>> mMesh;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr>             mTexture;
        // NOLINTEND
    };
#else // @header-generator platform
    class Renderable {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        State(State const&);
    };

    class Renderable {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<mce::Mesh>> mMesh;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr>         mTexture;
        // NOLINTEND

    public:
        // prevent constructor by default
        Renderable& operator=(Renderable const&);
        Renderable(Renderable const&);
        Renderable();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Stopwatch>>                  mStopwatch;
    ::ll::TypedStorage<4, 36, ::BohrModelRenderer::State>                 mCurState;
    ::ll::TypedStorage<4, 36, ::BohrModelRenderer::State>                 mLastState;
    ::ll::TypedStorage<4, 4, float>                                       mCenterRadius;
    ::ll::TypedStorage<4, 4, float>                                       mRingDistance;
    ::ll::TypedStorage<4, 4, float>                                       mRingThickness;
    ::ll::TypedStorage<4, 4, float>                                       mMargin;
    ::ll::TypedStorage<4, 4, float>                                       mElectronSize;
    ::ll::TypedStorage<4, 4, float>                                       mClumpRadius;
    ::ll::TypedStorage<4, 4, uint>                                        mProtonSeed;
    ::ll::TypedStorage<4, 4, uint>                                        mNeutronSeed;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                          mRingTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                          mProtonTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                          mElectronTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                          mNeutronTexture;
    ::ll::TypedStorage<8, 24, std::vector<BohrModelRenderer::Renderable>> mRenderables;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BohrModelRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BohrModelRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<UICustomRenderer> $clone() const;

    MCNAPI bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>    mElectrons;
        ::ll::TypedStorage<4, 4, int>    mProtons;
        ::ll::TypedStorage<4, 4, int>    mNeutrons;
        ::ll::TypedStorage<4, 4, int>    mRings;
        ::ll::TypedStorage<4, 4, float>  mScale;
        ::ll::TypedStorage<4, 8, ::Vec2> mTopLeft;
        ::ll::TypedStorage<4, 8, ::Vec2> mBottomRight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Stopwatch>>                  mStopwatch;
    ::ll::TypedStorage<4, 36, ::BohrModelRenderer::State>                     mCurState;
    ::ll::TypedStorage<4, 36, ::BohrModelRenderer::State>                     mLastState;
    ::ll::TypedStorage<4, 4, float>                                           mCenterRadius;
    ::ll::TypedStorage<4, 4, float>                                           mRingDistance;
    ::ll::TypedStorage<4, 4, float>                                           mRingThickness;
    ::ll::TypedStorage<4, 4, float>                                           mMargin;
    ::ll::TypedStorage<4, 4, float>                                           mElectronSize;
    ::ll::TypedStorage<4, 4, float>                                           mClumpRadius;
    ::ll::TypedStorage<4, 4, uint>                                            mProtonSeed;
    ::ll::TypedStorage<4, 4, uint>                                            mNeutronSeed;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                              mRingTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                              mProtonTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                              mElectronTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                              mNeutronTexture;
    ::ll::TypedStorage<8, 24, ::std::vector<::BohrModelRenderer::Renderable>> mRenderables;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BohrModelRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl&, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BohrModelRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl&, int);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&);
    // NOLINTEND
#else // @header-generator platform
    struct State {};
#endif // @header-generator platform
#endif // @header-generator platform
};
