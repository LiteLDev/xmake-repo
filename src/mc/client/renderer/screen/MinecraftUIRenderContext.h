#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/client/gui/TextAlignment.h"
#include "mc/client/gui/controls/UIRenderContext.h"
#include "mc/client/renderer/screen/MinecraftUIMeasureStrategy.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/RectangleArea.h"

// auto generated forward declare list
// clang-format off
class ComponentRenderBatch;
class CustomRenderComponent;
class Font;
class HashedString;
class IClientInstance;
class IUIRepository;
class ResourceLocation;
class ScreenContext;
class UIMeasureStrategy;
class UIScene;
class UITextureInfoPtr;
struct CaretMeasureData;
struct MinecraftUIPersistentMeshItem;
struct NinesliceInfo;
struct OffscreenCaptureDescription;
struct TextMeasureData;
namespace Core { class Path; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
// clang-format on

class MinecraftUIRenderContext : public ::UIRenderContext {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/client/gui/TextAlignment.h"
#include "mc/client/gui/controls/UIRenderContext.h"
#include "mc/client/renderer/screen/MinecraftUIMeasureStrategy.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/RectangleArea.h"

// auto generated forward declare list
// clang-format off
class ComponentRenderBatch;
class CustomRenderComponent;
class Font;
class HashedString;
class IClientInstance;
class IUIRepository;
class ResourceLocation;
class ScreenContext;
class UIMeasureStrategy;
class UIScene;
class UITextureInfoPtr;
struct CaretMeasureData;
struct MinecraftUIPersistentMeshItem;
struct NinesliceInfo;
struct OffscreenCaptureDescription;
struct TextMeasureData;
namespace Core { class Path; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
// clang-format on

class MinecraftUIRenderContext : public ::UIRenderContext {
#else // @header-generator platform
class MinecraftUIRenderContext {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // MinecraftUIRenderContext inner types declare
    // clang-format off
    struct TextItem;
    struct ImageItem;
    // clang-format on

    // MinecraftUIRenderContext inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct TextItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Font&>             mFont;
        ::ll::TypedStorage<4, 16, ::RectangleArea>    mArea;
        ::ll::TypedStorage<8, 24, std::string>        mText;
        ::ll::TypedStorage<4, 16, ::mce::Color>       mColor;
        ::ll::TypedStorage<1, 1, bool>                mShadow;
        ::ll::TypedStorage<1, 1, bool>                mShowColorSymbol;
        ::ll::TypedStorage<4, 4, int>                 mCaretLocation;
        ::ll::TypedStorage<4, 4, float>               mFontScale;
        ::ll::TypedStorage<4, 4, float>               mLinePadding;
        ::ll::TypedStorage<4, 4, ::ui::TextAlignment> mAlignment;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TextItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Font&>             mFont;
        ::ll::TypedStorage<4, 16, ::RectangleArea>    mArea;
        ::ll::TypedStorage<8, 32, ::std::string>      mText;
        ::ll::TypedStorage<4, 16, ::mce::Color>       mColor;
        ::ll::TypedStorage<1, 1, bool>                mShadow;
        ::ll::TypedStorage<1, 1, bool>                mShowColorSymbol;
        ::ll::TypedStorage<4, 4, int>                 mCaretLocation;
        ::ll::TypedStorage<4, 4, float>               mFontScale;
        ::ll::TypedStorage<4, 4, float>               mLinePadding;
        ::ll::TypedStorage<4, 4, ::ui::TextAlignment> mAlignment;
        // NOLINTEND
#else // @header-generator platform
    struct TextItem {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        TextItem& operator=(TextItem const&);
        TextItem(TextItem const&);
        TextItem();
    };

    struct ImageItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::mce::ClientTexture const&>             mTexture;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPosition;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mSize;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUV;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUVSize;
        ::ll::TypedStorage<1, 1, bool>                                    mColorCorrected;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImageItem& operator=(ImageItem const&);
        ImageItem();
    };

