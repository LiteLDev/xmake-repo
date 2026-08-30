#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Font;
class ResourceLoadManager;
class ResourceLocation;
namespace Core { class Path; }
namespace mce { class TextureGroup; }
// clang-format on

class FontRepository : public ::AppPlatformListener, public ::Bedrock::EnableNonOwnerReferences {
public:
    // FontRepository inner types define
    using NonNullFontPtr = ::gsl::not_null<std::shared_ptr<Font>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               mIsInitialized;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Font>>>> mLoadedFonts;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>>            mFontNameToIdentifier;
    ::ll::TypedStorage<8, 8, ulong>                                              mDefaultFontId;
    ::ll::TypedStorage<8, 8, ulong>                                              mRuneFontId;
    ::ll::TypedStorage<8, 8, ulong>                                              mUnicodeFontId;
    ::ll::TypedStorage<8, 8, ulong>                                              mSmoothFontLatinFontId;
    ::ll::TypedStorage<8, 8, ulong>                                              mUIFontId;
    ::ll::TypedStorage<8, 8, ulong>                                              mSmoothSmallFontID;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                      mFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                      mRuneFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                      mUnicodeFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                      mSmoothFontLatinHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                      mUIFontHandle;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::shared_ptr<Font>>>  mOriginalMinecraftFonts;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::shared_ptr<Font>>>  mOverriddenFonts;
    ::ll::UntypedStorage<8, 24>                                                  mFontLoadingTaskTrackers;
    ::ll::TypedStorage<8, 24, std::string>                                       mLanguageCode;
    ::ll::UntypedStorage<8, 24>                                                  mResourceLoadManager;
    ::ll::TypedStorage<1, 1, bool>                                               mIsOnLowMemoryDevice;
    // NOLINTEND

public:
    // prevent constructor by default
    FontRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FontRepository();

    virtual void onAppSuspended();

    virtual void onDeviceLost();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FontRepository(::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>, bool);

    MCNAPI void
    _queueBitmapFont(std::string const&, ::Core::Path const&, ::Core::Path const&, std::weak_ptr<mce::TextureGroup>);

    MCNAPI void _queueMsdfFont(std::string const&, ::Core::Path const&, std::weak_ptr<mce::TextureGroup>);

    MCNAPI void _setDefaultFont(std::string const&, ulong const, std::shared_ptr<Font>);

    MCNAPI void _setFontIfOverride(ulong const, std::shared_ptr<Font>);

    MCNAPI ulong addPreloadedFont(std::string const&, ::gsl::not_null<std::shared_ptr<Font>>);

    MCNAPI void clearStringCache();

    MCNAPI ::FontHandle getFontFromFontType(std::string const&) const;

    MCNAPI ::FontHandle getFontHandle(ulong const);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> getFontHandle() const;

    MCNAPI std::vector<ResourceLocation> getReloadFontTextures() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> getRuneFontHandle() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> getUnicodeFontHandle() const;

    MCNAPI bool haveDefaultFontsLoaded();

    MCNAPI void initDefaultFontHandles();

    MCNAPI bool isReloadingTextures();

    MCNAPI bool isRepositoryInitialized();

    MCNAPI void loadDefaultFonts(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void onLanguageChanged(std::string const&);

    MCNAPI void parseAndLoadMetadataFonts(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void reloadFontTextures(bool);

    MCNAPI void resetPerFontData();

    MCNAPI void setMinecraftSmoothFontStyle(float, std::string const&);

    MCNAPI void setUseFontOverrides(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong& INVALID_FONT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppSuspended();

    MCNAPI void $onDeviceLost();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
