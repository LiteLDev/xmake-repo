#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/legacy/ImportStatus.h"
#include "mc/client/legacy/RetrieveStatus.h"
#include "mc/client/legacy/WorldImporter.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class CallbackTokenContext;
struct ImportResult;
struct LegacyWorldInfo;
namespace Core { class Path; }
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Legacy {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldImporterNull : public ::Legacy::WorldImporter {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldImporterNull();

    virtual void _doRetrieve(std::shared_ptr<Social::User>, std::shared_ptr<CallbackTokenContext<std::function<void (Legacy::RetrieveStatus)>>>);

    virtual void _doImport(std::shared_ptr<Social::User>, ::LegacyWorldInfo const&, ::Core::Path const&, std::shared_ptr<CallbackTokenContext<std::function<void (Legacy::ImportStatus, float, std::shared_ptr<ImportResult>)>>>);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_doRetrieve(
        std::shared_ptr<Social::User>,
        std::shared_ptr<CallbackTokenContext<std::function<void(Legacy::RetrieveStatus)>>>
    );

    MCNAPI void $_doImport(
        std::shared_ptr<Social::User>,
        ::LegacyWorldInfo const&,
        ::Core::Path const&,
        std::shared_ptr<
            CallbackTokenContext<std::function<void(Legacy::ImportStatus, float, std::shared_ptr<ImportResult>)>>>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class WorldImporterNull {};
#endif // @header-generator platform

} // namespace Legacy
