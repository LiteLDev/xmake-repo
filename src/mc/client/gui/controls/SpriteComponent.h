#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ClipDirection.h"
#include "mc/client/gui/SliceSize.h"
#include "mc/client/gui/TileDirection.h"
#include "mc/client/gui/UITextureInfoPtr.h"
#include "mc/client/gui/controls/RenderableComponent.h"
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core_graphics/ImageDescription.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class UIComponent;
class UIControl;
class UIRenderContext;
struct ImageInfo;
namespace Core { class PathView; }
// clang-format on

class SpriteComponent : public ::RenderableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                     mResourceLocation;
    ::ll::TypedStorage<8, 88, ::UITextureInfoPtr>                     mUITextureInfo;
    ::ll::TypedStorage<8, 88, ::UITextureInfoPtr>                     mBackCompatUITexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                      mTexture;
    ::ll::TypedStorage<4, 20, ::cg::ImageDescription>                 mCachedImageDescription;
    ::ll::TypedStorage<4, 4, ::UIMaterialType>                        mUIMaterialType;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUV;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUVSize;
    ::ll::TypedStorage<4, 16, ::mce::Color>                           mColor;
    ::ll::TypedStorage<4, 16, ::ui::SliceSize>                        mNineSliceSize;
    ::ll::TypedStorage<1, 1, ::ui::ClipDirection>                     mClipDirection;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mTiledScale;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mInvTextureSize;
    ::ll::TypedStorage<4, 4, ::ui::TileDirection>                     mTiled;
    ::ll::TypedStorage<4, 4, float>                                   mClipRatio;
    bool                                                              mClipPixelPerfect             : 1;
    bool                                                              mHasNineSlice                 : 1;
    bool                                                              mPixelPerfect                 : 1;
    bool                                                              mKeepRatio                    : 1;
    bool                                                              mFilled                       : 1;
    bool                                                              mEnableGrayscale              : 1;
    bool                                                              mEnableBilinear               : 1;
    bool                                                              mTriggerDebugLog              : 1;
    bool                                                              mForceReloadTexture           : 1;
    bool                                                              mTextureHasChanged            : 1;
    bool                                                              mAllowDebugTextureReplacement : 1;
    bool                                                              mColorCorrected               : 1;
    ::ll::UntypedStorage<8, 24>                                       mZipFolder;
    // NOLINTEND

