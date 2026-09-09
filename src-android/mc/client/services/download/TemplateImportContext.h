#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/DefaultImportContext.h"
#include "mc/client/resources/ImportContextType.h"
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/resources/ImportSuccess.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class IResourcePackRepository;
class IToastManager;
class PackManifest;
class PackReport;
class ResourcePack;
class ResourcePackManager;
class WorldTemplateManager;
namespace Core { class Path; }
// clang-format on

class TemplateImportContext : public ::DefaultImportContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mTemplateImportResultCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    TemplateImportContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TemplateImportContext();

    virtual ::ImportContextType getImportContextType() const;

    virtual void notifyEarlyImportStarted(bool);

    virtual void notifyImportSucceeded(::ResourcePack const*, ::ImportSuccess, ::PackManifest const&, ::PackReport const&, ::Core::Path const&);

    virtual void notifyImportFailed(::ImportFailure, ::PackManifest const*, ::PackReport*, ::Core::Path const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TemplateImportContext(
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IMinecraftEventing&,
        ::IToastManager&,
        std::function<void(std::optional<ImportFailure>, const std::string&)>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string const getUnknownPackName();
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
        std::function<void(std::optional<ImportFailure>, const std::string&)>
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
    MCNAPI ::ImportContextType $getImportContextType() const;

    MCNAPI void $notifyEarlyImportStarted(bool);

    MCNAPI void $notifyImportSucceeded(
        ::ResourcePack const*,
        ::ImportSuccess,
        ::PackManifest const&,
        ::PackReport const&,
        ::Core::Path const&
    );

    MCNAPI void $notifyImportFailed(::ImportFailure, ::PackManifest const*, ::PackReport*, ::Core::Path const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
