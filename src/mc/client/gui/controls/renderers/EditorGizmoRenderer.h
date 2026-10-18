#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIScene;
// clang-format on

class EditorGizmoRenderer : public ::MinecraftUICustomRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorGizmoRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;

    virtual void preRenderSetup(::MinecraftUIRenderContext& renderContext) /*override*/;

    virtual void render(::MinecraftUIRenderContext& context, ::IClientInstance& client, ::UIControl&, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCFOLD bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);

    MCFOLD void $preRenderSetup(::MinecraftUIRenderContext& renderContext);

    MCAPI void $render(::MinecraftUIRenderContext& context, ::IClientInstance& client, ::UIControl&, int);
    // NOLINTEND
};
#else // @header-generator platform
class EditorGizmoRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform
