#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/UIBatchType.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class QRCodeRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>  mQrCodeContent;
    ::ll::TypedStorage<4, 16, ::mce::Color> mForegroundColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mBackgroundColor;
    ::ll::UntypedStorage<1, 24>             mTexture;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~QRCodeRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual ::UIBatchType getBatchType() const;

    virtual int getCustomId() const;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setBackgroundColor(::mce::Color const&);

    MCNAPI void setForegroundColor(::mce::Color const&);
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

    MCNAPI ::UIBatchType $getBatchType() const;

    MCNAPI int $getCustomId() const;

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
