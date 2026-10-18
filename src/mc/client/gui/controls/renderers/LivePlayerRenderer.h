#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GuiData;
class IClientInstance;
class Matrix;
class MinecraftUIRenderContext;
class Mob;
class UIControl;
class UICustomRenderer;
class Vec2;
// clang-format on

class LivePlayerRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GuiData;
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class LivePlayerRenderer : public ::MinecraftUICustomRenderer {
#else // @header-generator platform
class LivePlayerRenderer {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // LivePlayerRenderer inner types declare
    // clang-format off
    struct RotationProxy;
    // clang-format on

    // LivePlayerRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct RotationProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mYBodyRot;
        ::ll::TypedStorage<4, 4, float> mYBodyRotO;
        ::ll::TypedStorage<4, 4, float> mRotX;
        ::ll::TypedStorage<4, 4, float> mRotY;
        ::ll::TypedStorage<4, 4, float> mYHeadRot;
        ::ll::TypedStorage<4, 4, float> mYHeadRotO;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LivePlayerRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _getMousePosition(
        float&,
        float&,
        float,
        float,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const GuiData>> const&,
        ::IClientInstance const&,
        ::UIControl const&
    );
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
    struct RotationProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mYBodyRot;
        ::ll::TypedStorage<4, 4, float> mYBodyRotO;
        ::ll::TypedStorage<4, 4, float> mRotX;
        ::ll::TypedStorage<4, 4, float> mRotY;
        ::ll::TypedStorage<4, 4, float> mYHeadRot;
        ::ll::TypedStorage<4, 4, float> mYHeadRotO;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _getMousePosition(
        float&                                                xMouse,
        float&                                                yMouse,
        float                                                 xo,
        float                                                 yo,
        ::Bedrock::NotNullNonOwnerPtr<::GuiData const> const& guiData,
        ::IClientInstance const&                              client,
        ::UIControl const&                                    owner
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct RotationProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
};
