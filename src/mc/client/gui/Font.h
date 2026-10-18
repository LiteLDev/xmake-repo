#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
class ResourceLocation;
class ScreenContext;
class Tessellator;
struct OffscreenCaptureDescription;
namespace Core { class Path; }
namespace mce { class TextureGroup; }
namespace mce::Font { struct RenderingParameters; }
// clang-format on

class Font : public ::std::enable_shared_from_this<Font> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
class ResourceLocation;
class ScreenContext;
class Tessellator;
struct OffscreenCaptureDescription;
namespace Core { class Path; }
namespace mce { class TextureGroup; }
namespace mce::Font { struct RenderingParameters; }
// clang-format on

class Font : public ::std::enable_shared_from_this<::Font> {
#else // @header-generator platform
class Font {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // Font inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct GlyphQuad;
#endif // @header-generator platform
    struct TextObject;
    class TextObjectCache;
#if defined(LL_PLAT_A) // @header-generator platform
    struct GlyphQuad;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // Font inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct GlyphQuad {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::Vec2>        meshUpperLeft;
        ::ll::TypedStorage<4, 8, ::Vec2>        meshSize;
        ::ll::TypedStorage<4, 8, ::Vec2>        textureUpperLeft;
        ::ll::TypedStorage<4, 8, ::Vec2>        textureBottomRight;
        ::ll::TypedStorage<4, 4, int>           shear;
        ::ll::TypedStorage<4, 16, ::mce::Color> color;
        // NOLINTEND
    };
#else // @header-generator platform
    struct GlyphQuad {};
#endif // @header-generator platform

#endif // @header-generator platform
    struct TextObject {
    public:
        // TextObject inner types declare
        // clang-format off
        struct Page;
        // clang-format on

        // TextObject inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        struct Page {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 616, ::mce::Mesh>      mMesh;
            ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mTexture;
            ::ll::TypedStorage<4, 4, int>                mSheet;
            // NOLINTEND

        public:
            // prevent constructor by default
            Page& operator=(Page const&);
            Page(Page const&);
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<Font::TextObject::Page>> mPages;
        ::ll::TypedStorage<4, 16, ::mce::Color>                        mColor;
        ::ll::TypedStorage<1, 1, bool>                                 mContainsUnicode;
        ::ll::TypedStorage<1, 1, bool>                                 mShadow;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void
        render(::ScreenContext&, ::Font const&, ::mce::MaterialPtr const*, ::OffscreenCaptureDescription const&) const;

        MCNAPI ~TextObject();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        struct Page {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 616, ::mce::Mesh>      mMesh;
            ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mTexture;
            ::ll::TypedStorage<4, 4, int>                mSheet;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::Font::TextObject::Page>> mPages;
        ::ll::TypedStorage<4, 16, ::mce::Color>                            mColor;
        ::ll::TypedStorage<1, 1, bool>                                     mContainsUnicode;
        ::ll::TypedStorage<1, 1, bool>                                     mShadow;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void render(
            ::ScreenContext&                     screenContext,
            ::Font const&                        font,
            ::mce::MaterialPtr const*            optionalMat,
            ::OffscreenCaptureDescription const& offscreenCaptureDescription
        ) const;
        // NOLINTEND
#else // @header-generator platform
        struct Page {};
#endif // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    class TextObjectCache {
    public:
        // TextObjectCache inner types define
        using TextObjectsPtr = std::shared_ptr<std::vector<std::shared_ptr<Font::TextObject>>>;

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::map<std::tuple<std::string, mce::Color, float, float, bool, bool>, std::shared_ptr<std::vector<std::shared_ptr<Font::TextObject>>>, std::less<void>, std::allocator<std::pair<const std::tuple<std::string, mce::Color, float, float, bool, bool>, std::shared_ptr<std::vector<std::shared_ptr<Font::TextObject>>>>>>> mEntries;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        TextObjectCache& operator=(TextObjectCache const&);
    };

    struct GlyphQuad {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::Vec2>        meshUpperLeft;
        ::ll::TypedStorage<4, 8, ::Vec2>        meshSize;
        ::ll::TypedStorage<4, 8, ::Vec2>        textureUpperLeft;
        ::ll::TypedStorage<4, 8, ::Vec2>        textureBottomRight;
        ::ll::TypedStorage<4, 4, int>           shear;
        ::ll::TypedStorage<4, 16, ::mce::Color> color;
        // NOLINTEND
    };

