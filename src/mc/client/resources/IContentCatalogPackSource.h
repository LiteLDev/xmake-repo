#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IPackManifestFactory;
struct PackSourceOptions;
// clang-format on

class IContentCatalogPackSource : public ::PackSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentCatalogPackSource();

    virtual void refreshCatalogItems(::IPackManifestFactory&) = 0;

    virtual void setEnabled(bool) = 0;
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IPackManifestFactory;
// clang-format on

class IContentCatalogPackSource : public ::PackSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void refreshCatalogItems(::IPackManifestFactory&) = 0;

    virtual void setEnabled(bool enabled) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IContentCatalogPackSource {};
#endif // @header-generator platform
#endif // @header-generator platform