    using PersistentMeshItem = ::MinecraftUIPersistentMeshItem;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                           mClient;
    ::ll::TypedStorage<8, 8, ::ScreenContext&>                                             mScreenContext;
    ::ll::TypedStorage<8, 32, ::MinecraftUIMeasureStrategy>                                mMeasureStrategy;
    ::ll::TypedStorage<4, 4, float>                                                        mTextAlpha;
    ::ll::UntypedStorage<8, 24>                                                            mUIRepository;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>>                          mTextureGroup;
    ::ll::UntypedStorage<8, 24>                                                            mStoreCacheTextures;
    ::ll::TypedStorage<8, 24, std::vector<MinecraftUIRenderContext::TextItem>>             mTextToDraw;
    ::ll::TypedStorage<8, 24, std::vector<MinecraftUIRenderContext::ImageItem>>            mImagesToDraw;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<MinecraftUIPersistentMeshItem>>> mPersistentMeshes;
    ::ll::TypedStorage<1, 1, uchar>                                                        mStencilRef;
    ::ll::TypedStorage<4, 4, int>                                                   mCurrentPersistentMeshItemIdx;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                         mDebugTextFontHandle;
    ::ll::TypedStorage<8, 8, ::UIScene const&>                                      mCurrentScene;
    ::ll::TypedStorage<4, 20, std::optional<glm::vec<4, float, (glm::qualifier)0>>> mSavedOriginalClippingRectangle;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftUIRenderContext& operator=(MinecraftUIRenderContext const&);
    MinecraftUIRenderContext(MinecraftUIRenderContext const&);
    MinecraftUIRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MinecraftUIRenderContext();

    virtual int getLineLength(::Font&, std::string const&, float, bool) const;

    virtual float getTextAlpha() const;

    virtual void setTextAlpha(float);

    virtual void drawDebugText(::RectangleArea const&, std::string&&, ::mce::Color const&, float, ::ui::TextAlignment, ::TextMeasureData const&, ::CaretMeasureData const&);

    virtual void drawText(::Font&, ::RectangleArea const&, std::string&&, ::mce::Color const&, float, ::ui::TextAlignment, ::TextMeasureData const&, ::CaretMeasureData const&);

    virtual void flushText(float, std::optional<float>);

    virtual void drawImage(::mce::ClientTexture const&, ::glm::vec<2, float, (glm::qualifier)0> const&, ::glm::vec<2, float, (glm::qualifier)0> const&, ::glm::vec<2, float, (glm::qualifier)0> const&, ::glm::vec<2, float, (glm::qualifier)0> const&, bool const);

    virtual void drawNineslice(::mce::ClientTexture const&, ::NinesliceInfo const&);

    virtual void flushImages(::mce::Color const&, float, ::HashedString const&);

    virtual void beginSharedMeshBatch(::ComponentRenderBatch&);

    virtual void endSharedMeshBatch(::ComponentRenderBatch&);

    virtual void reserveSharedMeshBatch(ulong);

    virtual ulong getSharedMeshBatchVertexCount() const;

    virtual void drawRectangle(::RectangleArea const&, ::mce::Color const&, float, int);

    virtual void fillRectangle(::RectangleArea const&, ::mce::Color const&, float);

    virtual void increaseStencilRef();

    virtual void decreaseStencilRef();

    virtual void resetStencilRef();

    virtual void fillRectangleStencil(::RectangleArea const&);

    virtual void enableScissorTest(::RectangleArea const&);

    virtual void disableScissorTest();

    virtual void setClippingRectangle(::RectangleArea const&);

    virtual void setFullClippingRectangle();

    virtual void saveCurrentClippingRectangle();

    virtual void restoreSavedClippingRectangle();

    virtual ::RectangleArea getFullClippingRectangle() const;

    virtual bool updateCustom(::gsl::not_null<CustomRenderComponent*>);

    virtual void renderCustom(::gsl::not_null<CustomRenderComponent*>, int);

    virtual void cleanup();

    virtual void removePersistentMeshes();

    virtual ::mce::TexturePtr getTexture(::ResourceLocation const&, bool) const;

    virtual ::mce::TexturePtr getZippedTexture(::Core::Path const&, ::ResourceLocation const&, bool) const;

    virtual bool unloadTexture(::ResourceLocation const&);

    virtual ::UITextureInfoPtr getUITextureInfo(::ResourceLocation const&, bool) const;

    virtual void touchTexture(::ResourceLocation const&);

    virtual ::UIMeasureStrategy& getMeasureStrategy();

    virtual void snapImageSizeToGrid(::glm::vec<2, float, (glm::qualifier)0>&) const;

    virtual void snapImagePositionToGrid(::glm::vec<2, float, (glm::qualifier)0>&) const;

    virtual void notifyImageEstimate(ulong);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftUIRenderContext(::IClientInstance&, ::ScreenContext&, ::UIScene const&);

    MCNAPI ::ScreenContext& getScreenContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _beginSharedMeshBatch(::ComponentRenderBatch const&, ::ScreenContext&);