    using StringCacheLookupKey = std::tuple<std::string_view, mce::Color, float, float, bool, bool>;

    using StringCacheStoredKey = std::tuple<std::string, mce::Color, float, float, bool, bool>;

    using CurrentLineCallback = std::function<bool(const std::string_view&, std::string&, float, uint&)> const;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 512, ::mce::Color[32]>                        mColors;
    ::ll::TypedStorage<4, 4, float>                                     mScalarOverride;
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<int, int, float>>> mScaleOverrideCharacter;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>>       mTextureGroup;
    ::ll::TypedStorage<8, 24, ::Font::TextObjectCache>                  mStringCache;
    ::ll::TypedStorage<4, 4, int>                                       mObfuscatedIndex;
    ::ll::TypedStorage<4, 4, float>                                     mObfuscatedTextTime;
    ::ll::TypedStorage<4, 8, ::Vec2>                                    mCaretRenderPosition;
    ::ll::TypedStorage<4, 8, ::Vec2>                                    mCaretRenderSize;
    ::ll::TypedStorage<1, 1, bool>                                      mAlwaysUnicode;
    ::ll::TypedStorage<1, 1, bool>                                      mAutoResetFormat;
    ::ll::TypedStorage<1, 1, bool>                                      mUseCache;
    ::ll::TypedStorage<4, 16, ::mce::Color>                             mCurrentColor;
    ::ll::TypedStorage<4, 4, int>                                       mFontTexture;
    ::ll::TypedStorage<4, 16, ::mce::Color>                             mCaretColor;
    ::ll::TypedStorage<1, 1, bool>                                      mItalic;
    ::ll::TypedStorage<1, 1, bool>                                      mBold;
    ::ll::TypedStorage<1, 1, bool>                                      mStrikethrough;
    ::ll::TypedStorage<1, 1, bool>                                      mUnderlined;
    ::ll::TypedStorage<1, 1, bool>                                      mObfuscated;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                       mFontMat;
    // NOLINTEND

public:
    // prevent constructor by default
    Font& operator=(Font const&);
    Font();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Font();

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&) = 0;

    virtual std::pair<const Core::PathBuffer<std::string>&, const Core::PathBuffer<std::string>&> getFontSources() const = 0;

    virtual void fetchPage(int);

    virtual void drawCached(::ScreenContext&, std::string_view, float, float, ::mce::Color const&, bool, bool, bool, ::mce::MaterialPtr const*, int, bool, float, ::mce::Color const&, ::mce::Color const&, float, float, ::OffscreenCaptureDescription const&, bool);

    virtual bool supportsChar(int const&) = 0;

    virtual int getLineLength(std::string_view, float, bool);

    virtual float getWrapHeight() const = 0;

    virtual float getScaleFactor(int) const;

    virtual float getScaleFactor() const = 0;

    virtual ::Vec2 getTranslationFactor() const;

    virtual bool isScreenPixelAligned() const = 0;

    virtual bool materialCanBeOverridden() const = 0;

    virtual void uploadTextureToGPU() = 0;

    virtual void setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    virtual ::mce::Font::Type getType(int) const;

    virtual std::optional<mce::Font::RenderingParameters> tryGetRenderingParameters(::ScreenContext const&, int, float, ::mce::Color const&, bool, uint, uint) const;

    virtual void onAppSuspended();

    virtual void onDeviceLost();

    virtual void reloadFontTextures(::Bedrock::NonOwnerPointer<ResourceLoadManager> const&, bool);

    virtual bool isReloadingTextures();

    virtual void unloadTextures();

    virtual void onLanguageChanged(std::string_view);

    virtual float buildChar(std::vector<Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool) = 0;

    virtual ::mce::MaterialPtr const& getMaterial(int, bool) const = 0;

    virtual void loadFontData(bool) = 0;

    virtual int _getReplacementCharacter();

    virtual bool _supportsShadowInSingleDraw() = 0;

    virtual float _getCharWidth(int, bool) = 0;

    virtual void _scanUnicodeCharacterSize(int, int, bool) = 0;

    virtual ::ResourceLocation _getFontSheetLocation(int, bool) const = 0;

    virtual std::string _remapString(std::string_view) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Font(std::shared_ptr<mce::TextureGroup>);

    MCNAPI bool _chopString(
        std::string&,
        std::string&,
        float&,
        uint&,
        float,
        bool,
        bool,
        float,
        std::function<bool(const std::string_view&, std::string&, float, uint&)> const
    );

