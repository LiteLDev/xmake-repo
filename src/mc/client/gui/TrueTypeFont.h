#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
class ScreenContext;
struct stbtt_fontinfo;
namespace Core { class Path; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class TrueTypeFont : public ::Font {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
class ResourceLocation;
class ScreenContext;
namespace Core { class Path; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
// clang-format on

class TrueTypeFont : public ::Font {
#else // @header-generator platform
class TrueTypeFont {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // TrueTypeFont inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct PageOfGlyphs;
#else // @header-generator platform
#endif // @header-generator platform
    struct LoadedFontInformation;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PageOfGlyphs;
#endif // @header-generator platform
    // clang-format on

    // TrueTypeFont inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PageOfGlyphs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 7168> characterInfo;
        ::ll::TypedStorage<4, 4, int> atlasPageSize;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct LoadedFontInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 160, ::stbtt_fontinfo> info;
        ::ll::TypedStorage<4, 4, float>              scale;
        ::ll::TypedStorage<4, 4, int>                ascent;
        ::ll::TypedStorage<4, 4, int>                descent;
        ::ll::TypedStorage<4, 4, int>                lineGap;
        ::ll::TypedStorage<8, 32, ::std::string>     resourceData;
        // NOLINTEND
    };
#else // @header-generator platform
    struct LoadedFontInformation {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct LoadedFontInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 160>           info;
        ::ll::TypedStorage<4, 4, float>        scale;
        ::ll::TypedStorage<4, 4, int>          ascent;
        ::ll::TypedStorage<4, 4, int>          descent;
        ::ll::TypedStorage<4, 4, int>          lineGap;
        ::ll::TypedStorage<8, 24, std::string> resourceData;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<int, TrueTypeFont::PageOfGlyphs>> mGlyphSheets;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>> mSheetsThatFailedToRender;
    ::ll::TypedStorage<8, 200, ::TrueTypeFont::LoadedFontInformation> mLoadedFontInformation;
    ::ll::UntypedStorage<8, 24> mFontFile;
    ::ll::TypedStorage<4, 4, uint> mVersion;
    ::ll::TypedStorage<1, 1, uchar> mDefaultRenderSize;
    ::ll::TypedStorage<2, 2, ushort> mDefaultAtlasPageSize;
    ::ll::TypedStorage<4, 4, float> mRenderSizeToGameSizeScalar;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ResourceLocation, std::shared_ptr<cg::ImageBuffer>>>> mTexturesToUpload;
    ::ll::UntypedStorage<1, 4> mIsReloading;
    ::ll::UntypedStorage<1, 140> mGlyphSheetMutex;
    ::ll::TypedStorage<1, 1, bool> mIsGlyphSheetBuilt;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    TrueTypeFont();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TrueTypeFont();

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&);

    virtual std::pair<const Core::PathBuffer<std::string>&, const Core::PathBuffer<std::string>&> getFontSources() const;

    virtual void fetchPage(int);

    virtual bool supportsChar(int const&);

    virtual float getWrapHeight() const;

    virtual float getScaleFactor() const;

    virtual bool isScreenPixelAligned() const;

    virtual bool materialCanBeOverridden() const;

    virtual void uploadTextureToGPU();

    virtual void setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    virtual ::mce::Font::Type getType(int) const;

    virtual void reloadFontTextures(::Bedrock::NonOwnerPointer<ResourceLoadManager> const&, bool);

    virtual bool isReloadingTextures();

    virtual void unloadTextures();

    virtual float buildChar(std::vector<Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool);

    virtual ::mce::MaterialPtr& getMaterial(int, bool) const;

    virtual void loadFontData(bool);

    virtual int _getReplacementCharacter();

    virtual bool _supportsShadowInSingleDraw();

    virtual float _getCharWidth(int, bool);

    virtual void _scanUnicodeCharacterSize(int, int, bool);

    virtual ::ResourceLocation _getFontSheetLocation(int, bool) const;

    virtual ::Core::PathBuffer<std::string> getUnicodeFontNameWithPage(::Core::Path const&, uchar const) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _loadSheetForGlyph(int, bool, bool);

