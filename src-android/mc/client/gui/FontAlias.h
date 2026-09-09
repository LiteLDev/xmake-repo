#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // FontAlias inner types declare
    // clang-format off
    struct ReferenceData;
    // clang-format on

    // FontAlias inner types define
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
};