    MCNAPI static std::unique_ptr<MinecraftUIPersistentMeshItem>
    _createPersistentMesh(::ComponentRenderBatch const&, ::mce::TextureGroup&);

    MCNAPI static bool _endSharedMeshBatch(
        ::ComponentRenderBatch&,
        ::MinecraftUIPersistentMeshItem&,
        ::ScreenContext&,
        ::OffscreenCaptureDescription const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&, ::ScreenContext&, ::UIScene const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getLineLength(::Font&, std::string const&, float, bool) const;

    MCNAPI float $getTextAlpha() const;

    MCNAPI void $setTextAlpha(float);

    MCNAPI void $drawDebugText(
        ::RectangleArea const&,
        std::string&&,
        ::mce::Color const&,
        float,
        ::ui::TextAlignment,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    );

    MCNAPI void $drawText(
        ::Font&,
        ::RectangleArea const&,
        std::string&&,
        ::mce::Color const&,
        float,
        ::ui::TextAlignment,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    );

    MCNAPI void $flushText(float, std::optional<float>);

    MCNAPI void $drawImage(
        ::mce::ClientTexture const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        bool const
    );

    MCNAPI void $drawNineslice(::mce::ClientTexture const&, ::NinesliceInfo const&);

    MCNAPI void $flushImages(::mce::Color const&, float, ::HashedString const&);

    MCNAPI void $beginSharedMeshBatch(::ComponentRenderBatch&);

    MCNAPI void $endSharedMeshBatch(::ComponentRenderBatch&);

    MCNAPI void $reserveSharedMeshBatch(ulong);

    MCNAPI ulong $getSharedMeshBatchVertexCount() const;

    MCNAPI void $drawRectangle(::RectangleArea const&, ::mce::Color const&, float, int);

    MCNAPI void $fillRectangle(::RectangleArea const&, ::mce::Color const&, float);

    MCNAPI void $increaseStencilRef();

    MCNAPI void $decreaseStencilRef();

    MCNAPI void $resetStencilRef();

    MCNAPI void $fillRectangleStencil(::RectangleArea const&);

    MCNAPI void $enableScissorTest(::RectangleArea const&);

    MCNAPI void $disableScissorTest();

    MCNAPI void $setClippingRectangle(::RectangleArea const&);

    MCNAPI void $setFullClippingRectangle();

    MCNAPI void $saveCurrentClippingRectangle();

    MCNAPI void $restoreSavedClippingRectangle();

    MCNAPI ::RectangleArea $getFullClippingRectangle() const;

    MCNAPI bool $updateCustom(::gsl::not_null<CustomRenderComponent*>);

    MCNAPI void $renderCustom(::gsl::not_null<CustomRenderComponent*>, int);

    MCNAPI void $cleanup();

    MCNAPI void $removePersistentMeshes();

    MCNAPI ::mce::TexturePtr $getTexture(::ResourceLocation const&, bool) const;

    MCNAPI ::mce::TexturePtr $getZippedTexture(::Core::Path const&, ::ResourceLocation const&, bool) const;

    MCNAPI bool $unloadTexture(::ResourceLocation const&);

    MCNAPI ::UITextureInfoPtr $getUITextureInfo(::ResourceLocation const&, bool) const;

    MCNAPI void $touchTexture(::ResourceLocation const&);

    MCNAPI ::UIMeasureStrategy& $getMeasureStrategy();

    MCNAPI void $snapImageSizeToGrid(::glm::vec<2, float, (glm::qualifier)0>&) const;

    MCNAPI void $snapImagePositionToGrid(::glm::vec<2, float, (glm::qualifier)0>&) const;

    MCNAPI void $notifyImageEstimate(ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // prevent constructor by default
        TextItem& operator=(TextItem const&);
        TextItem(TextItem const&);
        TextItem();
    };

    struct ImageItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::mce::ClientTexture const&> mTexture;
        ::ll::TypedStorage<4, 8, ::glm::vec2>                 mPosition;
        ::ll::TypedStorage<4, 8, ::glm::vec2>                 mSize;
        ::ll::TypedStorage<4, 8, ::glm::vec2>                 mUV;
        ::ll::TypedStorage<4, 8, ::glm::vec2>                 mUVSize;
        ::ll::TypedStorage<1, 1, bool>                        mColorCorrected;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImageItem& operator=(ImageItem const&);
        ImageItem(ImageItem const&);
        ImageItem();
    };