public:
    // prevent constructor by default
    SpriteComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpriteComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SpriteComponent(::UIControl&);

    MCNAPI void _drawClipped(
        ::UIRenderContext&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&
    );

    MCNAPI void _drawClipped(
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::Bedrock::small_vector<ImageInfo, 1>&
    );

    MCNAPI void _drawFilled(
        ::UIRenderContext&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&
    ) const;

    MCNAPI void _drawKeepRatio(
        ::UIRenderContext&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&
    ) const;

    MCNAPI void _drawTiled(
        ::UIRenderContext&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&
    );

    MCNAPI void _drawTiled(
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::Bedrock::small_vector<ImageInfo, 1>&
    );

    MCNAPI void _drawTiled(
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        std::function<void(
            const glm::vec<2, float, (glm::qualifier)0>&,
            const glm::vec<2, float, (glm::qualifier)0>&,
            const glm::vec<2, float, (glm::qualifier)0>&,
            const glm::vec<2, float, (glm::qualifier)0>&
        )>
    ) const;

    MCNAPI void _drawTiledClipped(
        ::UIRenderContext&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&
    );

    MCNAPI void _drawTiledClipped(
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::Bedrock::small_vector<ImageInfo, 1>&
    );

    MCNAPI void _drawTiledClipped(
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        std::function<void(
            const glm::vec<2, float, (glm::qualifier)0>&,
            const glm::vec<2, float, (glm::qualifier)0>&,
            const glm::vec<2, float, (glm::qualifier)0>&,
            const glm::vec<2, float, (glm::qualifier)0>&
        )>
    );

    MCNAPI void _getClippedInfo(
        ::glm::vec<2, float, (glm::qualifier)0>&,
        ::glm::vec<2, float, (glm::qualifier)0>&,
        ::glm::vec<2, float, (glm::qualifier)0>&,
        ::glm::vec<2, float, (glm::qualifier)0>&
    ) const;

    MCNAPI bool getBilinearEnabled() const;

    MCNAPI float getClipRatio() const;

    MCNAPI ::mce::Color const& getColor() const;

    MCNAPI ::ui::SliceSize const& getNineSliceSize() const;

    MCNAPI ::ResourceLocation const& getResourceLocation() const;

    MCNAPI ::mce::TexturePtr& getTexture();

    MCNAPI ::UIMaterialType getUIMaterialType() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getUVSize() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getZipFolder() const;

    MCNAPI void render(::UIRenderContext&);

    MCNAPI void setBilinearEnabled(bool);

    MCNAPI void setClipRatio(float);

    MCNAPI void setColor(::mce::Color const&);

    MCNAPI void setGrayscaleEnabled(bool);

    MCNAPI void setNineSliceSize(::ui::SliceSize const&);

    MCNAPI void setResourceLocation(::ResourceLocation const&);

    MCNAPI void setUV(::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI void setUVSize(::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI void setZipFolder(::Core::PathView);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIControl&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<UIComponent> $clone(::UIControl&) const;

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ClipDirection.h"
#include "mc/client/gui/SliceSize.h"
#include "mc/client/gui/TileDirection.h"
#include "mc/client/gui/UITextureInfoPtr.h"
#include "mc/client/gui/controls/RenderableComponent.h"
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core_graphics/ImageDescription.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class UIComponent;
class UIControl;
class UIRenderContext;
namespace Core { class PathView; }
// clang-format on

class SpriteComponent : public ::RenderableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                mResourceLocation;
    ::ll::TypedStorage<8, 96, ::UITextureInfoPtr>                mUITextureInfo;
    ::ll::TypedStorage<8, 96, ::UITextureInfoPtr>                mBackCompatUITexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                 mTexture;
    ::ll::TypedStorage<4, 20, ::cg::ImageDescription>            mCachedImageDescription;
    ::ll::TypedStorage<4, 4, ::UIMaterialType>                   mUIMaterialType;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                        mUV;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                        mUVSize;
    ::ll::TypedStorage<4, 16, ::mce::Color>                      mColor;
    ::ll::TypedStorage<4, 16, ::ui::SliceSize>                   mNineSliceSize;
    ::ll::TypedStorage<1, 1, ::ui::ClipDirection>                mClipDirection;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                        mTiledScale;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                        mInvTextureSize;
    ::ll::TypedStorage<4, 4, ::ui::TileDirection>                mTiled;
    ::ll::TypedStorage<4, 4, float>                              mClipRatio;
    bool                                                         mClipPixelPerfect             : 1;
    bool                                                         mHasNineSlice                 : 1;
    bool                                                         mPixelPerfect                 : 1;
    bool                                                         mKeepRatio                    : 1;
    bool                                                         mFilled                       : 1;
    bool                                                         mEnableGrayscale              : 1;
    bool                                                         mEnableBilinear               : 1;
    bool                                                         mTriggerDebugLog              : 1;
    bool                                                         mForceReloadTexture           : 1;
    bool                                                         mTextureHasChanged            : 1;
    bool                                                         mAllowDebugTextureReplacement : 1;
    bool                                                         mColorCorrected               : 1;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mZipFolder;
    // NOLINTEND

public:
    // prevent constructor by default
    SpriteComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpriteComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SpriteComponent(::UIControl& owner);

    MCAPI void _drawClipped(
        ::glm::vec2 const&                                                                                    pos,
        ::glm::vec2 const&                                                                                    size,
        ::glm::vec2 const&                                                                                    startUV,
        ::glm::vec2 const&                                                                                    uvSize,
        ::std::function<void(::glm::vec2 const&, ::glm::vec2 const&, ::glm::vec2 const&, ::glm::vec2 const&)> callback
    ) const;

    MCAPI void _drawFilled(
        ::UIRenderContext& context,
        ::glm::vec2 const& startPos,
        ::glm::vec2 const& size,
        ::glm::vec2 const& startUV,
        ::glm::vec2 const& uvSize
    ) const;

    MCAPI void _drawKeepRatio(
        ::UIRenderContext& context,
        ::glm::vec2 const& startPos,
        ::glm::vec2 const& size,
        ::glm::vec2 const& startUV,
        ::glm::vec2 const& uvSize
    ) const;

    MCAPI void _drawTiled(
        ::glm::vec2 const&                                                                                    startPos,
        ::glm::vec2 const&                                                                                    size,
        ::glm::vec2 const&                                                                                    startUV,
        ::glm::vec2 const&                                                                                    uvSize,
        ::std::function<void(::glm::vec2 const&, ::glm::vec2 const&, ::glm::vec2 const&, ::glm::vec2 const&)> callback
    ) const;

    MCAPI void _drawTiledClipped(
        ::glm::vec2 const&                                                                                    startPos,
        ::glm::vec2 const&                                                                                    size,
        ::glm::vec2 const&                                                                                    startUV,
        ::glm::vec2 const&                                                                                    uvSize,
        ::std::function<void(::glm::vec2 const&, ::glm::vec2 const&, ::glm::vec2 const&, ::glm::vec2 const&)> callback
    );

    MCAPI void
    _getClippedInfo(::glm::vec2& clipPos, ::glm::vec2& clipSize, ::glm::vec2& clipUV, ::glm::vec2& clipUVSize) const;

    MCAPI void render(::UIRenderContext& context);

    MCAPI void setResourceLocation(::ResourceLocation const& resourceLocation);

    MCAPI void setZipFolder(::Core::PathView zipFolder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class SpriteComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
