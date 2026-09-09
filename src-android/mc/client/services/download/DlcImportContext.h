#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ImportMode.h"
#include "mc/client/resources/DefaultImportContext.h"
#include "mc/client/resources/ImportContextType.h"
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/resources/ImportSuccess.h"
#include "mc/deps/core/file/PathBuffer.h"
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

class DlcImportContext : public ::DefaultImportContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>   mImportFilePath;
    ::ll::TypedStorage<4, 4, int> mTotalImportCount;
    ::ll::TypedStorage<4, 4, int> mCompletedImportCount;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcImportContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DlcImportContext();

    virtual ::Core::PathBuffer<std::string> generatePackFolderName(::PackManifest const&);

    virtual ::Core::PathBuffer<std::string> getBehaviorPacksPath() const;

    virtual ::Core::PathBuffer<std::string> getResourcePacksPath() const;

    virtual ::Core::PathBuffer<std::string> getWorldTemplatePath() const;

    virtual ::Core::PathBuffer<std::string> getSkinPacksPath() const;

    virtual ::Core::PathBuffer<std::string> getPersonaPath() const;

    virtual ::ImportMode getImportMode() const;

    virtual bool shouldUnzipToDestination(::PackManifest const&) const;

    virtual bool importAsFlatFile(::PackManifest const&) const;

    virtual ::ImportContextType getImportContextType() const;

    virtual void notifyEarlyImportStarted(bool);

    virtual void notifyImportStarted(::PackManifest const&);

    virtual void notifyMultiImportStarted(int);

    virtual void notifyImportSucceeded(::ResourcePack const*, ::ImportSuccess, ::PackManifest const&, ::PackReport const&, ::Core::Path const&);

    virtual void notifyImportFailed(::ImportFailure, ::PackManifest const*, ::PackReport*, ::Core::Path const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DlcImportContext(
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
    MCNAPI ::Core::PathBuffer<std::string> $generatePackFolderName(::PackManifest const&);

    MCNAPI ::Core::PathBuffer<std::string> $getBehaviorPacksPath() const;

    MCNAPI ::Core::PathBuffer<std::string> $getResourcePacksPath() const;

    MCNAPI ::Core::PathBuffer<std::string> $getWorldTemplatePath() const;

    MCNAPI ::Core::PathBuffer<std::string> $getSkinPacksPath() const;

    MCNAPI ::Core::PathBuffer<std::string> $getPersonaPath() const;

    MCNAPI ::ImportMode $getImportMode() const;

    MCNAPI bool $shouldUnzipToDestination(::PackManifest const&) const;

    MCNAPI bool $importAsFlatFile(::PackManifest const&) const;

    MCNAPI ::ImportContextType $getImportContextType() const;

    MCNAPI void $notifyEarlyImportStarted(bool);

    MCNAPI void $notifyImportStarted(::PackManifest const&);

    MCNAPI void $notifyMultiImportStarted(int);

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
