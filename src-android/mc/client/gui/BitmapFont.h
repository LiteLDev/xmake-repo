#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace Core { class Path; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class TextureGroup; }
namespace mce { struct Image; }
// clang-format on

class BitmapFont : public ::Font {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                               mAsciiFontName;
    ::ll::UntypedStorage<8, 24>                               mUnicodeFontName;
    ::ll::TypedStorage<4, 1024, float[256]>                   mCharWidths;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Image>>    mBitmapFontImage;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, float>> mUnicodeWidths;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, float>> mUnicodeOffsets;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, float>> mUnicodePageGlyphWidths;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>>        mSheetScannedForWidthsAndOffsets;
    // NOLINTEND

public:
    // prevent constructor by default
    BitmapFont& operator=(BitmapFont const&);
    BitmapFont();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BitmapFont();

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&);

    virtual std::pair<const Core::PathBuffer<std::string>&, const Core::PathBuffer<std::string>&> getFontSources() const;

    virtual bool supportsChar(int const&);

    virtual float getWrapHeight() const;

    virtual float getScaleFactor(int) const;

    virtual float getScaleFactor() const;

    virtual bool isScreenPixelAligned() const;

    virtual bool materialCanBeOverridden() const;

    virtual void uploadTextureToGPU();

    virtual float buildChar(std::vector<Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool);

    virtual ::mce::MaterialPtr const& getMaterial(int, bool) const;

    virtual void loadFontData(bool);

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
    MCNAPI BitmapFont(::Core::Path const&, ::Core::Path const&, std::shared_ptr<mce::TextureGroup>, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&, ::Core::Path const&, std::shared_ptr<mce::TextureGroup>, bool);
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

    MCNAPI bool $supportsChar(int const&);

    MCNAPI float $getWrapHeight() const;

    MCNAPI float $getScaleFactor(int) const;

    MCNAPI float $getScaleFactor() const;

    MCNAPI bool $isScreenPixelAligned() const;

    MCNAPI bool $materialCanBeOverridden() const;

    MCNAPI void $uploadTextureToGPU();

    MCNAPI float $buildChar(std::vector<Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool);

    MCNAPI ::mce::MaterialPtr const& $getMaterial(int, bool) const;

    MCNAPI void $loadFontData(bool);

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
