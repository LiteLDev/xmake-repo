#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/options/UIProfile.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class HudArmorRenderer : public ::MinecraftUICustomRenderer {
public:
    // HudArmorRenderer inner types define
    enum class ArmorType : int {
        FULL  = 0,
        HALF  = 1,
        EMPTY = 2,
        COUNT = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                    mHasLoadedTextures;
    ::ll::TypedStorage<8, 8, ulong>                                                   mNumFullIcons;
    ::ll::TypedStorage<8, 8, ulong>                                                   mNumHalfIcons;
    ::ll::TypedStorage<8, 8, ulong>                                                   mNumEmptyIcons;
    ::ll::TypedStorage<4, 4, float>                                                   mArmorHeightOffset;
    ::ll::TypedStorage<8, 96, std::array<mce::TexturePtr, 3>>                         mArmorTextures;
    ::ll::TypedStorage<8, 1848, std::array<mce::Mesh, 3>>                             mArmorMeshes;
    ::ll::TypedStorage<4, 120, std::array<glm::vec<3, float, (glm::qualifier)0>, 10>> mIconPosition;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                        mRenderAABB;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudArmorRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HudArmorRenderer();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& mMaxIconCount();
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
};
