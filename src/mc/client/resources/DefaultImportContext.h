#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/ImportMode.h"
#include "mc/client/resources/ImportContext.h"
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
namespace Json { class Value; }
// clang-format on

class DefaultImportContext : public ::ImportContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>     mPackManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&> mPackRepository;
    ::ll::UntypedStorage<8, 24>                          mTemplateManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>      mEventing;
    ::ll::TypedStorage<8, 8, ::IToastManager&>           mToasting;
    ::ll::UntypedStorage<8, 24>                          mOriginPath;
    ::ll::TypedStorage<1, 1, bool>                       mPreferZippedPacks;
    ::ll::UntypedStorage<8, 48>                          mImportingFinishedCallback;
    ::ll::UntypedStorage<8, 48>                          mPackImportCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultImportContext& operator=(DefaultImportContext const&);
    DefaultImportContext(DefaultImportContext const&);
    DefaultImportContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DefaultImportContext();

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

    virtual bool modifyManifest(::PackManifest&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefaultImportContext(
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IMinecraftEventing&,
        ::IToastManager&,
        ::Core::Path const&,
        std::function<void(bool, const std::string&)>,
        std::function<void(bool, const PackManifest*)>
    );

    MCNAPI ::Json::Value _generateErrorToastData(::PackManifest const*, ::Core::Path const&, ::Core::Path const&);

    MCNAPI ::Json::Value _generateToastData(::PackManifest const*);

    MCNAPI std::string _getImportFailureMessageForTelemetry(::ImportFailure, ::PackReport*, ::Core::Path const&) const;

    MCNAPI void _pushToast(std::string const&, std::string const&, std::string const&, ::Json::Value const&);
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

    MCNAPI bool $modifyManifest(::PackManifest&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class DefaultImportContext {};
#endif // @header-generator platform
