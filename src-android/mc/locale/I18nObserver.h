#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
// clang-format on

class I18nObserver : public ::Core::Observer<I18nObserver, std::mutex> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~I18nObserver();

    virtual void onLanguageChanged(std::string const&, bool) = 0;

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&) = 0;

    virtual void onLanguagesLoaded() = 0;
    // NOLINTEND

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
};