    MCNAPI int _drawWordWrap(
        ::ScreenContext&,
        std::string_view,
        float,
        float,
        float,
        ::mce::Color const&,
        uint,
        float,
        bool,
        bool,
        bool,
        ::mce::MaterialPtr*
    );

    MCNAPI int _getSheet(int, int&, bool);

    MCNAPI bool _isSpace(int const) const;

    MCNAPI std::shared_ptr<Font::TextObject> _makeTextObject(
        ::Tessellator&,
        std::string_view,
        ::mce::Color const&,
        bool,
        bool,
        int,
        bool,
        float,
        bool,
        ::mce::Color const&,
        bool,
        float,
        float,
        bool
    );

    MCNAPI int _processHeightWrap(
        std::string_view,
        float,
        float,
        float,
        uint,
        bool,
        bool,
        float,
        std::function<bool(const std::string_view&, std::string&, float, uint&)> const
    );

    MCNAPI void calculateTextWidths(std::string_view, std::vector<int>&);

    MCNAPI void clearCache();

    MCNAPI void draw(
        ::ScreenContext&,
        std::string_view,
        float,
        float,
        ::mce::Color const&,
        bool,
        ::mce::MaterialPtr*,
        int,
        float,
        ::OffscreenCaptureDescription const&
    );

    MCNAPI void drawOutline(
        ::ScreenContext&,
        std::string_view,
        float,
        float,
        ::mce::Color const&,
        ::mce::Color const&,
        bool,
        ::mce::MaterialPtr*,
        float
    );

    MCNAPI void
    drawShadow(::ScreenContext&, std::string_view, float, float, ::mce::Color const&, bool, ::mce::MaterialPtr*, float);

    MCNAPI void drawTransformed(
        ::ScreenContext&,
        std::string_view,
        float,
        float,
        ::mce::Color const&,
        float,
        float,
        bool,
        float,
        bool const
    );

    MCNAPI void drawWithColorResetOverride(
        ::ScreenContext&,
        std::string_view,
        float,
        float,
        ::mce::Color const&,
        ::mce::Color const&,
        bool,
        ::mce::MaterialPtr*,
        int,
        float,
        float
    );

    MCNAPI int drawWordWrap(
        ::ScreenContext&,
        std::string_view,
        float,
        float,
        float,
        ::mce::Color const&,
        float,
        bool,
        bool,
        bool,
        ::mce::MaterialPtr*
    );

    MCNAPI int drawWordWrapMaxLine(
        ::ScreenContext&,
        std::string_view,
        float,
        float,
        float,
        ::mce::Color const&,
        int,
        float,
        bool,
        bool,
        bool,
        ::mce::MaterialPtr*
    );

    MCNAPI bool getAlwaysUnicode() const;

    MCNAPI float getBaseFontHeight() const;

    MCNAPI ::Vec2 const& getCaretRenderPosition() const;

    MCNAPI ::Vec2 const& getCaretRenderSize() const;

    MCNAPI std::unordered_set<ResourceLocation> const& getGlyphLocations() const;

    MCNAPI std::vector<ResourceLocation> getReloadFontTextures() const;

    MCNAPI int getTextHeight(std::string_view, float);

    MCNAPI int getTextHeight(std::string_view, int, float, bool);

    MCNAPI bool hasFormattingCodes(std::string_view) const;

    MCNAPI bool hasGlyphLocation(::ResourceLocation const&) const;

    MCNAPI int processLinesInBox(
        std::string_view,
        float,
        uint,
        bool,
        std::function<bool(const std::string_view&, std::string&, float, uint&)> const
    );

    MCNAPI void resetFontData(bool);

    MCNAPI void resetFormat(::mce::Color const&);

    MCNAPI void setAlwaysUnicode(bool);

    MCNAPI bool supportsString(std::string_view);

    MCNAPI void tickObfuscatedTextIndex(float, float);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool containsWideChar(std::string_view);

    MCNAPI static bool isNonSpacingMark(uint);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_FONT_HEIGHT();

    MCNAPI static int const& DEFAULT_WRAP_HEIGHT();

    MCNAPI static int const& MAX_OBFUSCATED_CACHE_COUNT();

    MCNAPI static int const& NBSP();

    MCNAPI static ::Core::PathBuffer<std::string> const& NOT_FOUND_PAGE();

    MCNAPI static int const& NULL_CHAR();

    MCNAPI static float const& OBFUSCATED_TIME_SWITCH();