    using PersistentMeshItem = ::MinecraftUIPersistentMeshItem;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                                 mClient;
    ::ll::TypedStorage<8, 8, ::ScreenContext&>                                                   mScreenContext;
    ::ll::TypedStorage<8, 32, ::MinecraftUIMeasureStrategy>                                      mMeasureStrategy;
    ::ll::TypedStorage<4, 4, float>                                                              mTextAlpha;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IUIRepository>>                    mUIRepository;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>>                            mTextureGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup>>                mStoreCacheTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::MinecraftUIRenderContext::TextItem>>               mTextToDraw;
    ::ll::TypedStorage<8, 24, ::std::vector<::MinecraftUIRenderContext::ImageItem>>              mImagesToDraw;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::MinecraftUIPersistentMeshItem>>> mPersistentMeshes;
    ::ll::TypedStorage<1, 1, uchar>                                                              mStencilRef;
    ::ll::TypedStorage<4, 4, int>                           mCurrentPersistentMeshItemIdx;
    ::ll::TypedStorage<8, 80, ::FontHandle>                 mDebugTextFontHandle;
    ::ll::TypedStorage<8, 8, ::UIScene const&>              mCurrentScene;
    ::ll::TypedStorage<4, 20, ::std::optional<::glm::vec4>> mSavedOriginalClippingRectangle;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftUIRenderContext& operator=(MinecraftUIRenderContext const&);
    MinecraftUIRenderContext(MinecraftUIRenderContext const&);
    MinecraftUIRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftUIRenderContext() /*override*/;

    virtual int getLineLength(::Font& font, ::std::string const& text, float fontSize, bool showColorSymbol) const
        /*override*/;

    virtual float getTextAlpha() const /*override*/;

    virtual void setTextAlpha(float alpha) /*override*/;

    virtual void drawDebugText(
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    ) /*override*/;

    virtual void drawText(
        ::Font&                   font,
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    ) /*override*/;

    virtual void flushText(float deltaTime, ::std::optional<float> obfuscateSwitchTime) /*override*/;

    virtual void drawImage(
        ::mce::ClientTexture const& texture,
        ::glm::vec2 const&          position,
        ::glm::vec2 const&          size,
        ::glm::vec2 const&          uv,
        ::glm::vec2 const&          uvSize,
        bool const                  colorCorrected
    ) /*override*/;

    virtual void drawNineslice(::mce::ClientTexture const& texture, ::NinesliceInfo const& info) /*override*/;

    virtual void
    flushImages(::mce::Color const& color, float alpha, ::HashedString const& materialNameHash) /*override*/;

    virtual ::mce::TexturePtr getTexture(::ResourceLocation const& resourceLocation, bool forceReload) const
        /*override*/;

    virtual ::mce::TexturePtr getZippedTexture(
        ::Core::Path const&       zippedFolderPath,
        ::ResourceLocation const& resourceLocation,
        bool                      forceReload
    ) const /*override*/;

    virtual bool unloadTexture(::ResourceLocation const& resourceLocation) /*override*/;

    virtual ::UITextureInfoPtr getUITextureInfo(::ResourceLocation const& resourceLocation, bool forceReload) const
        /*override*/;

    virtual void touchTexture(::ResourceLocation const& resourceLocation) /*override*/;

    virtual void beginSharedMeshBatch(::ComponentRenderBatch& renderBatch) /*override*/;

    virtual void endSharedMeshBatch(::ComponentRenderBatch& renderBatch) /*override*/;

    virtual void reserveSharedMeshBatch(uint64 vertexCount) /*override*/;

    virtual uint64 getSharedMeshBatchVertexCount() const /*override*/;

    virtual void
    drawRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha, int thickness) /*override*/;

    virtual void fillRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha) /*override*/;

    virtual void increaseStencilRef() /*override*/;

    virtual void decreaseStencilRef() /*override*/;

    virtual void resetStencilRef() /*override*/;

    virtual void fillRectangleStencil(::RectangleArea const& rect) /*override*/;

    virtual void enableScissorTest(::RectangleArea const& rect) /*override*/;

    virtual void disableScissorTest() /*override*/;

    virtual void setClippingRectangle(::RectangleArea const& rect) /*override*/;

    virtual void setFullClippingRectangle() /*override*/;

    virtual void saveCurrentClippingRectangle() /*override*/;

    virtual void restoreSavedClippingRectangle() /*override*/;

    virtual ::RectangleArea getFullClippingRectangle() const /*override*/;

    virtual void cleanup() /*override*/;

