#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/client/gui/FontHandle.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ScreenContext;
namespace Core { class Path; }
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class TextureGroup; }
namespace mce::Font { struct RenderingParameters; }
// clang-format on

class FontAlias : public ::Font {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/client/gui/FontHandle.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ScreenContext;
namespace Core { class Path; }
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce::Font { struct RenderingParameters; }
// clang-format on

class FontAlias : public ::Font {
#else // @header-generator platform
class FontAlias {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // FontAlias inner types declare
    // clang-format off
    struct ReferenceData;
    // clang-format on

    // FontAlias inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ReferenceData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::FontHandle>                     mFontHandle;
        ::ll::TypedStorage<8, 24, std::string>                      mLanguageCode;
        ::ll::TypedStorage<8, 24, std::vector<std::pair<int, int>>> mIncludedUnicodeRanges;
        ::ll::TypedStorage<4, 4, float>                             mFontScale;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReferenceData& operator=(ReferenceData const&);
        ReferenceData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ReferenceData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<FontAlias::ReferenceData>> mFontReferences;
    ::ll::TypedStorage<8, 24, std::string>                           mCurrentLanguageCode;
    ::ll::TypedStorage<1, 1, bool>                                   mAllReferencesMaterialsCanBeOverridden;
    ::ll::TypedStorage<1, 1, bool>                                   mAllReferencesScreenPixelAligned;
    ::ll::TypedStorage<1, 1, bool>                                   mAllReferencesSupportShadowInSingleDraw;
    ::ll::TypedStorage<4, 4, float>                                  mMaxWrapHeight;
    ::ll::TypedStorage<4, 4, float>                                  mMaxScalar;
    // NOLINTEND

public:
    // prevent constructor by default
    FontAlias();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FontAlias();

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&);

    virtual std::pair<const Core::PathBuffer<std::string>&, const Core::PathBuffer<std::string>&> getFontSources() const;

    virtual bool supportsChar(int const&);

    virtual float getWrapHeight() const;

    virtual float getScaleFactor(int) const;

    virtual float getScaleFactor() const;

    virtual bool isScreenPixelAligned() const;

    virtual bool materialCanBeOverridden() const;

    virtual void uploadTextureToGPU();

    virtual void setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    virtual ::mce::Font::Type getType(int) const;

    virtual std::optional<mce::Font::RenderingParameters> tryGetRenderingParameters(::ScreenContext const&, int, float, ::mce::Color const&, bool, uint, uint) const;

    virtual void onLanguageChanged(std::string_view);

    virtual float buildChar(std::vector<Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool);

    virtual ::mce::MaterialPtr const& getMaterial(int, bool) const;

    virtual void loadFontData(bool);

    virtual bool _supportsShadowInSingleDraw();

    virtual float _getCharWidth(int, bool);

    virtual void _scanUnicodeCharacterSize(int, int, bool);

    virtual ::ResourceLocation _getFontSheetLocation(int, bool) const;

    virtual std::string _remapString(std::string_view) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> getFontReferenceForSheet(int const&) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> getFontReferenceForUnicode(int const&) const;
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

    MCNAPI void $setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    MCNAPI ::mce::Font::Type $getType(int) const;

    MCNAPI std::optional<mce::Font::RenderingParameters>
           $tryGetRenderingParameters(::ScreenContext const&, int, float, ::mce::Color const&, bool, uint, uint) const;

    MCNAPI void $onLanguageChanged(std::string_view);

    MCNAPI float $buildChar(std::vector<Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool);

    MCNAPI ::mce::MaterialPtr const& $getMaterial(int, bool) const;

    MCNAPI void $loadFontData(bool);

    MCNAPI bool $_supportsShadowInSingleDraw();

    MCNAPI float $_getCharWidth(int, bool);

    MCNAPI void $_scanUnicodeCharacterSize(int, int, bool);

    MCNAPI ::ResourceLocation $_getFontSheetLocation(int, bool) const;

    MCNAPI std::string $_remapString(std::string_view) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ReferenceData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::FontHandle>                         mFontHandle;
        ::ll::TypedStorage<8, 32, ::std::string>                        mLanguageCode;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<int, int>>> mIncludedUnicodeRanges;
        ::ll::TypedStorage<4, 4, float>                                 mFontScale;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::FontAlias::ReferenceData>> mFontReferences;
    ::ll::TypedStorage<8, 32, ::std::string>                             mCurrentLanguageCode;
    ::ll::TypedStorage<1, 1, bool>                                       mAllReferencesMaterialsCanBeOverridden;
    ::ll::TypedStorage<1, 1, bool>                                       mAllReferencesScreenPixelAligned;
    ::ll::TypedStorage<1, 1, bool>                                       mAllReferencesSupportShadowInSingleDraw;
    ::ll::TypedStorage<4, 4, float>                                      mMaxWrapHeight;
    ::ll::TypedStorage<4, 4, float>                                      mMaxScalar;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FontAlias() /*override*/ = default;