    MCNAPI static int const& PRIVATE_USE_AREA_BEGIN();

    MCNAPI static int const& PRIVATE_USE_AREA_END();

    MCNAPI static int const& UNICODE_REPLACEMENT_CHARACTER_CODE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $fetchPage(int);

    MCNAPI void $drawCached(
        ::ScreenContext&,
        std::string_view,
        float,
        float,
        ::mce::Color const&,
        bool,
        bool,
        bool,
        ::mce::MaterialPtr const*,
        int,
        bool,
        float,
        ::mce::Color const&,
        ::mce::Color const&,
        float,
        float,
        ::OffscreenCaptureDescription const&,
        bool
    );

    MCNAPI int $getLineLength(std::string_view, float, bool);

    MCNAPI float $getScaleFactor(int) const;

    MCNAPI ::Vec2 $getTranslationFactor() const;

    MCNAPI void $setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    MCNAPI ::mce::Font::Type $getType(int) const;

    MCNAPI std::optional<mce::Font::RenderingParameters>
           $tryGetRenderingParameters(::ScreenContext const&, int, float, ::mce::Color const&, bool, uint, uint) const;

    MCNAPI void $onAppSuspended();

    MCNAPI void $onDeviceLost();

    MCNAPI void $reloadFontTextures(::Bedrock::NonOwnerPointer<ResourceLoadManager> const&, bool);

    MCNAPI bool $isReloadingTextures();

    MCNAPI void $unloadTextures();

    MCNAPI void $onLanguageChanged(std::string_view);

    MCNAPI int $_getReplacementCharacter();

    MCNAPI std::string $_remapString(std::string_view) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class TextObjectCache {
    public:
        // TextObjectCache inner types define
        using TextObjects = ::std::vector<::std::shared_ptr<::Font::TextObject>>;

        using TextObjectsPtr = ::std::shared_ptr<::std::vector<::std::shared_ptr<::Font::TextObject>>>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            16,
            ::std::map<
                ::std::tuple<::std::string, ::mce::Color, float, float, bool, bool>,
                ::std::shared_ptr<::std::vector<::std::shared_ptr<::Font::TextObject>>>,
                ::std::less<void>>>
            mEntries;
        // NOLINTEND
    };

    using CurrentLineCallback = ::std::function<bool(::std::string_view const&, ::std::string&, float, uint&)> const;

    using StringCacheStoredKey = ::std::tuple<::std::string, ::mce::Color, float, float, bool, bool>;

    using StringCacheLookupKey = ::std::tuple<::std::string_view, ::mce::Color, float, float, bool, bool>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 512, ::mce::Color[32]>                            mColors;
    ::ll::TypedStorage<4, 4, float>                                         mScalarOverride;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::tuple<int, int, float>>> mScaleOverrideCharacter;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>>       mTextureGroup;
    ::ll::TypedStorage<8, 16, ::Font::TextObjectCache>                      mStringCache;
    ::ll::TypedStorage<4, 4, int>                                           mObfuscatedIndex;
    ::ll::TypedStorage<4, 4, float>                                         mObfuscatedTextTime;
    ::ll::TypedStorage<4, 8, ::Vec2>                                        mCaretRenderPosition;
    ::ll::TypedStorage<4, 8, ::Vec2>                                        mCaretRenderSize;
    ::ll::TypedStorage<1, 1, bool>                                          mAlwaysUnicode;
    ::ll::TypedStorage<1, 1, bool>                                          mAutoResetFormat;
    ::ll::TypedStorage<1, 1, bool>                                          mUseCache;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                 mCurrentColor;
    ::ll::TypedStorage<4, 4, int>                                           mFontTexture;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                 mCaretColor;
    ::ll::TypedStorage<1, 1, bool>                                          mItalic;
    ::ll::TypedStorage<1, 1, bool>                                          mBold;
    ::ll::TypedStorage<1, 1, bool>                                          mStrikethrough;
    ::ll::TypedStorage<1, 1, bool>                                          mUnderlined;
    ::ll::TypedStorage<1, 1, bool>                                          mObfuscated;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                           mFontMat;
    // NOLINTEND

public:
    // prevent constructor by default
    Font& operator=(Font const&);
    Font();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Font();

    virtual void switchFontsource(::Core::Path const& asciiName, ::Core::Path const& unicodeName) = 0;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const = 0;

    virtual void fetchPage(int page);