    virtual void removePersistentMeshes() /*override*/;

    virtual ::UIMeasureStrategy& getMeasureStrategy() /*override*/;

    virtual void snapImageSizeToGrid(::glm::vec2& size) const /*override*/;

    virtual void snapImagePositionToGrid(::glm::vec2& position) const /*override*/;

    virtual void notifyImageEstimate(uint64 imageCount) /*override*/;

    virtual bool updateCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer) /*override*/;

    virtual void renderCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer, int pass) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    MinecraftUIRenderContext(::IClientInstance& client, ::ScreenContext& screenContext, ::UIScene const& currentScene);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::MinecraftUIPersistentMeshItem>
    _createPersistentMesh(::ComponentRenderBatch const& renderBatch, ::mce::TextureGroup& textureGroup);

    MCAPI static bool _endSharedMeshBatch(
        ::ComponentRenderBatch&              renderBatch,
        ::MinecraftUIPersistentMeshItem&     persistentMeshItem,
        ::ScreenContext&                     screenContext,
        ::OffscreenCaptureDescription const& capture
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IClientInstance& client, ::ScreenContext& screenContext, ::UIScene const& currentScene);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getLineLength(::Font& font, ::std::string const& text, float fontSize, bool showColorSymbol) const;

    MCFOLD float $getTextAlpha() const;

    MCAPI void $setTextAlpha(float alpha);

    MCAPI void $drawDebugText(
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    );

    MCAPI void $drawText(
        ::Font&                   font,
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    );

    MCAPI void $flushText(float deltaTime, ::std::optional<float> obfuscateSwitchTime);

    MCAPI void $drawImage(
        ::mce::ClientTexture const& texture,
        ::glm::vec2 const&          position,
        ::glm::vec2 const&          size,
        ::glm::vec2 const&          uv,
        ::glm::vec2 const&          uvSize,
        bool const                  colorCorrected
    );

    MCAPI void $drawNineslice(::mce::ClientTexture const& texture, ::NinesliceInfo const& info);

    MCAPI void $flushImages(::mce::Color const& color, float alpha, ::HashedString const& materialNameHash);

    MCAPI ::mce::TexturePtr $getTexture(::ResourceLocation const& resourceLocation, bool forceReload) const;

    MCAPI ::mce::TexturePtr $getZippedTexture(
        ::Core::Path const&       zippedFolderPath,
        ::ResourceLocation const& resourceLocation,
        bool                      forceReload
    ) const;

    MCAPI bool $unloadTexture(::ResourceLocation const& resourceLocation);

    MCAPI ::UITextureInfoPtr $getUITextureInfo(::ResourceLocation const& resourceLocation, bool forceReload) const;

    MCAPI void $touchTexture(::ResourceLocation const& resourceLocation);

    MCAPI void $beginSharedMeshBatch(::ComponentRenderBatch& renderBatch);

    MCAPI void $endSharedMeshBatch(::ComponentRenderBatch& renderBatch);

    MCAPI void $reserveSharedMeshBatch(uint64 vertexCount);

    MCAPI uint64 $getSharedMeshBatchVertexCount() const;

    MCAPI void $drawRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha, int thickness);

    MCAPI void $fillRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha);

    MCAPI void $increaseStencilRef();

    MCAPI void $decreaseStencilRef();

    MCAPI void $resetStencilRef();

    MCAPI void $fillRectangleStencil(::RectangleArea const& rect);

    MCAPI void $enableScissorTest(::RectangleArea const& rect);

    MCAPI void $disableScissorTest();

    MCAPI void $setClippingRectangle(::RectangleArea const& rect);

    MCAPI void $setFullClippingRectangle();

    MCAPI void $saveCurrentClippingRectangle();

    MCAPI void $restoreSavedClippingRectangle();

    MCAPI ::RectangleArea $getFullClippingRectangle() const;

    MCAPI void $cleanup();

    MCAPI void $removePersistentMeshes();

    MCFOLD ::UIMeasureStrategy& $getMeasureStrategy();

    MCAPI void $snapImageSizeToGrid(::glm::vec2& size) const;

    MCAPI void $snapImagePositionToGrid(::glm::vec2& position) const;

    MCAPI void $notifyImageEstimate(uint64 imageCount);

    MCAPI bool $updateCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer);

    MCAPI void $renderCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer, int pass);
    // NOLINTEND
#else // @header-generator platform
    struct ImageItem {};
#endif // @header-generator platform
#endif // @header-generator platform
};