    virtual float _getCharWidth(int uniChar, bool forceUnicode) /*override*/;

    virtual bool supportsChar(int const& character) /*override*/;

    virtual float getWrapHeight() const /*override*/;

    virtual float getScaleFactor() const /*override*/;

    virtual float getScaleFactor(int uniChar) const /*override*/;

    virtual bool isScreenPixelAligned() const /*override*/;

    virtual bool materialCanBeOverridden() const /*override*/;

    virtual void setTextConstantsInScreenContext(
        ::ScreenContext&    screenContext,
        int                 glyphSheet,
        float               guiScale,
        ::mce::Color const& textColor,
        bool                hasShadow
    ) const /*override*/;

    virtual void uploadTextureToGPU() /*override*/;

    virtual ::ResourceLocation _getFontSheetLocation(int sheet, bool forceUnicode) const /*override*/;

    virtual ::mce::MaterialPtr const& getMaterial(int sheet, bool isOddGuiScale) const /*override*/;

    virtual ::mce::Font::Type getType(int glyphSheet) const /*override*/;

    virtual ::std::optional<::mce::Font::RenderingParameters> tryGetRenderingParameters(
        ::ScreenContext const& screenContext,
        int                    glyphSheet,
        float                  guiScale,
        ::mce::Color const&    textColor,
        bool                   hasShadow,
        uint                   textureWidth,
        uint                   textureHeight
    ) const /*override*/;

    virtual void loadFontData(bool uploadTextureImmediately) /*override*/;

    virtual bool _supportsShadowInSingleDraw() /*override*/;

    virtual void onLanguageChanged(::std::string_view languageCode) /*override*/;

    virtual void _scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode) /*override*/;

    virtual float buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    ) /*override*/;

    virtual ::std::string _remapString(::std::string_view str) const /*override*/;

    virtual void switchFontsource(::Core::Path const& asciiName, ::Core::Path const& unicodeName) /*override*/;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getFontReferenceForSheet(int const& sheet) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getFontReferenceForUnicode(int const& character) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $_getCharWidth(int uniChar, bool forceUnicode);

    MCAPI bool $supportsChar(int const& character);

    MCAPI float $getWrapHeight() const;

    MCAPI float $getScaleFactor() const;

    MCAPI float $getScaleFactor(int uniChar) const;

    MCAPI bool $isScreenPixelAligned() const;

    MCAPI bool $materialCanBeOverridden() const;

    MCAPI void $setTextConstantsInScreenContext(
        ::ScreenContext&    screenContext,
        int                 glyphSheet,
        float               guiScale,
        ::mce::Color const& textColor,
        bool                hasShadow
    ) const;

    MCFOLD void $uploadTextureToGPU();

    MCAPI ::ResourceLocation $_getFontSheetLocation(int sheet, bool forceUnicode) const;

    MCAPI ::mce::MaterialPtr const& $getMaterial(int sheet, bool isOddGuiScale) const;

    MCAPI ::mce::Font::Type $getType(int glyphSheet) const;

    MCAPI ::std::optional<::mce::Font::RenderingParameters> $tryGetRenderingParameters(
        ::ScreenContext const& screenContext,
        int                    glyphSheet,
        float                  guiScale,
        ::mce::Color const&    textColor,
        bool                   hasShadow,
        uint                   textureWidth,
        uint                   textureHeight
    ) const;

    MCFOLD void $loadFontData(bool uploadTextureImmediately);

    MCAPI bool $_supportsShadowInSingleDraw();

    MCAPI void $onLanguageChanged(::std::string_view languageCode);

    MCAPI void $_scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode);

    MCAPI float $buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    );

    MCAPI ::std::string $_remapString(::std::string_view str) const;

    MCAPI void $switchFontsource(::Core::Path const& asciiName, ::Core::Path const& unicodeName);

    MCAPI ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    $getFontSources() const;
    // NOLINTEND
#else // @header-generator platform
    struct ReferenceData {};
#endif // @header-generator platform
#endif // @header-generator platform
};