    MCNAPI void _uploadTextureToGPU(::ResourceLocation const&, std::shared_ptr<cg::ImageBuffer>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& CACHE_VERSION();

    MCNAPI static ushort const& DEFAULT_ATLAS_PAGE_SIZE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $switchFontsource(::Core::Path const&, ::Core::Path const&);

    MCNAPI std::pair<const Core::PathBuffer<std::string>&, const Core::PathBuffer<std::string>&>
           $getFontSources() const;

    MCNAPI void $fetchPage(int);

    MCNAPI bool $supportsChar(int const&);

    MCNAPI float $getWrapHeight() const;

    MCNAPI float $getScaleFactor() const;

    MCNAPI bool $isScreenPixelAligned() const;

    MCNAPI bool $materialCanBeOverridden() const;

    MCNAPI void $uploadTextureToGPU();

    MCNAPI void $setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    MCNAPI ::mce::Font::Type $getType(int) const;

    MCNAPI void $reloadFontTextures(::Bedrock::NonOwnerPointer<ResourceLoadManager> const&, bool);

    MCNAPI bool $isReloadingTextures();

    MCNAPI void $unloadTextures();

    MCNAPI float $buildChar(std::vector<Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool);

    MCNAPI ::mce::MaterialPtr& $getMaterial(int, bool) const;

    MCNAPI void $loadFontData(bool);

    MCNAPI int $_getReplacementCharacter();

    MCNAPI bool $_supportsShadowInSingleDraw();

    MCNAPI float $_getCharWidth(int, bool);

    MCNAPI void $_scanUnicodeCharacterSize(int, int, bool);

    MCNAPI ::ResourceLocation $_getFontSheetLocation(int, bool) const;

    MCNAPI ::Core::PathBuffer<std::string> $getUnicodeFontNameWithPage(::Core::Path const&, uchar const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PageOfGlyphs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 7168, ::stbtt_packedchar[256]> characterInfo;
        ::ll::TypedStorage<4, 4, int>                        atlasPageSize;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::TrueTypeFont::PageOfGlyphs>> mGlyphSheets;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>                               mSheetsThatFailedToRender;
    ::ll::TypedStorage<8, 208, ::TrueTypeFont::LoadedFontInformation>                  mLoadedFontInformation;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                       mFontFile;
    ::ll::TypedStorage<4, 4, uint>                                                     mVersion;
    ::ll::TypedStorage<1, 1, uchar>                                                    mDefaultRenderSize;
    ::ll::TypedStorage<2, 2, ushort>                                                   mDefaultAtlasPageSize;
    ::ll::TypedStorage<4, 4, float>                                                    mRenderSizeToGameSizeScalar;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ResourceLocation, ::std::shared_ptr<::cg::ImageBuffer>>>>
                                                  mTexturesToUpload;
    ::ll::TypedStorage<1, 1, bool>                mIsReloading;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mGlyphSheetMutex;
    ::ll::TypedStorage<1, 1, bool>                mIsGlyphSheetBuilt;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TrueTypeFont() /*override*/ = default;

    virtual void loadFontData(bool uploadTextureImmediately) /*override*/;

    virtual bool _supportsShadowInSingleDraw() /*override*/;

    virtual ::mce::MaterialPtr& getMaterial(int sheet, bool isOddGuiScale) const /*override*/;

    virtual void uploadTextureToGPU() /*override*/;

    virtual void unloadTextures() /*override*/;

    virtual int _getReplacementCharacter() /*override*/;

    virtual ::ResourceLocation _getFontSheetLocation(int sheet, bool) const /*override*/;

    virtual float _getCharWidth(int uniChar, bool) /*override*/;

    virtual bool supportsChar(int const& character) /*override*/;

    virtual float getWrapHeight() const /*override*/;

    virtual float getScaleFactor() const /*override*/;

    virtual bool isScreenPixelAligned() const /*override*/;

    virtual bool materialCanBeOverridden() const /*override*/;

    virtual void setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const
        /*override*/;

    virtual void reloadFontTextures(
        ::Bedrock::NonOwnerPointer<::ResourceLoadManager> const& resourceLoadManager,
        bool                                                     blockingLoad
    ) /*override*/;

    virtual bool isReloadingTextures() /*override*/;

    virtual void _scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode) /*override*/;

    virtual ::mce::Font::Type getType(int glyphSheet) const /*override*/;

    virtual void fetchPage(int page) /*override*/;

    virtual float buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    ) /*override*/;

    virtual ::Core::PathBuffer<::std::string>
    getUnicodeFontNameWithPage(::Core::Path const& fontName, uchar const page) const;

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&) /*override*/;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _loadSheetForGlyph(int codepoint, bool uploadTexture, bool forceReload);

    MCAPI void
    _uploadTextureToGPU(::ResourceLocation const& resourceLocation, ::std::shared_ptr<::cg::ImageBuffer> imageBuffer);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint const& CACHE_VERSION();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadFontData(bool uploadTextureImmediately);

    MCFOLD bool $_supportsShadowInSingleDraw();

    MCAPI ::mce::MaterialPtr& $getMaterial(int sheet, bool isOddGuiScale) const;

    MCAPI void $uploadTextureToGPU();

    MCAPI void $unloadTextures();

    MCFOLD int $_getReplacementCharacter();

    MCAPI ::ResourceLocation $_getFontSheetLocation(int sheet, bool) const;

    MCAPI float $_getCharWidth(int uniChar, bool);

    MCAPI bool $supportsChar(int const& character);

    MCAPI float $getWrapHeight() const;

    MCFOLD float $getScaleFactor() const;

    MCFOLD bool $isScreenPixelAligned() const;

    MCFOLD bool $materialCanBeOverridden() const;

    MCFOLD void $setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    MCAPI void $reloadFontTextures(
        ::Bedrock::NonOwnerPointer<::ResourceLoadManager> const& resourceLoadManager,
        bool                                                     blockingLoad
    );

    MCFOLD bool $isReloadingTextures();

    MCAPI void $_scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode);

    MCFOLD ::mce::Font::Type $getType(int glyphSheet) const;

    MCAPI void $fetchPage(int page);

    MCAPI float $buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    );

    MCAPI ::Core::PathBuffer<::std::string>
    $getUnicodeFontNameWithPage(::Core::Path const& fontName, uchar const page) const;

    MCFOLD void $switchFontsource(::Core::Path const&, ::Core::Path const&);

    MCAPI ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    $getFontSources() const;
    // NOLINTEND
#else // @header-generator platform
    struct PageOfGlyphs {};
#endif // @header-generator platform
#endif // @header-generator platform
};
