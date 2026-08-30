#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/locale/I18nObserver.h"

// auto generated forward declare list
// clang-format off
class Actor;
class NpcComponent;
class PackManifest;
// clang-format on

class NpcI18nObserver : public ::I18nObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::NpcComponent*> mOwner;
    ::ll::TypedStorage<8, 8, ::Actor&>        mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcI18nObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcI18nObserver();

    virtual void onLanguageChanged(std::string const&, bool);

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    virtual void onLanguagesLoaded();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _loadNpcData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
