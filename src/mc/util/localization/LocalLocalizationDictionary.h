#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/locale/I18nObserver.h"
#include "mc/util/localization/ILocalizationDictionary.h"

// auto generated forward declare list
// clang-format off
class Localization;
class PackManifest;
namespace Core { class Path; }
// clang-format on

class LocalLocalizationDictionary : public ::ILocalizationDictionary, public ::I18nObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Localization>> mFallBackLoc;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Localization>> mCurrentLoc;
    ::ll::TypedStorage<1, 1, bool>                          mUseCurrentLoc;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalLocalizationDictionary();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalLocalizationDictionary();

    virtual std::string getLocString(std::string const&) const;

    virtual bool isLocalizationReady() const;

    virtual void _updateLoc();

    virtual void onLanguageChanged(std::string const&, bool);

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    virtual void onLanguagesLoaded();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LocalLocalizationDictionary(::Core::Path const&);

    MCNAPI bool _appendLoc(std::string const&, ::Localization&);

    MCNAPI void _initialize();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getLocString(std::string const&) const;

    MCNAPI bool $isLocalizationReady() const;

    MCNAPI void $_updateLoc();

    MCNAPI void $onLanguageChanged(std::string const&, bool);

    MCNAPI void $onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    MCNAPI void $onLanguagesLoaded();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LocalLocalizationDictionary {};
#endif // @header-generator platform
