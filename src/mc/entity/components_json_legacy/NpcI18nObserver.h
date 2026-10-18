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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NpcI18nObserver& operator=(NpcI18nObserver const&);
    NpcI18nObserver(NpcI18nObserver const&);
#endif // @header-generator platform
    NpcI18nObserver();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NpcI18nObserver();
#else // @header-generator platform
    virtual void onLanguageChanged(::std::string const& code, bool languageSystemInitializing) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLanguageChanged(std::string const&, bool);
#else // @header-generator platform
    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    virtual void onLanguagesLoaded();
#else // @header-generator platform
    virtual void onLanguagesLoaded() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _loadNpcData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void _loadNpcData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLanguageChanged(std::string const&, bool);
#else // @header-generator platform
    MCFOLD void $onLanguageChanged(::std::string const& code, bool languageSystemInitializing);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLanguageKeywordsLoadedFromPack(::PackManifest const&);
#else // @header-generator platform
    MCFOLD void $onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLanguagesLoaded();
#else // @header-generator platform
    MCFOLD void $onLanguagesLoaded();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