    virtual void drawCached(
        ::ScreenContext&                     screenContext,
        ::std::string_view                   str,
        float                                x,
        float                                y,
        ::mce::Color const&                  color,
        bool                                 ignoreColorFormatting,
        bool                                 darken,
        bool                                 drawColorSymbol,
        ::mce::MaterialPtr const*            optionalMat,
        int                                  caretPosition,
        bool                                 shadow,
        float                                linePadding,
        ::mce::Color const&                  resetColorOverride,
        ::mce::Color const&                  shaderDarkColor,
        float                                outlineWidth,
        float                                yCaretOffset,
        ::OffscreenCaptureDescription const& offscreenCaptureDescription,
        bool                                 autoGenNormalsAndTangents
    );

    virtual bool supportsChar(int const& character) = 0;

    virtual int getLineLength(::std::string_view str, float fontSize, bool showColorSymbol);

    virtual float getWrapHeight() const = 0;

    virtual float getScaleFactor() const = 0;

    virtual float getScaleFactor(int uniChar) const;

    virtual ::Vec2 getTranslationFactor() const;

    virtual bool isScreenPixelAligned() const = 0;

    virtual bool materialCanBeOverridden() const = 0;

    virtual void uploadTextureToGPU() = 0;

    virtual void setTextConstantsInScreenContext(
        ::ScreenContext&    screenContext,
        int                 glyphSheet,
        float               guiScale,
        ::mce::Color const& textColor,
        bool                hasShadow
    ) const;

    virtual ::mce::Font::Type getType(int glyphSheet) const;

    virtual ::std::optional<::mce::Font::RenderingParameters> tryGetRenderingParameters(
        ::ScreenContext const& screenContext,
        int                    glyphSheet,
        float                  guiScale,
        ::mce::Color const&    textColor,
        bool                   hasShadow,
        uint                   textureWidth,
        uint                   textureHeight
    ) const;

    virtual void onAppSuspended();

    virtual void onDeviceLost();

    virtual void
    reloadFontTextures(::Bedrock::NonOwnerPointer<::ResourceLoadManager> const& resourceLoadManager, bool blockingLoad);

    virtual bool isReloadingTextures();

    virtual void unloadTextures();

    virtual void onLanguageChanged(::std::string_view languageCode);

