#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/download/ContentEventType.h"
#include "mc/client/services/download/InitiatorCategory.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class PackManifest;
struct PackIdVersion;
// clang-format on

class IContentEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IContentEventListener();

    virtual void onDownloadEvent(::ContentEventType, ::InitiatorCategory, ::DlcId const&, std::string const&, std::vector<PackIdVersion> const&, ulong, double, int, bool, std::string const&, int, int) = 0;

    virtual void onImportEvent(::ContentEventType, ::InitiatorCategory, ::DlcId const&, std::string const&, std::vector<PackIdVersion> const&, bool, bool, std::string const&) = 0;

    virtual void onPackImportEvent(std::string const&, ::PackManifest const*, bool) = 0;
    // clang-format on
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
class IContentEventListener {};
#endif // @header-generator platform
