#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ScreenContext;
class Vec2;
namespace Core { class Path; }
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class TextureGroup; }
// clang-format on

class MSDFFont : public ::Font {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                               mFontPagePrefix;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, float>> mUnicodeWidths;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>>        mSheetScannedForWidthsAndOffsets;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, int>>   mRemappedGlyphs;
    // NOLINTEND

public:
    // prevent constructor by default
    MSDFFont();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MSDFFont();

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&);

    virtual std::pair<const Core::PathBuffer<std::string>&, const Core::PathBuffer<std::string>&> getFontSources() const;

    virtual bool supportsChar(int const&);

    virtual float getWrapHeight() const;

    virtual float getScaleFactor() const;

    virtual ::Vec2 getTranslationFactor() const;

    virtual bool isScreenPixelAligned() const;

    virtual bool materialCanBeOverridden() const;

    virtual void uploadTextureToGPU();

    virtual void setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    virtual ::mce::Font::Type getType(int) const;

    virtual float buildChar(std::vector<Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool);

    virtual ::mce::MaterialPtr const& getMaterial(int, bool) const;

    virtual void loadFontData(bool);

    virtual int _getReplacementCharacter();

    virtual bool _supportsShadowInSingleDraw();

    virtual float _getCharWidth(int, bool);

    virtual void _scanUnicodeCharacterSize(int, int, bool);

    virtual ::ResourceLocation _getFontSheetLocation(int, bool) const;

    virtual std::string _remapString(std::string_view) const;

    virtual ::Core::PathBuffer<std::string> getUnicodeFontNameWithPage(::Core::Path const&, uchar const) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MSDFFont(::Core::Path const&, std::shared_ptr<mce::TextureGroup>, bool);

    MCNAPI void _loadMsdfFontInformation(::Core::Path const&, uchar const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&, std::shared_ptr<mce::TextureGroup>, bool);
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

    MCNAPI float $getScaleFactor() const;

    MCNAPI ::Vec2 $getTranslationFactor() const;

    MCNAPI bool $isScreenPixelAligned() const;

    MCNAPI bool $materialCanBeOverridden() const;

    MCNAPI void $uploadTextureToGPU();

    MCNAPI void $setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    MCNAPI ::mce::Font::Type $getType(int) const;

    MCNAPI float $buildChar(std::vector<Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool);

    MCNAPI ::mce::MaterialPtr const& $getMaterial(int, bool) const;

    MCNAPI void $loadFontData(bool);

    MCNAPI int $_getReplacementCharacter();

    MCNAPI bool $_supportsShadowInSingleDraw();

    MCNAPI float $_getCharWidth(int, bool);

    MCNAPI void $_scanUnicodeCharacterSize(int, int, bool);

    MCNAPI ::ResourceLocation $_getFontSheetLocation(int, bool) const;

    MCNAPI std::string $_remapString(std::string_view) const;

    MCNAPI ::Core::PathBuffer<std::string> $getUnicodeFontNameWithPage(::Core::Path const&, uchar const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