    virtual float buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    ) = 0;

    virtual ::mce::MaterialPtr const& getMaterial(int sheet, bool isOddGuiScale) const = 0;

    virtual void loadFontData(bool uploadTextureImmediately) = 0;

    virtual int _getReplacementCharacter();

    virtual bool _supportsShadowInSingleDraw() = 0;

    virtual float _getCharWidth(int uniChar, bool forceUnicode) = 0;

    virtual void _scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode) = 0;

    virtual ::ResourceLocation _getFontSheetLocation(int sheet, bool forceUnicode) const = 0;

    virtual ::std::string _remapString(::std::string_view str) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Font(::Font const& rhs);

    MCAPI explicit Font(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI bool _chopString(
        ::std::string&                                                                       currentLine,
        ::std::string&                                                                       activeFormatting,
        float&                                                                               totalHeight,
        uint&                                                                                remainingLineCount,
        float                                                                                maxWidth,
        bool                                                                                 showColorSymbol,
        bool                                                                                 centered,
        float                                                                                fontSize,
        ::std::function<bool(::std::string_view const&, ::std::string&, float, uint&)> const currentLineCallback
    );

    MCAPI int _drawWordWrap(
        ::ScreenContext&    screenContext,
        ::std::string_view  str,
        float               x,
        float               y,
        float               w,
        ::mce::Color const& color,
        uint                maxLine,
        float               fontSize,
        bool                shadow,
        bool                centered,
        bool                showColorSymbol,
        ::mce::MaterialPtr* optionalMat
    );

    MCAPI ::std::shared_ptr<::Font::TextObject> _makeTextObject(
        ::Tessellator&      tessellator,
        ::std::string_view  str,
        ::mce::Color const& ccolor,
        bool                showColorSymbol,
        bool                ignoreColorFormatting,
        int                 caretPosition,
        bool                shadow,
        float               linePadding,
        bool                isOddGuiScale,
        ::mce::Color const& resetColorOverride,
        bool                uiMaterial,
        float               outlineWidth,
        float               yCaretOffset,
        bool                autoGenNormalsAndTangents
    );

    MCAPI int _processHeightWrap(
        ::std::string_view                                                             str,
        float                                                                          startX,
        float                                                                          startY,
        float                                                                          maxWidth,
        uint                                                                           maxLine,
        bool                                                                           showColorSymbol,
        bool                                                                           centered,
        float                                                                          fontSize,
        ::std::function<bool(::std::string_view const&, ::std::string&, float, uint&)> currentLineCallback
    );

    MCAPI void calculateTextWidths(::std::string_view text, ::std::vector<int>& widths);

    MCAPI void drawShadow(
        ::ScreenContext&    screenContext,
        ::std::string_view  str,
        float               x,
        float               y,
        ::mce::Color const& color,
        bool                showColorSymbol,
        ::mce::MaterialPtr* optionalMat,
        float               linePadding
    );

    MCAPI void drawTransformed(
        ::ScreenContext&    screenContext,
        ::std::string_view  str,
        float               x,
        float               y,
        ::mce::Color const& color,
        float               angle,
        float               s,
        bool                centered,
        float               maxWidth,
        bool                shadow
    );

    MCAPI void drawWithColorResetOverride(
        ::ScreenContext&    screenContext,
        ::std::string_view  str,
        float               x,
        float               y,
        ::mce::Color const& color,
        ::mce::Color const& resetColor,
        bool                showColorSymbol,
        ::mce::MaterialPtr* optionalMat,
        int                 caretPosition,
        float               linePadding,
        float               yCaretOffset
    );

    MCAPI ::std::unordered_set<::ResourceLocation> const& getGlyphLocations() const;

    MCAPI ::std::vector<::ResourceLocation> getReloadFontTextures() const;

    MCAPI int processLinesInBox(
        ::std::string_view                                                             str,
        float                                                                          maxWidth,
        uint                                                                           maxLines,
        bool                                                                           showColorSymbol,
        ::std::function<bool(::std::string_view const&, ::std::string&, float, uint&)> currentLineCallback
    );

    MCAPI void resetFontData(bool uploadTextureImmediately);

    MCAPI bool supportsString(::std::string_view str);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string> const& NOT_FOUND_PAGE();

    MCAPI static int const& UNICODE_REPLACEMENT_CHARACTER_CODE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Font const& rhs);

    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $fetchPage(int page);

    MCAPI void $drawCached(
        ::ScreenContext&                     screenContext,
        ::std::string_view                   str,
        float                                x,
        float                                y,
        ::mce::Color const&                  color,
        bool                                 ignoreColorFormatting,
        bool                                 darken,
        bool                                 drawColorSymbol,
        ::mce::MaterialPtr const*            optionalMat,
        int                                  caretPosition,
        bool                                 shadow,
        float                                linePadding,
        ::mce::Color const&                  resetColorOverride,
        ::mce::Color const&                  shaderDarkColor,
        float                                outlineWidth,
        float                                yCaretOffset,
        ::OffscreenCaptureDescription const& offscreenCaptureDescription,
        bool                                 autoGenNormalsAndTangents
    );

    MCAPI int $getLineLength(::std::string_view str, float fontSize, bool showColorSymbol);

    MCAPI float $getScaleFactor(int uniChar) const;

    MCFOLD ::Vec2 $getTranslationFactor() const;

    MCFOLD void $setTextConstantsInScreenContext(
        ::ScreenContext&    screenContext,
        int                 glyphSheet,
        float               guiScale,
        ::mce::Color const& textColor,
        bool                hasShadow
    ) const;

    MCFOLD ::mce::Font::Type $getType(int glyphSheet) const;

    MCAPI ::std::optional<::mce::Font::RenderingParameters> $tryGetRenderingParameters(
        ::ScreenContext const& screenContext,
        int                    glyphSheet,
        float                  guiScale,
        ::mce::Color const&    textColor,
        bool                   hasShadow,
        uint                   textureWidth,
        uint                   textureHeight
    ) const;

    MCFOLD void $onAppSuspended();

    MCFOLD void $onDeviceLost();

    MCAPI void $reloadFontTextures(
        ::Bedrock::NonOwnerPointer<::ResourceLoadManager> const& resourceLoadManager,
        bool                                                     blockingLoad
    );

    MCAPI bool $isReloadingTextures();

    MCFOLD void $unloadTextures();

    MCFOLD void $onLanguageChanged(::std::string_view languageCode);

    MCAPI int $_getReplacementCharacter();

    MCAPI ::std::string $_remapString(::std::string_view str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    class TextObjectCache {};
#endif // @header-generator platform
#endif // @header-generator platform
};
