#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // TrueTypeFont inner types declare
    // clang-format off
    struct PageOfGlyphs;
    struct LoadedFontInformation;
    // clang-format on

    // TrueTypeFont inner types define
    struct PageOfGlyphs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 7168> characterInfo;
        ::ll::TypedStorage<4, 4, int> atlasPageSize;
        // NOLINTEND
    };

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
};
