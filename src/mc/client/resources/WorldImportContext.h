#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/DefaultImportContext.h"
#include "mc/client/resources/ImportContextType.h"
#include "mc/client/resources/ImportFailure.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class IResourcePackRepository;
class ResourcePackManager;
class ToastManager;
class WorldTemplateManager;
// clang-format on

class WorldImportContext : public ::DefaultImportContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mImportStartedCallback;
    ::ll::UntypedStorage<8, 48> mImportSuccessCallback;
    ::ll::UntypedStorage<8, 48> mImportFailedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldImportContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldImportContext();

    virtual ::ImportContextType getImportContextType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldImportContext(
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IMinecraftEventing&,
        ::ToastManager&,
        std::function<void()>,
        std::function<void(Core::PathBuffer<std::string>)>,
        std::function<void(ImportFailure)>,
        bool,
        bool,
        bool,
        bool
    );

    MCNAPI void notifyImportFailed(::ImportFailure);

    MCNAPI void notifyImportStarted();

    MCNAPI void notifyImportSucceeded(::Core::PathBuffer<std::string>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IMinecraftEventing&,
        ::ToastManager&,
        std::function<void()>,
        std::function<void(Core::PathBuffer<std::string>)>,
        std::function<void(ImportFailure)>,
        bool,
        bool,
        bool,
        bool
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class WorldImportContext {};
#endif // @header-generator platform
