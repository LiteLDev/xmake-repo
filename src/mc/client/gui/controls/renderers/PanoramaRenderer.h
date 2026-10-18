#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIPropertyBag;
class UIResolvedDef;
// clang-format on

class PanoramaRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIResolvedDef;
// clang-format on

class PanoramaRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
class PanoramaRenderer {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // PanoramaRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class RotationStyle : int {
        None      = 0,
        Automatic = 1,
        GestureX  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PanoramaRenderer::RotationStyle> mRotationStyle;
    ::ll::TypedStorage<4, 4, float>                             mUVxOffset;
    ::ll::TypedStorage<4, 4, float>                             mGestureVel;
    ::ll::TypedStorage<1, 1, bool>                              mHasSetStartingPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PanoramaRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PanoramaRenderer(::UIResolvedDef const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIResolvedDef const&);
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

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class RotationStyle : int {
        None      = 0,
        Automatic = 1,
        GestureX  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PanoramaRenderer::RotationStyle> mRotationStyle;
    ::ll::TypedStorage<4, 4, float>                             mUVxOffset;
    ::ll::TypedStorage<4, 4, float>                             mGestureVel;
    ::ll::TypedStorage<1, 1, bool>                              mHasSetStartingPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    PanoramaRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PanoramaRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PanoramaRenderer(::UIResolvedDef const& def);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIResolvedDef const& def);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance& client, ::UIControl& owner, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class RotationStyle : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
