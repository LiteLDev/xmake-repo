#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/DownloadWorldTemplateError.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IDlcBatcher;
class IStoreCatalogRepository;
// clang-format on

namespace World {

class DownloadableTemplateManagerBase : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDlcBatcher>> mDLCBatcher;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::function<void (std::optional<World::DownloadWorldTemplateError>)>>> mDownloadCallbacks;
    ::ll::TypedStorage<1, 1, bool> mCancelDownloadRequestedByUser;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&> mContentAquisition;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DownloadableTemplateManagerBase& operator=(DownloadableTemplateManagerBase const&);
    DownloadableTemplateManagerBase(DownloadableTemplateManagerBase const&);
    DownloadableTemplateManagerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DownloadableTemplateManagerBase();

    virtual std::optional<World::DownloadWorldTemplateError> downloadWorldTemplate(std::string const&, std::function<void (std::optional<World::DownloadWorldTemplateError>)>);

    virtual void _templateDownloadedCallback(std::string const&, bool);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DownloadableTemplateManagerBase(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>,
        ::IContentAcquisition&
    );

    MCNAPI void _notifyDownloadCallbackAndRelease(std::string const&, std::optional<World::DownloadWorldTemplateError>);

    MCNAPI bool canDownloadBeCancelled(std::string const&) const;

    MCNAPI void cancelDownload(std::string const&);

    MCNAPI float getDownloadProgress(std::string const&) const;

    MCNAPI std::string getDownloadTotalBytes(std::string const&) const;

    MCNAPI std::string getDownloadingProgressBytes(std::string const&) const;

    MCNAPI bool isDownloadingStep2Started(std::string const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>, ::IContentAcquisition&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<World::DownloadWorldTemplateError>
    $downloadWorldTemplate(std::string const&, std::function<void(std::optional<World::DownloadWorldTemplateError>)>);

    MCNAPI void $_templateDownloadedCallback(std::string const&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
