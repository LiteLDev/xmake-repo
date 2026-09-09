#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class ProgressBarRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>              mPrimaryColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>              mSecondaryColor;
    ::ll::TypedStorage<4, 20, std::optional<mce::Color>> mFullStorageColor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProgressBarRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setFullStorageColor(::mce::Color const&);

    MCNAPI void setPrimaryColor(::mce::Color const&);

    MCNAPI void setSecondaryColor(::mce::Color const&);
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
};
