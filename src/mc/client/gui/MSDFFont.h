#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mFontPagePrefix;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, float>>  mUnicodeWidths;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>         mSheetScannedForWidthsAndOffsets;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, int>>    mRemappedGlyphs;
    // NOLINTEND

public:
    // prevent constructor by default
    MSDFFont();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual float _getCharWidth(int uniChar, bool forceUnicode) /*override*/;

    virtual bool supportsChar(int const& character) /*override*/;

    virtual float getWrapHeight() const /*override*/;

    virtual float getScaleFactor() const /*override*/;

    virtual bool isScreenPixelAligned() const /*override*/;

    virtual bool materialCanBeOverridden() const /*override*/;

    virtual void uploadTextureToGPU() /*override*/;

    virtual void setTextConstantsInScreenContext(
        ::ScreenContext& screenContext,
        int,
        float               guiScale,
        ::mce::Color const& textColor,
        bool                hasShadow
    ) const /*override*/;

    virtual ::Vec2 getTranslationFactor() const /*override*/;

    virtual void _scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode) /*override*/;

    virtual bool _supportsShadowInSingleDraw() /*override*/;

    virtual ::ResourceLocation _getFontSheetLocation(int sheet, bool) const /*override*/;

    virtual ::mce::MaterialPtr const& getMaterial(int sheet, bool isOddGuiScale) const /*override*/;

    virtual ::mce::Font::Type getType(int glyphSheet) const /*override*/;

    virtual void loadFontData(bool) /*override*/;

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

    virtual int _getReplacementCharacter() /*override*/;

    virtual ::std::string _remapString(::std::string_view str) const /*override*/;

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&) /*override*/;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MSDFFont(
        ::Core::Path const&                    fontPagePrefix,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        bool                                   uploadOnConstruction
    );

    MCAPI void _loadMsdfFontInformation(::Core::Path const& fontName, uchar const page);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Core::Path const&                    fontPagePrefix,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        bool                                   uploadOnConstruction
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $_getCharWidth(int uniChar, bool forceUnicode);

    MCAPI bool $supportsChar(int const& character);

    MCAPI float $getWrapHeight() const;

    MCAPI float $getScaleFactor() const;

    MCFOLD bool $isScreenPixelAligned() const;

    MCFOLD bool $materialCanBeOverridden() const;

    MCFOLD void $uploadTextureToGPU();

    MCAPI void $setTextConstantsInScreenContext(
        ::ScreenContext& screenContext,
        int,
        float               guiScale,
        ::mce::Color const& textColor,
        bool                hasShadow
    ) const;

    MCAPI ::Vec2 $getTranslationFactor() const;

    MCAPI void $_scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode);

    MCFOLD bool $_supportsShadowInSingleDraw();

    MCAPI ::ResourceLocation $_getFontSheetLocation(int sheet, bool) const;

    MCAPI ::mce::MaterialPtr const& $getMaterial(int sheet, bool isOddGuiScale) const;

    MCFOLD ::mce::Font::Type $getType(int glyphSheet) const;

    MCAPI void $loadFontData(bool);

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

    MCFOLD int $_getReplacementCharacter();

    MCAPI ::std::string $_remapString(::std::string_view str) const;

    MCAPI void $switchFontsource(::Core::Path const&, ::Core::Path const&);

    MCAPI ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    $getFontSources() const;
    // NOLINTEND
};
#else // @header-generator platform
class MSDFFont {};
#endif // @header-generator platform
#endif // @header-generator platform
