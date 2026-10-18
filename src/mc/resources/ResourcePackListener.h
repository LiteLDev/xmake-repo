#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
// clang-format on

class ResourcePackListener {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ResourcePackListener();
#else // @header-generator platform
    virtual ~ResourcePackListener() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) = 0;
#else // @header-generator platform
    virtual void onActiveResourcePacksChanged(::ResourcePackManager& mgr) = 0;
#endif // @header-generator platform

    virtual bool onFullPackStackInvalid();

    virtual void onBaseGamePackDownloadComplete();

    virtual void onLanguageSubpacksChanged();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onResourceManagerDestroyed(::ResourcePackManager&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onResourceManagerDestroyed(::ResourcePackManager& mgr);
#else // LL_PLAT_C
    virtual void onResourceManagerDestroyed(::ResourcePackManager&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onJsonResourcesChanged(::ResourcePackManager&);
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onJsonResourcesChanged(::ResourcePackManager&);
#else // LL_PLAT_C
    virtual void onJsonResourcesChanged(::ResourcePackManager& resourcePackManager);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $onFullPackStackInvalid();

    MCNAPI void $onBaseGamePackDownloadComplete();

    MCNAPI void $onLanguageSubpacksChanged();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onResourceManagerDestroyed(::ResourcePackManager&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void $onResourceManagerDestroyed(::ResourcePackManager& mgr);
#else // LL_PLAT_C
    MCNAPI void $onResourceManagerDestroyed(::ResourcePackManager&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onJsonResourcesChanged(::ResourcePackManager&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void $onJsonResourcesChanged(::ResourcePackManager&);
#else // LL_PLAT_C
    MCNAPI void $onJsonResourcesChanged(::ResourcePackManager& resourcePackManager);
#endif


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
