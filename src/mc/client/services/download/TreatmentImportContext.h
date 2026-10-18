#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/ImportContextType.h"
#include "mc/client/services/download/DlcImportContext.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class IResourcePackRepository;
class IToastManager;
class PackManifest;
class ResourcePackManager;
class WorldTemplateManager;
namespace Core { class Path; }
// clang-format on

class TreatmentImportContext : public ::DlcImportContext {
public:
    // prevent constructor by default
    TreatmentImportContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TreatmentImportContext();

    virtual ::Core::PathBuffer<std::string> getResourcePacksPath() const;

    virtual bool shouldUnzipToDestination(::PackManifest const&) const;

    virtual ::ImportContextType getImportContextType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TreatmentImportContext(
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IMinecraftEventing&,
        ::IToastManager&,
        ::Core::Path const&,
        std::function<void(bool, const std::string&)>,
        std::function<void(bool, const PackManifest*)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IMinecraftEventing&,
        ::IToastManager&,
        ::Core::Path const&,
        std::function<void(bool, const std::string&)>,
        std::function<void(bool, const PackManifest*)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::PathBuffer<std::string> $getResourcePacksPath() const;

    MCNAPI bool $shouldUnzipToDestination(::PackManifest const&) const;

    MCNAPI ::ImportContextType $getImportContextType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class TreatmentImportContext {};
#endif // @header-generator platform
