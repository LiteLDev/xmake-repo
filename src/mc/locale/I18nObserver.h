#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class I18nObserver : public ::Core::Observer<I18nObserver, std::mutex> {
#else // @header-generator platform
class I18nObserver : public ::Core::Observer<::I18nObserver, ::Bedrock::Threading::Mutex> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~I18nObserver();
#else // @header-generator platform
    virtual ~I18nObserver() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLanguageChanged(std::string const&, bool) = 0;
#else // @header-generator platform
    virtual void onLanguageChanged(::std::string const& code, bool languageSystemInitializing) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&) = 0;
#else // @header-generator platform
    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest) = 0;
#endif // @header-generator platform

    virtual void onLanguagesLoaded() = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
